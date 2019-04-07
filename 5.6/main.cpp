#include <iostream>

using namespace std;

int main()
{
    int number;
    int count = 0;
    int total = 0;

    cout << "Enter integers (9999 to end ):" << endl;
    cin >> number;

    while(number != 9999 )
    {
        total += number;
        count ++;

        cin >> number;
    }
    if ( count != 0 )
        cout << "\nThe average is: "
         << static_cast < double > ( total ) / count << endl;
    else
        cout << "\nNo numbers were entered." << endl;

}
