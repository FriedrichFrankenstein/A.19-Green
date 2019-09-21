#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printArray ( int A [], int size){



}


int main()
{
    int M, N, i, h;
    printf("Enter length of array M and N: ");
    scanf("%i%i", &M, &N);
    printf("M = %i, N = %i\n", M, N);
    int array [M][N];
    for ( i = 0; i < M; i++){
        for ( h = 0; h < N; h++){
        array [i][h] = i;
        }
    }
     for ( i = 0; i < M; i++){
        for ( h = 0; h < N; h++){
        printf("Array [%i][%i] = %i\n", i, h, array [i][h]);
        }
    }

    getchar();
    return 0;
}

