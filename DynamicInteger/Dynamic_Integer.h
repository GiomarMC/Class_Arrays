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
            this -> size = ++size;
            data[size - 1] = value;
        }
        void insert(int pos, int value)
        {
            this -> size = ++size;
            for(int i = size - 1; i > pos; i--)
                data[i] = data[i - 1];
            data[pos] = value;
        }
        void remove(int pos)
        {
            for(int i = pos; i < size - 1; i++)
                data[i] = data[i + 1];
            this -> size = --size;
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