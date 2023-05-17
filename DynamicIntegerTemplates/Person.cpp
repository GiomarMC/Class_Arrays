#include <iostream>
#include <stdexcept>
#include "Person.h"
using namespace std;

Person::Person()
{
    name = "default";
    age = 0;
}

Person::Person(const string &name,int age)
{
    this -> name = name;
    this -> age = age;
}

ostream& operator <<(ostream &os,const Person &person)
{
    os << person.name << " : " << person.age;
    return os;
}