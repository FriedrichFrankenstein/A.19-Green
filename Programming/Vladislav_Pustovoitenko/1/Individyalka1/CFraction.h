#ifndef CFRACTION_H_INCLUDED
#define CFRACTION_H_INCLUDED

#include <iostream>

using namespace std;

class CFraction
{
public:
CFraction(){};
CFraction(unsigned long int,unsigned long int);
void operator=(const CFraction&);
CFraction operator+(const CFraction&);
CFraction operator-(const CFraction&);
CFraction operator*(const CFraction&);
CFraction operator/(const CFraction&);
operator int();
operator double();
string ToString();

friend ostream& operator<<(ostream&,CFraction&);
friend istream& operator>>(istream&,CFraction&);
protected:
unsigned long int a=0;
unsigned long int b=1;
private:
};

#endif // CFRACTION_H_INCLUDED
