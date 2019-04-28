#include<iostream>
#include<array>

using namespace std;
const size_t rows=2;
const size_t columns=3;
int main()
{
     array<array<int,columns>,rows>sales;
   for( size_t row = 0; row<sales.size(); ++row )
    for(size_t column = 0; column<sales[row].size(); ++column)
        sales[row][column]=0;

}

