#include "overnightpackage.h"

overnightpackage::overnightpackage( const string &sName,
        connst string &sAddress, const string &sCity,  string &sState,
        int sZIP, const string &rName, const string &rAddress,
        const string &rCity, const string &rState, int rZIP,
        double w, double cost, double fee )
        : Package( sName, sAddress, sCity, rState, sZIP,
                  rName, rAddress, rCity, rState, rZIP, w, cost )
                  {
                      setOvernightFeePerOunce( fee );
                  }
void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
    overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;//ctor
}

double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
}


