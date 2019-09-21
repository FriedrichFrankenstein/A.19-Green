#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n;
    do{
	printf("Enter n-  ");
    scanf("%i", &n);
	}while(n<0);
	while ((n/3) %3==0){
	printf("true");
	break;
	}
	while ((n/3) %3!=0){
	printf("false");
	break;
	}
    getch();
    return 0;
}
