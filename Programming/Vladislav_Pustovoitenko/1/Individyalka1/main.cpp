#include <iostream>
#include "CFraction.h"
/*За допомогою С++ 11 або вище створити клас для роботи зі звичайними дробами, реалізувати операції:

приведення до дійсного числа,
отримання цілої частини,
перетворення у рядок*/

using namespace std;

int main()
{
    CFraction d1,d2,d3;
    cin>>d1;
    cin>>d2;
    cout<<"Addition:"<<endl;
    d3=d1+d2;
    cout<<d3<<endl;
    cout<<"Addition to double:"<<(double)d3<<endl;
    cout<<"Addition to integer:"<<(int)d3<<endl;
    cout<<"Addition to string:"<<d3.ToString()<<endl;
        cout<<"Subtraction:"<<endl;
    d3=d1-d2;
    cout<< d3<<endl;
    cout<<" Subtraction to double:"<<(double)d3<<endl;
    cout<<" Subtraction to integer:"<<(int)d3<<endl;
    cout<<" Subtraction to string:"<<d3.ToString()<<endl;
        cout<<"Multiplication:"<<endl;
    d3=d1*d2;
    cout<<d3<<endl;
    cout<<" Multiplication to double:"<<(double)d3<<endl;
    cout<<" Multiplication to integer:"<<(int)d3<<endl;
    cout<<" Multiplication to string:"<<d3.ToString()<<endl;
        cout<<"Division:"<<endl;
    d3=d1/d2;
    cout<<d3<<endl;
    cout<<" Division to double:"<<(double)d3<<endl;
    cout<<" Division to integer:"<<(int)d3<<endl;
    cout<<" Division to string:"<<d3.ToString()<<endl;





    return 0;
}
