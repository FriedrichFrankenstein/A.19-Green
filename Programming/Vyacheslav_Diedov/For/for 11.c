#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n, a, b=0, c, d;
    printf("Enter n-  ");
    scanf("%i", &n);
    for (a=0;a<=n;a++){
    b+=pow(n+a, 2);
    printf("%i\n",b);
    	for (;a==n;){
			c=pow(2*n, 2);
			printf("%i\n", c);
			d=b+c;
			printf("%i\n",d);	
			break;	 
		 } 
	}
    getch();
    return 0;
}
