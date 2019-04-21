#include <iostream>
using namespace std;

int main()
{
    int t,h,d,p;
    int n,m;
    cout << "请输入一个4位的数字" << endl;
    cin >> n;
    cout << "输入的4位数是：" << n << endl;
    t=n/1000;
    h=(n-t*1000)/100;
    d=(n-t*1000-h*100)/10;
    p=n%10;
    m=p*1000+d*100+h*10+t;
    cout << "反向后的4位数是：" << m << endl;
    return 0;
}
