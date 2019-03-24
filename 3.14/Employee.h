// Employee.h
#include <string>
using namespace std;

class Employee

{
public:
    Employee(const string&firstName, const string& lastName, int salary);
    string getFirstName()const;
    void setFirstName(const string& firstName);
    string getLastName() const;
    void setLastName(const string& lastName);
    int getSalary() const;
    void setSalary(int salary);
    ~Employee();
private:
    string firstName;
    string lastName;
    int salary;
}

