#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand (time(NULL));
    int M, N, i, j;
    printf("Enter length of array M and N: ");
    scanf("%i%i", &M, &N);
    printf("M = %i, N = %i\n", M, N);
    int array [M][N];
    for ( i = 0; i < M; i++){
        for ( j = 0; j < N; j++){
        array [i][j] = rand() %11;
        printf("Array [%i][%i] = %i\n", i, j, array [i][j]);
        }
    }
    printf("______________________________\n");
      for ( i = M - 1; i > 0; i--){
        for ( j = 0; j < N; j++){
                array [i][j] *= array [i-1][j];
        }
    }
    for ( i = 0; i < M; i++){
        for ( j = 0; j < N; j++){
        printf("Array [%i][%i] = %i\n", i, j, array [i][j]);
        }
    }


    getchar();
    return 0;
}

