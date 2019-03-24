#include <iostream>

using namespace std;
class Date

{
    int year;
    int month;
    int day;
public:
    Date(int year = 2000,int month = 1,int day = 1)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return year;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    int getMonth()
    {
        return month;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    int getDay()
    {
        return day;
    }
    void printTime()
    {
        cout << year << "Äê" << month << "ÔÂ" << day << "ÈÕ" << endl;
    }

};
int main()
{
    Date date;
    date.printTime();
    Date date1(2014,11,22);
    date1.printTime();
    return 0;
}
