#include <iostream>
#include "Person.h"

Person::Person()
{
    name = "default";
    age = 0;
}

Person::Person(std::string& name,int age)
{
    this -> name = name;
    this -> age = age;
}

std::string Person::getName() const {return name;}

int Person::getAge() const {return age;}