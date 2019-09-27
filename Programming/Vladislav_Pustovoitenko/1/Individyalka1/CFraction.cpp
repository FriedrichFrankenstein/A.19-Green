#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <sstream>
#include "CFraction.h"

using namespace std;

CFraction::CFraction(unsigned long int a,unsigned long int b)
{
    this->a=a;
    this->b=b;
}

void CFraction::operator=(const CFraction& p)
{
    a=p.a;
    b=p.b;
    int i, Max;
    if(a>b)
        Max=a;
    else
        Max=b;

    for(i = 2; i <= Max; )
    {
        if(a%i == 0 && b%i == 0)
        {
            a /= i;
            b /= i;
        }
        else
            i++;
    }


}
CFraction CFraction::operator+(const CFraction& p)
{
    CFraction res;
    res.a=a*p.b+p.a*b;
    res.b=b*p.b;
    return res;
}
CFraction CFraction::operator-(const CFraction& p)
{
    CFraction res;
    res.a=a*p.b-p.a*b;
    res.b=b*p.b;
    return res;
}
CFraction CFraction::operator*(const CFraction& p)
{
    CFraction res;
    res.a=a*p.a;
    res.b=b*p.b;
    return res;
}
CFraction CFraction::operator/(const CFraction& p)
{
    CFraction res;
    res.a=a*p.b;
    res.b=b*p.a;
    return res;
}
CFraction::operator int()
{
    return a/b;
}
CFraction::operator double()
{
    return (double)a/(double)b;
}

string CFraction::ToString()
{
    stringstream ss;
    ss<<a<<'/'<<b;
    return ss.str();
}

ostream& operator<<(ostream& stream,CFraction& f)
{
    stream<<" a/b = "<<f.a<<"/"<<f.b<<" ";
    return stream;
}

istream& operator>>(istream& stream,CFraction& f)
{
    cout<<"Input a/b as two numbers(a and b):\n";
    stream>>f.a>>f.b;
    return stream;
}
