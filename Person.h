#pragma once
#include<string>
#include<iostream>
#include<fstream>

class Person{
    protected:
        std::string name;
        int age;
        virtual void saveTofile(const std::string& filename) const;
        virtual void input(std::istream& in);
        virtual void output(std::ostream& out) const;

    public:
        Person(); 
        Person(const std::string name);
        Person(const int age);
        Person(const std::string name, const int age);

        void setName(const std::string name);
        void setAge(const int age);

        std::string getName() const;
        int getAge() const;

        friend std::istream& operator>>(std::istream& in, Person& person);
        friend std::ostream& operator<<(std::ostream& out, const Person& person);
};