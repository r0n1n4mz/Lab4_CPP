#include "Person.h"

Person::Person(){
    this->name = "Unknown";
    this->age = 0;
}

Person::Person(const std::string name){
    this->name = name;
    this->age = -1;
}

Person::Person(const int age){
    this->name = "Unknown";
    this->age = age;
}

Person::Person(const std::string name, const int age){
    this->name = name;
    this->age = age;
}

void Person::setName(const std::string name){
    this->name = name;
}

void Person::setAge(const int age){
    this->age = age;
}

std::string Person::getName() const{
    return this->name;
}

int Person::getAge() const{
    return this->age;
}