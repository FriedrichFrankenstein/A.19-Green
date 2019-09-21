#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, number, sum = 0, n1;
    scanf("%d", &n);
    n1 = n;
    for (i = 1; i < n1; i*=10){
        number = n % 10;
        n /=10;
        sum += number;

    }
    printf  ("%i", sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

