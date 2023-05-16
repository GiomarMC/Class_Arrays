#ifndef DINAMIC_INTEGER_H
#define DINAMIC_INTEGER_H

template <typename T>
class DynamicIntegerArray
{
    private:
        int size;
        T* data;
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(const T* elements, int);
        void pusback(const T&);
        void insert(int,const T&);
        void remove(int);
        void print() const;
        ~DynamicIntegerArray();
};

template <class T> DynamicIntegerArray<T>::DynamicIntegerArray()
{
    this -> size = size;
    data = new T[size];
}

template <class T> DynamicIntegerArray<T>::DynamicIntegerArray(const T* elements, int size)
{
    this -> size = size;
    data = new T[size];
    for(int i = 0; i < size; i++)
        data[i] = elements[i];
}

template <class T> void DynamicIntegerArray<T>::pusback(const T& elements)
{
    T* newdata;
    newdata = new T[size + 1];
    for(int i = 0; i < size; i++)
        newdata[i] = data[i];
    newdata[size] = elements;
    delete[] data;
    this -> size = ++size;
    data = newdata;
}

template <class T> void DynamicIntegerArray<T>::insert(int pos,const T& elements)
{
    T* newdata;
    newdata = new T[size + 1];
    for(int i = 0; i < size + 1; i++)
    {
        if(i < pos - 1)
            newdata[i] = data[i];
        else if(i == pos - 1)
            newdata[i] = elements;
        else
            newdata[i] = data[i - 1];
    }
    delete[] data;
    this -> size = ++size;
    data = newdata;
}

template <class T> void DynamicIntegerArray<T>::remove(int pos)
{
    if(pos >= 0 && pos < size)
    {
        T* newdata;
        newdata = new T[size - 1];
        int j = 0;
        for(int i = 0; i < size; i++)
        {
            if(i == pos - 1)
                continue;
            newdata[j] = data[i];
            j++;
        }
        delete[] data;
        this -> size = --size;
        data = newdata;
    }
}

template <class T> void DynamicIntegerArray<T>::print() const
{
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

template <class T> DynamicIntegerArray<T>::~DynamicIntegerArray()
{
    delete[] data;
}

#endif