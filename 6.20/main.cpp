#include <iostream>

using namespace std;

int multiple( int,int );

int main()
{
    int number1;
    int number2;

    for( int i = 1; i<=3; i++ )
    {
        cout << "Enter two integers: ";
    cin >> number1 >> number2;

    if ( multiple( number1, number2 ))
        cout << number2 << "is  a multiple of " << number1 << "\n\n";
        else
            cout << number2 << " is not a multiple of " << number1 << "\n\n";
    }

    cout << endl;
}
int multiple( int a, int b )
{
    return !( b%a );
}


