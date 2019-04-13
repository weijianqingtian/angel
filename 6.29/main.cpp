#include <iostream>
#include <cmath>
using namespace std;
bool isPrimer( int n)

{
    int i,flag = 1;
    for(i = 2; i <= (n/2); i++ )
        if(n%i==0)
    {
        flag = 0;
    }
    return flag;

}
int main()
{
    int n,c = 0;
    bool flag;
    for(n = 2; n <= 10000; n++ )
    {
        flag = isPrimer(n);
        if(flag)
        {
            c++;
            if(c%10!=0)
                cout << "\t" << n;
        }
    }
}

