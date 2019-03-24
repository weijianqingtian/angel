#include <iostream>
#include "Employee.h"
#include<stdlib.h>
using namespace std;
void ShowEmployee(const Employee& emp)
{
     cout << emp.getLastName() << emp.getFirstName() << "年薪：" << emp.getSalary() * 12 << endl;
}
int main()
{

    Employee emp1("三", "张", 2000), emp2("四", "李", 3000);
    ShowEmployee(emp1);
    ShowEmployee(emp2);
    emp1.setSalary(emp1.getSalary() + emp1.getSalary() * (10.0 / 100));
    emp2.setSalary(emp2.getSalary() + emp2.getSalary() * (10.0 / 100));
    ShowEmployee(emp1);
    ShowEmployee(emp2);
    system("Pause");
    return 0;

}
