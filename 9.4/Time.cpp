#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"

using namespace std;

Time::time()
{
    const time_t currentTime = time( 0 );
    const tm *localTime = localtime( &currentTime );
    setTime( localTime->tm_hour,localTime->tm_min,localTime->tm_sec );
}

//set new Time value using universal time;
ensure that
// the date remains consistent by setting invalid values to zero
void Time::setTime( int h, int m, int s )
{
    hour = ( h >= 0 && h < 24 )?h:0;
    minute = ( m >= 0 && m < 60 )?m:0;
    second = ( s >= 0 && s < 60 )?s:0;
}

void Time::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
    << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void Time::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour%12 ) << ":"
    << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
    << second << ( hour < 12 ? " AM " : " PM " );
}
