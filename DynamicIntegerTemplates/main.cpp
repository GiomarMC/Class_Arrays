#include <iostream>
#include <string>
#include "DynamicInteger.h"
#include "Person.h"
using namespace std;

main()
{
    int list[3] = {1,2,3};
    double list2[3] = {1.5,2.5,3.5};
    string list3[3] = {"Giomar","Rayver","Raymar"};
    DynamicIntegerArray<int> dynamiclistint(list,3);
    dynamiclistint.insert(1,4);
    dynamiclistint.pusback(8);
    dynamiclistint.remove(2);
    dynamiclistint.print();
    DynamicIntegerArray<double> dynamiclistdouble(list2,3);
    dynamiclistdouble.insert(2,5.3);
    dynamiclistdouble.pusback(7.8);
    dynamiclistdouble.remove(4);
    dynamiclistdouble.print();
    DynamicIntegerArray<string> dynamicliststring(list3,3);
    dynamicliststring.insert(2,"Cecilia");
    dynamicliststring.pusback("Freddy");
    dynamicliststring.remove(4);
    dynamicliststring.print();
    return 0;
}