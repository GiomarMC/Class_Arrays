#include "class_integer.h"
#include <iostream>

int main()
{
    IntegerArray a(2);
    a.set(1,0);
    a.set(2,1);
    a.get(1);
    a.print();
    return 0;
}