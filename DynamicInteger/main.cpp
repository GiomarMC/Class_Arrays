#include "Dynamic_Integer.h"
#include <iostream>

int main()
{
    int list[3] = {1,2,3};
    DynamicIntegerArray dynamiclist(list,3);
    dynamiclist.pushback(8);
    dynamiclist.pushback(10);
    dynamiclist.insert(2,5);
    dynamiclist.remove(2);
    dynamiclist.print();
    return 0;
}