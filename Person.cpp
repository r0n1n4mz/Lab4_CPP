#include "Person.h"
#include <limits>

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

void Person::input(std::istream& in){
    std::cout << "Enter name: ";
    in >> name;
    std::cout << "Enter age: ";
    while (!(in >> age)) {
        if (in.eof()) return;

        in.clear();
        in.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
        std::cout << "Please enter a whole number for age: ";
    }
}

void Person::output(std::ostream& out) const{
    out << "Name: " << name << std::endl;
    out << "Age: " << age << std::endl;
}

void Person::saveTofile(const std::string& filename) const{
    std::ofstream file(filename);
    if(!file){
        std::cerr << "Failed to open the file for writing: " << filename << std::endl;
        return;
    }

    output(file);
    if(!file){
        std::cerr << "Failed to write to the file: " << filename << std::endl;
    }
}
