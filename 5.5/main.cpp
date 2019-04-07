#include <iostream>

using namespace std;

int main()
{
    int total;
    int number;
    int value;

    cout << "Enter the number of values to be summed "
      << "followed by the values: \n";
    cin >> number;

    for( int i = 1; i <= number ; i++ )
    {
        cin >> value;
        total += value;
    }
    cout << "Sum of the " << number << " values is " << total << endl;
}
