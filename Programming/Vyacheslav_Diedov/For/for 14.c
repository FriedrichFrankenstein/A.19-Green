#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, sum=0;
    printf("Enter n-  ");
    scanf("%i", &n);
	for (i = 1 ;i <= (2*n-1); i += 2){
		sum+=i;
		printf("%i\n", i);
	}
	getch();
    return 0;
}
