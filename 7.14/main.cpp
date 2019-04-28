#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int main()
{
    vector<unsigned char>v;
    for(int i=0; i<20; i++)
    {
        int temp;
        cin >> temp;
        assert(temp >= 10&&temp <= 100);
        bool isExist = false;
        for (int j = 0; j<(int)v.size(); ++j)
        {
            if(temp == v[j])
            {
               isExist = true;
               break;
            }
        }
        if(isExist == false)
        {
            v.push_back((unsigned char)(temp));
        }
    }
    cout << "Different Numbers: ";
    for (int i=0; i < (int)v.size(); ++i)
    {
        cout << (int)v[i] << " ";
    }
}
