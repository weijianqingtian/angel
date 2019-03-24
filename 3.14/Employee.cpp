// Employee.cpp
#include <iostream>
#include "Employee.h";
#include <string>
using namespace std;
Employee::Employee(const string& firstName, const string& lastName, int salary)
{
    this->firstName = lastName;
    this->lastName = lastName;
    this->salary = salary > 0 ? salary : 0;
}
string Employee::getFirstName()const
{
    return firstName;
}
void Employee::setFirstName(const string& firstName )
{
    this->firstName = firstName;
}
string Employee::getLastName() const
{
    return lastName;
}
void Employee::setLastName(const string& lastName)
{
    this->lastName = lastName;
}
int Employee::getSalary() const
{
    return salary;
}
void Employee::setSalary(int salary)
{
    this->salary = salary > 0 ? salary : 0;
}
Employee::~Employee()
{

}

