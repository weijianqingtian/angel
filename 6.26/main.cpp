#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

double TempChangeF(double C)
{
    return 9.0/5.0*C +32;
}

double TempChangeC(double F)
{
    return(F-32)*5.0/9.0;
}

int main()
{
   cout << "oC is Celsius temperature, oF is Fahrenheit temperature:\n" ;

   for(int i = 1; i <= 7; i++)
    cout << setw(11) << "oC--->oF";

   cout << endl << endl;

   for (int i = 1; i <= 101; i++)
   {
       cout << setw(4) << i-1 << setw(7) << TempChangeF(i);
       if(i%7 == 0)
        cout << endl;
   }
   cout<<endl<<endl;
   for(int i=1;i<=6;i++)
      cout<<setw(13)<<"oF----->oC";
      cout<<endl<<endl;
   for(int i=32;i<=212;i++)
{
    cout<<setw(4)<<i<<setw(9)<<TempChangeC(i);
    if((i-31)%6 == 0)
        cout << endl;

}

return 0;
}
