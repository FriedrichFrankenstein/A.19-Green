#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int arrayX[100],arrayY[100],arrayZ[100], i, sizeX, sizeY, menu, arrayX2[100];
    printf("Input size of array Xi:\n");
    scanf("%i",&sizeX);
    printf("Your array Xi:\n");
    for(i=0; i<sizeX; i++)
    {
        arrayX[i] = i;
        arrayX2[i] = arrayX[i];
        printf("Array[%i] = %i\n",i,arrayX[i]);
    }
    arrayX2[sizeX] = arrayX[sizeX];
    printf("\n");
    printf("Array Xi with doubled even elements:\n");
    for(i = 0; i < sizeX; i++)
    {
        if(arrayX2[i]%2 == 0)
        {
            arrayX2[i] *=2;
        }
        printf("Array[%i] = %i\n",i,arrayX2[i]);
    }

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
