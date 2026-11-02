#include "Official.h"

Official::Official() : Person(){
    this->name = "Unknown";
    this->age = 0;
    this->starDate = "Unknown";
    this->workPhonenumber = "Unknown";
    this->workOffice = "Unknown";
    this->workPLace = "Unknown";
    this->position = "Unknown";
    this->salary = 0.0;
}

Official::Official(const std::string Name, const int age, const std::string startDate, const std::string workPhonenumber, const std::string workOffice, const std::string workPlace, const std::string position, const float salary) : Person(Name, age){
    this->name = Name;
    this->age = age;
    this->starDate = startDate;
    this->workPhonenumber = workPhonenumber;
    this->workOffice = workOffice;
    this->workPLace = workPlace;
    this->position = position;
    this->salary = salary;
}

void Official::setStartDate(const std::string startDate){
    this->starDate = startDate;
}

void Official::setWorkPhonenumber(const std::string workPhonenumber){
    this->workPhonenumber = workPhonenumber;
}

void Official::setWorkOffice(const std::string workOffice){
    this->workOffice = workOffice;
}

void Official::setWorkPlace(const std::string workPlace){
    this->workPLace = workPlace;
}

void Official::setPosition(const std::string position){
    this->position = position;
}

void Official::setSalary(const float salary){
    this->salary = salary;
}

std::string Official::getStartDate() const{
    return this->starDate;
}

std::string Official::getWorkPhonenumber() const{
    return this->workPhonenumber;
}

std::string Official::getWorkOffice() const{
    return this->workOffice;
}

std::string Official::getWorkPlace() const{
    return this->workPLace;
}

std::string Official::getPosition() const{
    return this->position;
}

float Official::getSalary() const{
    return this->salary;
}

void Official::saveTofile(const std::string& filename) const{
    std::ofstream file(filename);
    if(file.is_open()){
        file << *this;
        file.close();
    }
}

std::istream& operator>>(std::istream& in, Official& official){
    std::cout << "Enter name: ";
    in >> official.name;
    std::cout << "Enter age: ";
    in >> official.age;
    std::cout << "Enter start date: ";
    in >> official.starDate;
    std::cout << "Enter work phone number: ";
    in >> official.workPhonenumber;
    std::cout << "Enter work office: ";
    in >> official.workOffice;
    std::cout << "Enter work place: ";
    in >> official.workPLace;
    std::cout << "Enter position: ";
    in >> official.position;
    std::cout << "Enter salary: ";
    in >> official.salary;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Official& official){
    out << "Name: " << official.name << std::endl;
    out << "Age: " << official.age << std::endl;
    out << "Start date: " << official.starDate << std::endl;
    out << "Work phone number: " << official.workPhonenumber << std::endl;
    out << "Work office: " << official.workOffice << std::endl;
    out << "Work place: " << official.workPLace << std::endl;
    out << "Position: " << official.position << std::endl;
    out << "Salary: " << official.salary << std::endl;
    return out;
}