#include <iostream>
using namespace std;

int main()
{
    int t,h,d,p;
    int n,m;
    cout << "������һ��4λ������" << endl;
    cin >> n;
    cout << "�����4λ���ǣ�" << n << endl;
    t=n/1000;
    h=(n-t*1000)/100;
    d=(n-t*1000-h*100)/10;
    p=n%10;
    m=p*1000+d*100+h*10+t;
    cout << "������4λ���ǣ�" << m << endl;
    return 0;
}
