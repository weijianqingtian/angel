#include <iostream>

using namespace std;
class Account
{
private:
    int rest;
public:
    Account(int x )
    {
        if( x < 0 )
        {
            rest = 0;
            cout << "������ĳ�ʼ�����Ч��";
        }
        else
            rest = x;
    }
    int credit(int a)
    {
        rest = rest + a;
        return rest;
    }
    int debit(int b)
    {
        if(b > rest)
            cout << "Debit amount exceeded account balance!\n";
        else
            rest = rest - b;
        return rest;
    }
    void getBalance()
    {
        cout << "������Ϊ��" << rest << endl;;
    }

};
main()
{
    Account account1(100);
    account1.getBalance();
    cout << "��������Ҫ����Ľ��:\n";
    int a;
    cin >> a;
    account1.getBalance();
    cout << "��������Ҫȡ�õĽ��:\n";
    int b;
    cin >> b;
    account1.debit(b);
    account1.getBalance();
    Account account2(200);
    account2.getBalance();
    cout << "��������Ҫ����Ľ��:\n";
    int c;
    cin >> c;
    account2.credit(c);
    account2.getBalance();
    cout << "��������Ҫȡ�õĽ��:\n";
    int d;
    cin >> d;
    account2.debit(d);
    account2.getBalance();
}
