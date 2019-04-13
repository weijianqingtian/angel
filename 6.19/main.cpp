#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse( double, double );

int main()
{

   double side1; // value for first side
   double side2; // value for second side

   cout << fixed; // set floating-point number format

   // loop 3 times
   for ( int i = 1; i <= 3; i++ )
   {
      cout << "\nEnter 2 sides of right triangle: ";
      cin >> side1 >> side2;

      // calculate and display hypotenuse value
      cout << "Hypotenuse:  " << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } // end for

}
// hypotenuse calculates value of hypotenuse of
// a right triangle given two side values
double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );
} // end function hypotenuse
