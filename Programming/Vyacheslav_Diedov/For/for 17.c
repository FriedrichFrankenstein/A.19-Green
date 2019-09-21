#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int n;
    float a, i;
    printf("Entered n- ");
    scanf("%i", &n);
    printf("Entered a- ");
    scanf("%f", &a);
    for (i=1+1;n>0;n--){
    	i+=pow(a, n);
	}
	printf("%.2f\n", i);
    getch();
    return 0;
}

