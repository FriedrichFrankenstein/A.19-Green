#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int numNum (int i, int ourElem, int arr[N]);

int main ()
{
    srand(time(NULL));
    int arr[N], ourElem, i;
    for ( i = 0; i < N; i++){
        arr[i] = rand() % 10;
        printf("%i ", arr[i]);
    }
    printf("\nEnter necessary number: \n");
    scanf("%i", &ourElem);
    printf("\nResult = %i", numNum(0, ourElem, arr));
    getch();
    return 0;
}

int numNum (int i, int ourElem, int arr[N]){
    if ( i == N ){
        return 0;
    }
    if ( arr[i] == ourElem){
        return 1 + numNum(++i, ourElem, arr);
    }
    return numNum(++i, ourElem, arr);
}
