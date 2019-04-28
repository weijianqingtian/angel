#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   const long ROLLS = 36000;
   const int SIZE = 13;

   // array expected contains counts for the expected
   // number of times each sum occurs in 36 rolls of the dice
   int expected[ SIZE ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
   int x; // first die
   int y; // second die
   int sum[ SIZE ] = {};

   srand( time( 0 ) );

   // roll dice 36,000 times
   for ( long i = 1; i <= ROLLS; i++ )
   {
      x = 1 + rand() % 6;
      y = 1 + rand() % 6;
      sum[ x + y ]++;
   } // end for

   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;

   // display results of rolling dice
   for ( int j = 2; j < SIZE; j++ )
      cout << setw( 10 ) << j << setw( 10 ) << sum[ j ]
         << setprecision( 3 ) << setw( 9 )
         << 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * sum[ j ] / ROLLS << "%\n";
} // end main
