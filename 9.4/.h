#ifndef TIME_H
#define TIME_H

class time
{
public:
    Time();//constructor
    void setTime( int, int, int );
    void printUniversal() const;
    void printStandard() const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif

