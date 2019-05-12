#ifndef DATEANDTIME_H
#define DATEANDTIME_H


class DateAndTime
{
    public:
        DateAndTime( int = 1, int = 1, int = 2000,
                    int = 0, int = 0, int = 0 );
                    void setDate( int, int ,int );
                    void setMonth( int );
                    void setDay( int );
                    void setYear( int );
                    void nextDay();
                    void setTime( int, int, int );
                    void setHour( int );
                    void setMinute( int );
                    void setSecond( int );
                    void tick();
                    int getMonth();
                    int getDay();
                    int getYear();
                    int getHour();
                    int getMinute();
                    int getSecond();
                    void printStandard();
                    void printUmiversal();
private:
   int month; // 1-12
   int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   int year; // 2000+
   int hour; // 0-23 (24 hour clock format)
   int minute; // 0-59
   int second; // 0-59
   bool leapYear(); // leap year
   int monthDays(); // days in month
}; // end class DateAndTime

#endif



