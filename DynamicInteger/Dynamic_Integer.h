#ifndef _DYNAMIC_INTEGER_H_
#define _DYNAMIC_INTEGER_H_
#include <iostream>

class DynamicIntegerArray
{
    private:
        int *data;
        int size;
    public:
        DynamicIntegerArray()
        {
            this -> size = 0;
            data = new int[0];
        }
        DynamicIntegerArray(int arr[], int size)
        {
            this -> size = size;
            data = new int[size];
            for(int i = 0; i < size; i++)
                data[i] = arr[i];
        }
        DynamicIntegerArray(const DynamicIntegerArray &o)
        {
            this -> size = o.size;
            data = new int[o.size];
            for(int i = 0; i < o.size; i++)
                data[i] = o.data[i];
        }
        void pushback(int value)
        {
            int *newdata;
            newdata = new int[size + 1];
            for(int i = 0; i < size; i++)
                newdata[i] = data[i];
            newdata[size] = value;
            delete[] data;
            this -> size = ++size;
            data = newdata;
        }
        void insert(int pos, int value)
        {
            int *newdata;
            newdata = new int[size + 1];
            for(int i = 0; i < size + 1; i++)
            {
                if(i < pos - 1)
                    newdata[i] = data[i];
                else if(i == pos - 1)
                    newdata[i] = value;
                else
                    newdata[i] = data[i - 1];
            }
            delete[] data;
            this -> size = ++size;
            data = newdata;
        }
        void remove(int pos)
        {
            int *newdata;
            newdata = new int[size - 1];
            for(int i = 0; i < size - 1; i++)
            {
                if(i == pos)
                    continue;
                newdata[i] = data[i];
            }
            delete[] data;
            this -> size = --size;
            data = newdata;
        }
        void print() const
        {
            std::cout << "[ ";
            for(int i = 0; i < size; i++)
                std::cout << data[i] << " ";
            std::cout << "]" << std::endl;
        }
        ~DynamicIntegerArray()
        {
            delete[] data;
        }
};

#endif