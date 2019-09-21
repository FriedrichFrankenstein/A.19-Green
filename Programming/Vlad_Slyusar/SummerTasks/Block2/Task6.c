#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 10

void sort ( int arr[], int num[] );

void printArray (int arr[], int num[]);

int main()
{
    srand ( time ( NULL ) );
    int arr[N], num[N];
    int i;
    for ( i = 0; i < N; i++ )
    {
        num[i] = i;
        arr[i] = 5 - rand() % 10;
    }
    printf("Origin arrays: \n");
    printArray(arr, num);
    sort ( arr, num );
    printf("\n\n\n\n");
    printf("Sorted arrays: \n");
    printArray(arr, num);
    getch();
    return 0;
}

void sort ( int arr[], int num[] )
{
    int i, minEl = 0, temp = INT_MIN, j, k = 0, minNum = INT_MAX;
    while ( k < 10)
    {
        minNum = 100;
        for ( i = 0; i < N; i++ )
        {
            if ( arr[i] < minNum && arr[i] > temp )
            {
                minEl = i;
                minNum = arr[minEl];
            }
        }
        for ( j = 0; j < N; j++ )
        {
            if ( arr [j] == arr[minEl] )
            {
                num[k] = j;
                k++;
            }
        }
         temp = arr[minEl];
         printf("Temp = %i\n", temp);
    }
}

void printArray (int arr[], int num[]){
    int i;
    for ( i = 0; i < N; i++){
        printf("%i  %i\n", num[i], arr[i]);
    }

}
