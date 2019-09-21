#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <math.h>

using namespace std;

template <typename T>
void scanfArrayX(T* array, T* array1, int size)
{
    ifstream fin("x.txt");
    if (!fin.is_open())
        cout << "File can not be open!\n";
    else
    {
        cout<<"Array Xi:"<<endl;
        for(int i=0;i<size;i++)
        {
                fin>>array[i];
                array1[i] = array[i];
                cout<< array[i]<<" ";
        }
    }
    cout<<endl;
    fin.close();
}

template <typename T>
void positiveNegativeElemens(T* array,int size)
{
    printf("Array Xi with positive negative elements:\n");
    for(int i = 0; i < size; i++)
    {
        array[i] = fabs(array[i]);
        cout<< array[i]<<" ";
    }
    cout<<endl;
}

template <typename T>
void scanfArrayY(T* array,int size)
{
    ifstream fin("y.txt");
    if (!fin.is_open())
        cout << "File can not be open!\n";
    else
    {
        cout<<"Array Yi:"<<endl;
        for(int i=0;i<size;i++)
        {
                fin>>array[i];
                cout<< array[i]<<" ";
        }
    }
    cout<<endl;
    fin.close();
}

template <typename T>
void printfArrayZ(T* array1, T* array2, int size)
{
    T arrayZ[size] = {};
    printf("ArrayZ (Array Xi + Array Yi)/2 :\n");
    for(int i = 0; i < size; i++)
    {
        arrayZ[i] = (array1[i] + array2[i])/2.;
        cout<< arrayZ[i]<<" ";
    }
}


int main()
{
    double sizeX, arrayX[25], sizeY, arrayY[25], arrayX2[25];
    cout<< "Input size of ArrayX:\n";
    cin>> sizeX;
    scanfArrayX(arrayX,arrayX2,sizeX);
    positiveNegativeElemens(arrayX2,sizeX);
   while(666)
   {
       cout<< "Input size of ArrayY:\n";
       cin>> sizeY;
       if(sizeX == sizeY)
       {
        break;
       }
       else
       {
           cout<< "Size of ArrayY have to equal size of ArrayX!Try again.\n";
       }
   }
   scanfArrayY(arrayY,sizeY);
   printfArrayZ(arrayX,arrayY,sizeY);

    return 0;
}
