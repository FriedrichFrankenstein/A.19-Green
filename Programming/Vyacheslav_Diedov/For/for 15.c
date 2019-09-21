#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i;
    float a;
    printf("Enter n-  ");
    scanf("%i", &n);
    printf("Enter a- ");
    scanf("%f", &a);
	for (i=1; i<=n; i++){
		a*=a;
		printf("%.2f\n", a);
	}
	getch();
    return 0;
}
