#include <stdio.h>
#include <conio.h>



int main()
{
    int n, a;
    printf("Enter n-  ");
    scanf("%i", &n);
    float sum =0;
    for(a=1;a<=n;a++)
    {
    sum +=1/(float)a;
    }
    printf("%.2f\n", sum);
    getch();
    return 0;
}
