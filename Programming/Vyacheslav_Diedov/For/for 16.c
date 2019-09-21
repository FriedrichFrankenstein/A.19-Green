#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n, i;
    printf("Enter n-  ");
    scanf("%i", &n);
    float a, p=1;
    printf("Enter a- ");
    scanf("%f", &a);
	for (i=a; p<=n; ++i){
		p*=a;
			if (p>a && p<=n){
			printf("%.2f\n", p);
			}
	}
	getch();
    return 0;
}
