#ifndef GROSHI_H_INCLUDED
#define GROSHI_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class Groshi
{
private:
    int grn,cop;
public:

    void InputFromKB()
    {
        while(666)
        {
            cin>>grn>>cop;
            if(cop < 0 || cop >99 || grn <0)
            {
                cout<<"Cop must be from 0 to 99, Grn only positive!!!\nInput grn and cop again!\n";
            }
            else
                break;
        }
    }
    void InputFromFile()
    {
        ifstream fin("Groshi.txt");
        fin>>grn>>cop;
        InputFromKB();
        fin.close();
    }
    void OutputToScreen()
    {
        cout<<grn<<","<<cop<<endl;
    }
    void OutputToFile()
    {
        ofstream fout("Groshi.txt");
        fout<<grn<<" "<<cop<< endl;
        cout<<grn<<","<<cop<<endl;
        fout.close();
    }
    Groshi operator + (Groshi sum)
    {
        Groshi result;
        result.grn=grn+sum.grn;
        result.cop=cop+sum.cop;
        if(result.cop >= 100)
        {
            result.cop-=100;
            result.grn++;
        }
        return result;
    }
    Groshi operator - (Groshi sum)
    {
        Groshi result;
        result.grn=grn-sum.grn;
        result.cop=cop-sum.cop;

        if(result.cop < 0)
        {
            result.cop+=100;
            result.grn--;
        }
        return result;
    }
    void ToCop()
    {
        if(grn>= 0)
            cout<<grn*100+cop<<endl;
        else
            cout<<grn*100-cop<<endl;
    }
    void FromCop()
    {
        int sum;
        if(grn>= 0)
            sum = grn*100+cop;
        else
            sum = grn*100-cop;
        grn=sum/100;
        cop=sum%100;
        cout<<grn<<","<<cop<<endl;
    }
};


#endif // GROSHI_H_INCLUDED
