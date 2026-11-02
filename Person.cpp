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

void Person::writeToFile(const std::string& filename) const {
    std::ofstream file(filename);
    file << "Name: " << this->name << std::endl;
    file << "Age: " << this->age << std::endl;
    file.close();
}

std::istream& operator>>(std::istream& in, Person& person){
    std::cout << "Enter name: ";
    in >> person.name;
    std::cout << "Enter age: ";
    in >> person.age;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Name: " << person.name << std::endl;
    out << "Age: " << person.age << std::endl;
    return out;
}