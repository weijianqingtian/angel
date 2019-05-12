#include <iostream>
#include "rational.h"
class Rational
using namespace std;

Rational::Rational( int n, int d )
{
    numerator = n;
    denominator = d;
    reduction();
}

Rational Rational::addition( const Rational & a )
{
    Rational t;

    t.numerator = a.numerator * denominator;
    t.numerator += a.denominator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduction();

    return t;
}

Rational Rational::subtraction( const Rational &s )
{
    Rational t;

    t.numerator = s.denominator * numerator;
    t.numerator -= denominator * s.numerator;
    t.denominator = s.denominator * denominator;
    t.reduction();

    return t;
}

Rational Rational::multiplication( const Ratinal &m )
{
    Rational t;

    t.numerator = m.numerator * numerator;
    t.denominator = m.denominator * denominator;
    t.reduction();
    return t;
}

Rational Rational::division( const rational &v )
{
    Rational t;
    t.numerator = v.denominator * numerator;
    t.denominator = denominator * v.numerator;
    t.reduction();
    return t;
}
