#include <iostream>

using namespace std;

int isEven( int );

int main()
{
    int x;

    for( int i = 1; i <= 3; i++ )
    {
        cout << "Enter an integer: ";
        cin >> x;

        if ( isEven( x ))
            cout << x <<" is an even \n\n";
        else
            cout << x <<" is not an even\n\n ";
    }

    cout << endl;
}

int isEven( int a )
{
    return !(a % 2);
}
