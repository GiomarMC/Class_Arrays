#ifndef _INTEGERARRAY_H_
#define _INTEGERARRAY_H_
#include <iostream>

class IntegerArray
{
    private:
        int *data;
        int size;
    public:
        IntegerArray(int size)
        {
            data = new int[size];
            this -> size = size;
        }
        IntegerArray(const IntegerArray &o)
        {
            data = new int[o.size];
            size = o.size;
            for(int i = 0; i < size; ++i)
                data[i] = o.data[i];
        }
        void set(int value,int pos)
        {
            data[pos] = value;
        }
        void get(int pos)
        {
            std::cout << data[pos] << std::endl;
        }
        void print()
        {
            std::cout << "Los elementos del Array son:\n";
            std::cout << "[ ";
            for(int i = 0; i < size; i++)
                std::cout << data[i] << " ";
            std::cout << "]";
        }
        ~IntegerArray()
        {
            delete[] data;
        }
};
#endif