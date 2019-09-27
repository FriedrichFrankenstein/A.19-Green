#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n, k=1, i, a;
    printf("Enter n-  ");
    scanf("%i", &n);
    while (i<=n){
    	a+=i;
    	i++;
	while (k<=n){
	k+=k;	
	k++;	
	}
}
	printf("%i\n%i",k,a);
    getch();
    return 0;
}
