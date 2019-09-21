#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



void fillingArray (float *array, int length);

void printArray (float *array, int length );

int main(){
    srand(time(NULL));
    int length;
    float *array;
    char signOn;
    do {
    printf("Enter length of array: ");
    scanf("%i", &length);
    array = (float *) malloc(length * sizeof(float));
    if (array == NULL){
       printf("PROBLEM WITH MAMORY!");
       return 0;
    }
    fillingArray(array, length);
    printArray(array, length);
    free(array);
    printf("\nIf  want do it again press key, if don't want press Esc\n");
    signOn = getch();
    } while (signOn != 27);
    getch();
    return 0;
}

void fillingArray (float *array,   int length){
    int i;
    for (i = 0; i < length; i++){
        array[i] = rand() % 10;
    }
}

void printArray (float *array, int length ){
    int i;
    for (i = 0; i<length; i++){
            printf ("%g ", *(array+i));
    }
}





