#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>


using namespace std;

void printfArrXi(int* array, int size)
{
    ofstream fout;
    fout.open("x.txt");
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int arrayX[100],arrayY[100],arrayZ[100], i, sizeX, sizeY, menu, arrayX2[100];

   printfArrXi();

    printf("Input size of array Yi:\n");
    scanf("%i",&sizeY);
    if(sizeX != sizeY)
    {
        while(sizeX != sizeY)
        {
            printf("Error! Size of arrays must be equal for next operation.Try again.\n");
            printf("Input size of array Yi:\n");
            scanf("%i",&sizeY);

        }
    }

    printf("Your array Yi:\n");
    for(i=0; i<sizeY; i++)
    {
        arrayY[i] = i;
        printf("Array[%i] = %i\n",i,arrayY[i]);
    }
    printf("\n");

    printf("Array Zi (Array Xi * Array Yi):\n");
    for(i=0; i < sizeY; i++)
    {
        arrayZ[i] = arrayX[i] * arrayY[i];
        printf("Array[%i] = %i\n",i, arrayZ);
    }


    getch();
    return 0;
}
