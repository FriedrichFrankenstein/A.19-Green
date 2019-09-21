#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>
#include "Groshi.h"


using namespace std;



int main()
{
    Groshi sum1,sum2;
    while(666)
    {
        int menu;
        cout<<"1)From Keyboard\n2)From File\n0)Exit\n";
        cin>>menu;
        if(menu==0)
            break;
        switch(menu)
        {
        case 1:
            while(666)
            {
                cout<<"1)Input first sum from KB\n2)Input second sum from KB\n3)First sum + Second sum\n";
                cout<<"4)First sum - Second sum\n5)To cop\n6)From cop\n0)Exit\n";
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
                case 5:
                    sum1.ToCop();
                    sum2.ToCop();
                    (sum1+sum2).ToCop();
                    (sum1-sum2).ToCop();
                    break;
                case 6:
                    sum1.FromCop();
                    sum2.FromCop();
                    (sum1+sum2).FromCop();
                    (sum1-sum2).FromCop();
                    break;
                }
            }
        case 2:
            while(666)
            {
                cout<<"1)Input first sum from File\n2)Input second sum from File\n3)First sum + Second sum\n";
                cout<<"4)First sum - Second sum\n5)To cop\n6)From cop\n0)Exit\n";
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
                case 5:
                    sum1.ToCop();
                    sum2.ToCop();
                    (sum1+sum2).ToCop();
                    (sum1-sum2).ToCop();
                    break;
                case 6:
                    sum1.FromCop();
                    sum2.FromCop();
                    (sum1+sum2).FromCop();
                    (sum1-sum2).FromCop();
                    break;
                }
            }
        }
    }
    getch();

    return 0;
}
