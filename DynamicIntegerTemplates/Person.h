#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person();
        Person(std::string&,int);
        std::string getName() const;
        int getAge() const;
};

#endif