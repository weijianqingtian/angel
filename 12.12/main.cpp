#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
using namespace std;

void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main()
{
    cout << fixed << setprecision( 2 );
    employees[ 0 ] = new SalariedEmployee(
      "John", "Smith", "111-11-1111", 6, 15, 1944, 800 );
   employees[ 1 ] = new HourlyEmployee(
      "Karen", "Price", "222-22-2222", 12, 29, 1960, 16.75, 40 );
   employees[ 2 ] = new CommissionEmployee(
      "Sue", "Jones", "333-33-3333", 9, 8, 1954, 10000, .06 );
   employees[ 3 ] = new BasePlusCommissionEmployee(
      "Bob", "Lewis", "444-44-4444", 3, 2, 1965, 5000, .04, 300 );

   int month = determineMonth();

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   for ( size_t i = 0; i < employees.size(); i++ )
   {
      employees[ i ]->print(); // output employee information
      cout << endl;

      // downcast pointer
      BasePlusCommissionEmployee *derivedPtr =
         dynamic_cast < BasePlusCommissionEmployee * >
            ( employees[ i ] );

      // determine whether element points to base-salaried
      // commission employee
      if ( derivedPtr != 0 ) // 0 if not a BasePlusCommissionEmployee
      {
         double oldBaseSalary = derivedPtr->getBaseSalary();
         cout << "old base salary: $" << oldBaseSalary << endl;
         derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
         cout << "new base salary with 10% increase is: $"
            << derivedPtr->getBaseSalary() << endl;
      } // end if

      // get current employee's birthday
      Date birthday = employees[ i ]->getBirthDate();

      // if current month is employee's birthday month, add $100 to salary
      if ( birthday.getMonth() == month )
         cout << "HAPPY BIRTHDAY!\nearned $"
            << ( employees[ i ]->earnings() + 100.0 ) << endl;
      else
         cout << "earned $" << employees[ i ]->earnings() << endl;

      cout << endl;
   } // end for

   // release objects pointed to by vector�s elements
   for ( size_t j = 0; j < employees.size(); j++ )
   {
      // output class name
      cout << "deleting object of "
         << typeid( *employees[ j ] ).name() << endl;

      delete employees[ j ];
   } // end for
} // end main

// Determine the current month using standard library functions of ctime
int determineMonth()
{
   time_t currentTime;
   char monthString[ 3 ];
   time( &currentTime );
   strftime( monthString, 3, "%m", localtime( &currentTime ) );
   return atoi( monthString );
} // end function determineMonth




