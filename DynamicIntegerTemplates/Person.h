#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person();
        Person(const std::string&,int);
        std::string getName() const;
        int getAge() const;
        friend std::ostream& operator <<(std::ostream&,const Person&);
};

#endif