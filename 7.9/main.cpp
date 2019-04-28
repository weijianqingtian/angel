#include <iostream>
#include <array>
using namespace std;

int main()
{
    int [2][3];
    2ÐÐ
    3ÁÐ
    6¸ö
    t[1][0] t[1][1] t[1][2]
    t[0][2] t[1][2]
    int t[1][2] = 0
 h) array < array< int, columns >, rows > array1 = {0};
    array < array< int, columns >, rows > array2 = {0};
 i) for ( size_t row = 0; row < a.size(); ++row )
    {
        for ( size_t column = 0; column < t[row].size(); ++column )
            cout << t[ row ][ column ] << ' ';
            cout << endl;
 j) for ( auto const &row: t )
 {
     for ( auto const &element : row )
        cout << element << ' ';
 }
 k) for (i=0; i<2; i++)
     for (j=0; j<3; j++)
     {
         cout << "t[" << i << "][" << j << "]=";
         cin >> a[i][j];
     }
 l)int h,l,Min = t[0][0];
   for (i=0; i<2; i++)
   {
       for (j = 0; j<3; j++ )
       {
           if(Min>t[i][j])
           {
               Min = t[i][j];
               h=i;
               l=j;
               }
       }
   }
   cout << "Min:" << "t[" << h << "][" << l << "]=" << a[h][l] << endl;
 m) for (j=0; j<3; j++)
 {
     cout << t[1][j];
 }
 n) total=0;
    for ( size_t row=0; row < t.size(); ++row )
        total += t[row][2];

    }
 o)

}
