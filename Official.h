#include"Person.h"
#include<string>

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
        Official(const std::string startDate, const std::string workPhonenumber, const std::string workOffice, const std::string workPlace, const std::string position, const float salary);

        void setStartDate(const std::string startDate);
        void setWorkPhonenumber(const std::string workPhonenumber);
        void setWorkOffice(const std::string workOffice);
        void setWorkPlace(const std::string workPlace);
        void setPosition(const std::string position);
        void setSalary(const float salary);
        void saveTofile(const std::string& filename) const;

        std::string getStartDate() const;
        std::string getWorkPhonenumber() const;
        std::string getWorkOffice() const;
        std::string getWorkPlace() const;
        std::string getPosition() const;
        float getSalary() const;

        friend std::istream& operator>>(std::istream& in, Official& official);
        friend std::ostream& operator<<(std::ostream& out, const Official& official);

};