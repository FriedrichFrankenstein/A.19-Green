#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

class Groshi
{
private:
    int grn,cop;
public:
    void InputFromKB()
    {
        cin>>grn>>cop;
    }
    void InputFromFile()
    {
        ifstream fin;//("Groshi.txt");
        fin.open("Groshi.txt");
        fin>>grn>>cop;
        cin>>grn>>cop;
        //fin.close();
    }
    void OutputToScreen()
    {
        cout<<grn<<","<<cop<<endl;
    }
    void OutputToFile()
    {
        ofstream fout;//("Groshi.txt");
        fout.open("Groshi.txt");
        fout<<grn<<" "<<cop<< endl;
        cout<<grn<<","<<cop<<endl;
        //fout.close();
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
    int ToCop()
    {
        return grn*100+cop;
    }
    void FromCop(int sum)
    {
        grn=sum/100;
        cop=sum%100;
    }
};

int main()
Groshi sum1,sum2;
    while(666)
    {
        int menu;
        cout<<"1)From Keyboard\n2)From File\n0)Exit\n";
        cin>>menu;
        switch(menu)
        {
        case 1:
            while(666)
            {
                cout<<"1)Input first sum from KB\n2)Input second sum from KB\n3)First sum + Second sum\n4)First sum - Second sum\n0)Exit\n";
                cin>>menu;
                if(menu==0)
                    break;
                switch(menu)
                {
                case 1:
                    sum1.InputFromKB();
                    sum1.OutputToScreen();
                    break;
                case 2:
                    sum2.InputFromKB();
                    sum2.OutputToScreen();
                    break;
                case 3:
                    (sum1+sum2).OutputToScreen();
                    break;
                case 4:
                    (sum1-sum2).OutputToScreen();
                    break;
                }
            }
        case 2:
            while(666)
            {
                cout<<"1)Input first sum from File\n2)Input second sum from File\n3)First sum + Second sum\n4)First sum - Second sum\n0)Exit\n";
                cin>>menu;
                if(menu==0)
                    break;
                switch(menu)
                {
                case 1:
                    sum1.InputFromFile();
                    sum1.OutputToFile();
                    break;
                case 2:
                    sum2.InputFromFile();
                    sum2.OutputToFile();
                    break;
                case 3:
                    (sum1+sum2).OutputToScreen();
                    (sum1+sum2).OutputToFile();
                    break;
                case 4:
                    (sum1-sum2).OutputToScreen();
                    (sum1-sum2).OutputToFile();
                    break;
                }
            }
        }
    }
    getch();

    return 0;
}
