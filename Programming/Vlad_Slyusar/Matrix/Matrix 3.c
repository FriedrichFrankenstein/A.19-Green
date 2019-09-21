#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int M, N, i, h;
    printf("Enter length of array M and N: ");
    scanf("%i%i", &M, &N);
    printf("M = %i, N = %i\n", M, N);
    int array [M][N];
    for ( i = 0; i < N; i++){
        for ( h = 0; h < M; h++){
        array [i][h] = h;
        }
    }
     for ( i = 0; i < M; i++){
        for ( h = 0; h < N; h++){
        printf("%i ", i, h, array [i][h]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}

