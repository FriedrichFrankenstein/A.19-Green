#include <stdio.h>
#include <string.h>
#include <conio.h>
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
         printf("%2i ",array [i][j]);
        }
        printf("\n");
    }
    printf("______________________________\n");
      for ( i = M - 1; i > 0; i--){
        for ( j = 0; j < N; j++){
                array [i][j] *= array [i-1][j];
        }
    }
    for ( i = 0; i < M; i++){
        for ( j = 0; j < N; j++){
        printf("%2i ",array [i][j]);
        }
        printf("\n");
    }


    getch();
    return 0;
}

