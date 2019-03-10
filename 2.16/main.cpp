#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int product = 0;
    int difference = 0;
    int quotient = 0;

    cout << "Enter first integer: ";
    cin >> number1;

    cout << "Enter second integer: ";
    cin >> number2;

    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    quotient = number1 / number2;

    cout << "Sum is " << sum << endl;
    cout << "product is " << product << endl;
    cout << "difference is " << difference << endl;
    cout << "quotient is " << quotient << endl;
}
