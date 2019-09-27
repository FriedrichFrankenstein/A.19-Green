#include <stdio.h>
#include <conio.h>
#define N 5


int main()
{
    int i=0, n[N], m=0;
    int sum=0;
    while(i<N){
    printf("Enter n=");
    scanf("%i", &n[i]);
    sum+=n[i];
    printf("Sum= %i\n", sum);
    i++;
	}
	i=0;
	while(i<N){
    n[i]*=sum;
    printf("n= %i\n", n[i]);
    i++;
	}
    return 0;
}
