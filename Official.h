#pragma once
#include"Person.h"
#include<string>
#include <iostream>
#include <fstream>

class Official : public Person{
    private:
        std::string starDate;
        std::string workPhonenumber;
        std::string workOffice;
        std::string workPLace;
        std::string position;
        float salary;

    public:
        Official();
        Official(const std::string Name, const int age, const std::string startDate, const std::string workPhonenumber, const std::string workOffice, const std::string workPlace, const std::string position, const float salary);

        void setStartDate(const std::string startDate);
        void setWorkPhonenumber(const std::string workPhonenumber);
        void setWorkOffice(const std::string workOffice);
        void setWorkPlace(const std::string workPlace);
        void setPosition(const std::string position);
        void setSalary(const float salary);
        void saveTofile(const std::string& filename) const override;

        std::string getStartDate() const;
        std::string getWorkPhonenumber() const;
        std::string getWorkOffice() const;
        std::string getWorkPlace() const;
        std::string getPosition() const;
        float getSalary() const;

        void input(std::istream& in) override;
        void output(std::ostream& out) const override;

};