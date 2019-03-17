#include <iostream>

using namespace std;

int main()
{
   int number1 = 0 ;

   cout << "Enter first integer :";
    cin >> number1 ;

    if( number1 % 2 == 0 )
        cout << " number1 is odd " << endl;

    if( number1 %2 != 0)
       cout << "number1 is even " << endl;

   return 0;
}
