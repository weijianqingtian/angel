#include <iostream>

using namespace std;
int integerPower( int, int );

int main()
{
    int exp; // integer exponent
   int base; // integer base

   cout << "Enter base and exponent: ";
   cin >> base >> exp;
   cout << base << " to the power " << exp << " is: "
      << integerPower( base, exp ) << endl;
} // end main

// integerPower calculates and returns b raised to the e power
int integerPower( int b, int e )
{
   int product = 1; // resulting product

   // multiply product times b e number of times
   for ( int i = 1; i <= e; i++ )
      product *= b;

   return product; // return resulting product

}
