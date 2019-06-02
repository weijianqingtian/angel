#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class overnightpackage
{
    public:
        overnightpackage( const string &, const string &, const string &,
                         const string &, int, const string &, const string &, const string &,
                         const string &, int, double, double, double );

        void setOvernightFeePerOunce( double );
        void getOvernightFeePerOunce() const;

        double calculateCost() const;

    private:
        double overnightFeePerOunce;
};

#endif // OVERNIGHTPACKAGE_H
