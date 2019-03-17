#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int number5 = 0;

    cout << "Input five different integers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    if ( number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5 )
        cout << " Largest is " << number1 << endl;
    else if ( number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5 )
        cout << " Largest is " << number2 << endl;
    else if ( number3 > number2 && number3 > number4 && number3 > number1 && number3 > number5 )
        cout << " Largest is " << number3 << endl;
    else if ( number4 > number2 && number4 > number3 && number4 > number1 && number4 > number5 )
         cout << " Largest is " << number4 << endl;
    if ( number5 > number2 && number5 > number3 && number5 > number4 && number5 > number1 )
        cout << " Largest is " << number5 << endl;

     if ( number1 < number2 && number1 < number3 && number1 < number4 && number1 < number5 )
        cout << " Smallest is " << number1 << endl;
    else if ( number2 < number1 && number2 > number3 && number2 < number4 && number2 < number5 )
        cout << " Smallest  is " << number2 << endl;
    else if ( number3 < number2 && number3 < number4 && number3 < number1 && number3 < number5 )
        cout << "  Smallest is " << number3 << endl;
    else if ( number4 < number2 && number4 < number3 && number4 < number1 && number4 < number5 )
         cout << " Smallest is " << number4 << endl;
    if ( number5 < number2 && number5 < number3 && number5 < number4 && number5 < number1 )
        cout << " Smallest is " << number5 << endl;
    return 0;
}
