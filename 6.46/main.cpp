#include <iostream>
using namespace std;

int mystery( int, int ); // function prototype

int main()
{
   int x; // first integer
   int y; // second integer

   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "The result is " << mystery( x, y ) << endl;
} // end main

// mystery multiplies a * b using recursion
int mystery( int a, int b )
{
   if ( b < 0 ) // if b is negative
   {
      // multiply both a and b by -1, so b is positive
      // note this multiplies answer by (-1)*(-1) = 1
      a *= -1;
      b *= -1;
   } // end if

   if ( b == 1 ) // base case
      return a;
   else // recursion step
      return a + mystery( a, b - 1 );
} // end function mystery
