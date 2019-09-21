#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int rowNumbers (int endSum, int sum, int i);

int main()
{
    int *sum, endSum, N, i;
    printf("Enter end sum of numbers: ");
    scanf("%i", &endSum);
    N = rowNumbers(endSum, 1, 1);
    printf("result = %i\n", N);
    sum = (int *) calloc(sizeof(int), N);
    sum [0] = 1;
    printf("%i\n", sum[0]);
    for (i = 1; i < N; i++){
        sum[i] = (1 + i) + sum [i - 1];
        printf("%i\n", sum[i]);
    }
    return 0;
}

int rowNumbers (int endSum, int sum, int i){
    if (sum > endSum){
        return i - 1;
    }
    return rowNumbers(endSum, sum +=i, ++i );

}



