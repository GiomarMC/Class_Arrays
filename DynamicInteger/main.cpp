#include "Dynamic_Integer.h"
#include <iostream>

int main()
{
    int list[3] = {1,2,3};
    DynamicIntegerArray dynamiclist(list,3);
    dynamiclist.print();
    dynamiclist.pushback(7);
    dynamiclist.print();
    dynamiclist.pushback(11);
    dynamiclist.print();
    dynamiclist.insert(3,8);
    dynamiclist.print();
    dynamiclist.remove(2);
    dynamiclist.print();
    return 0;
}