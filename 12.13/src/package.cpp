#include "package.h"

package::package( const string &sName, const string &sAddress,
                 const string &sCity, const string &sState, int sZIP, const string &rName, const string
                 &rAddress, const string &rCity, const string &rState, int rZIP, double w, double cost )
                 :senderName( sName ),
                 senderAddress( sAddress ),\senderCity( sCity ),
                 senderState( sState ), senderZIP( sZIP ),
                 recipientName( rName ),
                 recipientAddress( rAddress ),
                 recipientCity( rCity ),
                 recxipientState( rState ), recipientZIP( rZIP )
{
    setWeight( w );
    setCostPerOunce( cost );
}

void Package::setSenderName( const string &name )
{
    senderName = name;
}

string Package::setSenderName() const
{
   return senderName;
}

void Package::setSenderAddress( const string &address )
{
    senderAddress = address;
}

string Package::getSenderAddress() const
{
    return senderAddress;
}

void Package::setSenderCity( const string &city )
{
    senderCity = city;
}

string Package::getSenderCity() const
{
    return senderCity;
}

void Package::setSenderState( const string &state )
{
    senderState = state;
}

string Package::getSenderState() const
{
    return senderState;
}

void Package::setSenderZIP( int zip )
{
    senderZIP = zip;
}

int Package::getSenderZIP() const
{
    return senderZIP;
}

void Package::setRecipientName( const string &name )
{
    recipientName = name;
}

string Package::getRecipientName() const
{
    return recipienName;
}

void Package::setRecipientAddress( const string &address )
{
    recipientAddress = address;
}

string Package::getRecipientAddress() const
{
    return recipientAddress;
}

void Package::setRecipientCity( const string &city )
{
   recipientCity = city;
} // end function setRecipientCity

// return recipient's city
string Package::getRecipientCity() const
{
   return recipientCity;
} // end function getRecipientCity

// set recipient's state
void Package::setRecipientState( const string &state )
{
   recipientState = state;
} // end function setRecipientState

// return recipient's state
string Package::getRecipientState() const
{
   return recipientState;
} // end function getRecipientState

// set recipient's ZIP code
void Package::setRecipientZIP( int zip )
{
   recipientZIP = zip;
} // end function setRecipientZIP

// return recipient's ZIP code
int Package::getRecipientZIP() const
{
   return recipientZIP;
} // end function getRecipientZIP

// validate and store weight
void Package::setWeight( double w )
{
   weight = ( w < 0.0 ) ? 0.0 : w;
} // end function setWeight

// return weight of package
double Package::getWeight() const
{
   return weight;
} // end function getWeight

// validate and store cost per ounce
void Package::setCostPerOunce( double cost )
{
   costPerOunce = ( cost < 0.0 ) ? 0.0 : cost;
} // end function setCostPerOunce

// return cost per ounce
double Package::getCostPerOunce() const
{
   return costPerOunce;
} // end function getCostPerOunce

// calculate shipping cost for package
double Package::calculateCost() const
{
   return getWeight() * getCostPerOunce();
} // end function calculateCost

