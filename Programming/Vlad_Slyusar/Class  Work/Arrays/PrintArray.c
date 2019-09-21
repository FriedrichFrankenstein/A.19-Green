#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void printArray ( int A [], int size){

    int i;
    for ( i = 0; i < size; i++){

        printf("Array [%i] = %i\n", i, A [i]);
    }

}

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i, sum = 0;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int B [100];
    for ( i = 0; i < lengthArray; i++){
        B [i] = rand ()%101;
    }
    printArray(B, lengthArray);
    getch ();
    return 0;
}
