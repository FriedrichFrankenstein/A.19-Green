#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n, k;
    printf("Enter n-  ");
    scanf("%i", &n);
    k=1;
	while ((k*k)<=n){
	++k;	
	}
	printf("%i\n",k-1);
    getch();
    return 0;
}
