#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i, count;
    printf("Imput n- ");
    scanf("%i", &n);
    count=0;
    for (i=n; i>=1; i--){
    	count++;
    	n+=pow (count, i);
    	printf("%i\n", count);
	}
	printf("%i", n);
    return 0;
}
