#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int* getArray (){
    int  i, *array, arrayLength;
    printf("Enter length of array:");
    scanf("%i", arrayLength);
    array = (int *) calloc(arrayLength, sizeof(int));
    for (i = 0; i < arrayLength; i++){
        printf("Enter number for array [%i]: ", i);
        scanf("%i", (array+i));
    }

    return array;
}

int countSum (int *array)
{
    int i, sum = 0;
    for (i = 0; i < (_msize(array)/4); i++){
        sum += *(array + i);
    }
    return sum;
}
int main()
{
    int *array , sum;
    array = getArray( );
    sum = countSum(array);
    printf("Sum = %i", sum);
    free(array);
    getch();
    return 0;
}
