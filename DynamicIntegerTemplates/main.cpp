#include <iostream>
#include <string>
#include "DynamicInteger.h"
#include "Person.h"
using namespace std;

int main()
{
    int list[3] = {1,2,3}; //Lista con tipo de dato int
    float list2[3] = {1.5,2.5,3.5}; //Lista con tipo de dato float
    string list3[3] = {"Giomar","Rayver","Raymar"}; //Lista con tipo de dato string
    //Creacion de objeto DynamicIntegerArray con tipo de dato int
    DynamicIntegerArray<int> dynamiclistint(list,3);
    dynamiclistint.insert(1,4);
    dynamiclistint.pusback(8);
    dynamiclistint.remove(2);
    dynamiclistint.print();
    //Creacion de objeto DynamicIntegerArray con tipo de dato float
    DynamicIntegerArray<float> dynamiclistdouble(list2,3);
    dynamiclistdouble.insert(2,5.3);
    dynamiclistdouble.pusback(7.8);
    dynamiclistdouble.remove(4);
    dynamiclistdouble.print();
    //Creacion de objeto DynamicIntegerArray con tipo de dato string
    DynamicIntegerArray<string> dynamicliststring(list3,3);
    dynamicliststring.insert(2,"Cecilia");
    dynamicliststring.pusback("Freddy");
    dynamicliststring.remove(4);
    dynamicliststring.print();
    //Creacion de objetos Persona
    Person Persona1("Giomar",26);
    Person Persona2("Rayver",21);
    Person Persona3("Raymar",10);
    Person Persona4("Freddy",59);
    Person Persona5("Cecilia",45);
    //Se añade los 3 primeros objetos a una lista de Tipo objeto Persona
    Person list4[3] = {Persona1,Persona2,Persona3};
    //Creacion de objeto DynamicIntegerArray con tipo objeto Persona
    DynamicIntegerArray<Person> dynamiclistperson(list4,3);
    dynamiclistperson.insert(1,Persona4);
    dynamiclistperson.insert(2,Persona5);
    dynamiclistperson.remove(1);
    dynamiclistperson.print();
    return 0;
}