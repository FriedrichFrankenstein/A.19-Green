#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>




void changeArray (int *array, int length );

void printArray (int *array, int length );

int main(){
    srand(time(NULL));
    int length, i;
    int *array;
    char signOn;
    do {
    printf("Enter length of array: ");
    scanf("%i", &length);
    array = (int *) malloc(length * sizeof(int));
    if (array == NULL){
       printf("PROBLEM WITH MAMORY!");
       return 0;
    }
    for (i = 0; i < length; i++){
        array[i] = rand() % 10;
    }
    printArray(array, length);
    printf ("\n");
    changeArray(array, length);
    printArray(array, length);
    free(array);
    printf("\nIf  want do it again press key, if don't want press Esc\n");
    signOn = getch();
    } while (signOn != 27);
    getch();
    return 0;
}

void changeArray (int *array, int length ){
    int start, i, temp;
    if ( length % 2 == 0){
        start = 0;
    } else {
        start = 1;
    }
    for (i = start; i < length/2; i += 2){
        temp = array [i];
        array [i] = array[(length - 1) - i];
        array[(length - 1) - i] = temp;
    }
}

void printArray (int *array, int length ){
    int i;
    for (i = 0; i < length; i++){
            printf ("%i ", *(array+i));
    }
}





