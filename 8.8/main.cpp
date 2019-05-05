#include <iostream>

using namespace std;

int main()
{
    a) unsigned int values[5] = { 2, 4, 6, 8, 10 };
    b) unsigned int *vPtr;\
    c) for ( size_t i = 0; i < 5; ++i )
    cout << "values[" << i << "]= " << values[i] << '\n';
    d) vPtr = values;
       vPtr = &values[ 0 ];
    e) for ( size_t offset2 = 0; offset2 < 5; ++offset2 )
    cout << "*( vPtr + " << offset2 << ") = "
    << *( VPtr + offset2 ) << '\n';
    f) for ( size_t offset1 = 0; offset1 < 5; ++offset1 )
    cout << "*(values + " << offset1 << ")= " << *( values + offset1 ) << '\n';
    h) values[4]
       *( values + 4 )
       vPtr[4]
       *( vPtr + 4 )
    i) &values[ 3 ]
        8
    j) &values[2]
       6
}
