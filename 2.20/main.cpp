#include <iostream>

using namespace std;

int main()
{
    float r,d,C,S;
    float PI=3.14159;

    cout<<"请输入半径r=";
    cin>>r;
    d=2*r;
    cout<<"直径d="<<d<<endl;
    C=2*PI*r;
    cout<<"周长C="<<C<<endl;
    S=PI*r*r;
    cout<<"面积S="<<S<<endl;
}
