#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    #include <iostream>
#include "Rectangle.h" // include definition of class Rectangle
using namespace std;

int main()
{
   Point w( 1.0, 1.0 );
   Point x( 5.0, 1.0 );
   Point y( 5.0, 3.0 );
   Point z( 1.0, 3.0 );
   Point j( 0.0, 0.0 );
   Point k( 1.0, 0.0 );
   Point m( 1.0, 1.0 );
   Point n( 0.0, 1.0 );
   Point v( 99.0, -2.3 );

   Rectangle rectangles[ 4 ]; // array stores four rectangles

   // output rectangles
   for ( int i = 0; i < 4; i++ )
   {
      cout << "Rectangle" << i + 1 << ":\n";

      switch ( i ) // initialize four different rectangles
      {
         case 0: // first rectangle
            rectangles[ i ] = Rectangle( z, y, x, w );
            break;
         case 1: // second rectangle
            rectangles[ i ] = Rectangle( j, k, m, n );
            break;
         case 2: // third rectangle
            rectangles[ i ] = Rectangle( w, x, m, n );
            break;
         case 3: // fourth rectangle
            rectangles[ i ] = Rectangle( v, x, y, z );
            break;
      } // end switch

      cout << "length = " << rectangles[ i ].length();
      cout << "\nwidth = " << rectangles[ i ].width();
      rectangles[ i ].perimeter();
      rectangles[ i ].area();
      cout << "The rectangle "
         << ( rectangles[ i ].square() ? "is" : "is not" )
         << " a square.\n";
   } // end for
} // end main

}
