#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

template <typename T>
void scanfArrayX(T* array,  int size)
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
                cout<<"Array["<< i << "] = " << array[i]<<endl;
        }
    }
    cout<<endl;
    fin.close();
}

template <typename T>
void doubleEvenElemens(T* array,int size)
{
    printf("Array Xi with doubled even elements:\n");
    for(int i = 0; i < size; i++)
    {
        if(array[i]%2 == 0)
        {
            array[i] *=2;
        }
       cout<<"Array["<< i << "] = " << array[i]<<endl;
    }
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
                cout<<"Array["<< i << "] = " << array[i]<<endl;
        }
    }
    cout<<endl;
    fin.close();
}

template <typename T>
void printfArrayZ(T* array1, T* array2, int size)
{
    T arrayZ[size] = {};
    cout<<"ArrayZ (Array Xi * Array Yi):\n";
    for(int i = 0; i < size; i++)
    {
        arrayZ[i] = array1[i] * array2[i];
        cout<<"Array["<< i << "] = " << arrayZ[i]<<endl;
    }
}


int main()
{
    int sizeX, arrayX[25], sizeY, arrayY[25], arrayX2[25];
    cout<< "Input size of ArrayX:\n";
    cin>> sizeX;
    scanfArrayX(arrayX,sizeX);
    doubleEvenElemens(arrayX,sizeX);
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

   getch();



    return 0;
}
