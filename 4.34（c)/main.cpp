#include <iostream>

using namespace std;

int main()
{
    int number = 1;
    int accuracy;
    int factorial = 1;
    int x;
    double e = 1.0;
    double exponent = 1.0;

    cout << "Enter exponent: ";
    cin >> x;

    cout << "Enter desired accuracy of e: ";
    cin >> accuracy;

    while(number < accuracy )
    {
        exponent *= x;
        factorial *= number;
        e += exponent / factorial;
        number++;
    }
    cout << "e to the " << x << " is " << e << endl;

}
