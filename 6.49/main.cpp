#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159
inline double circleArea(double r)
{
    return PI * r * r;
}
int main()
{
    double radius;
    cout << "Enter the radius of the circle:";
    cin >> radius;

    cout << "The area of the circle is" << circleArea(radius) << endl;

    return 0;
}
