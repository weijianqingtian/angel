#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[MAXSIZE]={0};
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Input integer:";
        cin >> temp;
        insertlnt(arr,MAXSIZE,temp);
    }
    showArr(arr,MAXSIZE);
}
 int findlnt(int* arr, int size, int target)
 {
     int i=0;
     bool bFound = false;
     for (int i=0; i < size; i++)
     {
         if(arr[i] == target)
         {
             bFound = true;
             break;
         }
         else if (arr[i] == 0)
         {
             break;
         }
     }
     if (!bFound)
     {
         i = -1;
     }
     return i;
 }
 int insertlnt(int* arr, int size, int num)
 {
     if(!isLegal(num))
     {
         return -1;
     }
     int i = findlnt(arr,size, num);
     bool blnsert = false;
     if (i == -1)
     {
         for(i=0; i<size; i++)
         {
             if (arr[i] == 0)
             {
                 arr[i] = num;
                 blnsert = true;
                 break;
             }
         }
     }
     if(!blnsert)
     {
         i = -1;
     }
     return i;
 }
 void showArr(int*arr,int size)
 {
     for (int i=0; i < size; i++)
     {
         if (arr[i]!=0)
         {
             cout << arr[i] << " ";
         }
         else
         {
             break;
         }
     }
     cout << endl;
 }
 bool isLegal(int input)
 {
     return ((intput > 0)&&(intput <= 100));
 }

