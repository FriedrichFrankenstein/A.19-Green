#include <stdio.h>
#include <conio.h>



int main()
{
    int n, b, nf, sum;
    printf("Enter number-  ");
    scanf("%i", &n);
    for(b=1;b<=n;b++)
    {
    nf*=b;
    printf("nf- %i\n", nf);
    sum+=nf*b;
    printf("sum=%i\n", sum);
	}
	printf("All sum =%i", sum);
    getch();
    return 0;
}
