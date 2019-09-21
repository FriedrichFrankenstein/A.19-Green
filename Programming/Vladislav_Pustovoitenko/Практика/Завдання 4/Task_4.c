#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void iniArrayX( int size)
{
    int i, arrayX[100];
    for(i = 0; i < size; i++)
    {
        arrayX[i] = rand()%21 - 10;
        printf("ArrayX[%i] = %i\n",i,arrayX);
    }
    printf("\n");
}



void doubleEvenElements(int *arrayX[])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(*arrayX[i]%2 == 0)
        {
            *arrayX[i]*=2;
        }
        printf("Array[%i] = %i\n",i,arrayX[i]);
    }
    printf("\n");
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int arrayX[100] = {10,-5,7,8,0,-3,4,6,-2,0},arrayY[100],arrayZ[100], i, sizeX, sizeY, sizeZ, menu, arrayX2[100];

    while(666)
    {
        scanf("%i",&menu);
        switch(menu)
        {
        /*case 1:
            scanf("%i",&sizeX);
            iniArrayX( sizeX);
            arrayX2[100] = arrayX[100];*/

        case 2:
            doubleEvenElements( arrayX[100]);
        }
    }

    getch();
    return 0;
}
