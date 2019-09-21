#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 9
#define K 13

void fillingArray (int array [], int arrayLength);

void newFunction ( int array1 [], int array2 [], int array3 [], int *pnMin );

void printArray ( int array[], int *pnMin);

int main(){
    srand(time(NULL));
    int array1 [N], array2 [M], array3 [K], nMin = 0, *pnMin = &nMin;
    fillingArray (array1, N);
    fillingArray (array2, M);
    newFunction(array1, array2, array3, pnMin);
    getch();
    return 0;
}

void fillingArray (int array [], int arrayLength){
int i;
for (i = 0; i < arrayLength; i++){
    array[i] = rand() %6;
}
}

void newFunction ( int array1 [], int array2 [], int array3 [], int *pnMin ){

    int i;
    if ( N< M && N< K){
        *pnMin = N;
    } else if ( M< K){
        *pnMin = M;
    } else {
        *pnMin = K;
    }
    for ( i = 0; i < *pnMin; i++){
        if (array1 [i] > array2[i]){
            array3[i] = array1 [i];
        } else {
        array3[i] = array2 [i];
        }
    }
    printArray(array3, pnMin);


}

void printArray ( int array[], int *pnMin){
    int i;
    for  (i = 0; i < *pnMin; i++){
        printf("%i", array [i]);
    }


}
