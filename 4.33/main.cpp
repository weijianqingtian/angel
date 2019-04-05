#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter three integers:";
    cin >> a >> b >> c;

    if( a * a + b * b == c * c)
        cout << "It is a right triangle ";
    else
        if( b * b + c * c == a * a)
        cout << "It is a right triangle ";
    else
        if( a * a + c * c == b * b)
        cout << "It is a right triangle ";
    else
        cout << "It isn't a right triangle ";


}
