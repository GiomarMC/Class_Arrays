#include <iostream>
#include <string>
#include "DynamicInteger.h"
#include "Person.h"
using namespace std;

int main()
{
    int list[3] = {1,2,3};
    float list2[3] = {1.5,2.5,3.5};
    string list3[3] = {"Giomar","Rayver","Raymar"};
    DynamicIntegerArray<int> dynamiclistint(list,3);
    dynamiclistint.insert(1,4);
    dynamiclistint.pusback(8);
    dynamiclistint.remove(2);
    dynamiclistint.print();
    DynamicIntegerArray<float> dynamiclistdouble(list2,3);
    dynamiclistdouble.insert(2,5.3);
    dynamiclistdouble.pusback(7.8);
    dynamiclistdouble.remove(4);
    dynamiclistdouble.print();
    DynamicIntegerArray<string> dynamicliststring(list3,3);
    dynamicliststring.insert(2,"Cecilia");
    dynamicliststring.pusback("Freddy");
    dynamicliststring.remove(4);
    dynamicliststring.print();
    Person Persona1("Giomar",26);
    Person Persona2("Rayver",21);
    Person Persona3("Raymar",10);
    Person Persona4("Freddy",59);
    Person Persona5("Cecilia",45);
    Person list4[3] = {Persona1,Persona2,Persona3};
    DynamicIntegerArray<Person> dynamiclistperson(list4,3);
    dynamiclistperson.insert(1,Persona4);
    dynamiclistperson.insert(2,Persona5);
    dynamiclistperson.remove(1);
    dynamiclistperson.print();
    return 0;
}