#include<string>

class Person{
    protected:
        std::string name;
        int age;
    public:
        Person(); 
        Person(const std::string name);
        Person(const int age);
        Person(const std::string name, const int age);

        void setName(const std::string name);
        void setAge(const int age);

        std::string getName() const;
        int getAge() const;

};