#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float n, a, b, c, d, e;
    printf("Enter n-  ");
    scanf("%f", &n);
	for(a=n;a<(n+1);a=a+0.2){
		b+=a+0.1+a-0.2;
		printf("a= %.2f\n",a);
		printf("b= %.2f\n",b);
			for(c=n;c<(n+1);c=c+0.2){
			d-=(c+0.2)+(c+0.3);
			printf("a= %.2f\n",c);
			printf("b= %.2f\n",d);
			}
	}
	printf("%.2f",b-d);
	getch();
    return 0;
}
