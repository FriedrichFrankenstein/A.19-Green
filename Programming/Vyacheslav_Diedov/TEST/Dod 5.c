#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum;
    scanf("%d", &n);
        for (;n>0;n/=10)
        {
           sum+=(n%10);
        }
        printf("%d", sum);
    return 0;
}
