#include <iostream>
#include <string>
using namespace std;
 
 
string binary(unsigned char x){
    unsigned char mask=64;
    string s;
    for(int i=0; i<7; i++) {
        s.push_back((x&mask)>0 ? '1':'0');
        mask=mask>>1;
    }
    return s;
}
 
int main() {
    string l;
    string a;
    unsigned char x;
    while(cin >> x){
        l+=binary(x);
    }
    for(int i=0;i<l.size();i++)
    {
        if(l.at(i)=='0')
        {
            if(i==0||l.at(i-1)=='1')
            {
                if(i!=0)
                {
            a+=" ";
            a.push_back('0');
            a.push_back('0');
            a+=" ";
                } else {
                    a.push_back('0');
                    a.push_back('0');
                    a+=" ";
                }
            } 
            a.push_back(l.at(i));
        } else if(l.at(i)=='1')
        {
            if(i==0||l.at(i-1)=='0')
            {
                if(i!=0)
                {
                a+=" ";
                a.push_back('0');
                a+=" ";
                } else{ 
                    a.push_back('0');
                    a+=" ";
                }
            } 
            a.push_back(l.at(i));
        }   
    }
    for(int i=0;i<a.size();i++)
    {
        if(a.at(i)=='1')
        {
            a.at(i)='0';
        }
    }
    cout<<a;
    return 0;
}
