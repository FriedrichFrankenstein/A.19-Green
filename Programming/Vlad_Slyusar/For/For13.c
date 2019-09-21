#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int number;
    float i, sum = 0;
    printf ("Enter number :");
    scanf("%i", &number);
    for ( i = 1.1; i <= number; i+=0.2){
            printf ("i = %g\n", i);
            sum+=i;
    }
    for (i = 1.2; i <= number; i+=0.2){
        printf ("i1 = %g\n", i);
        sum-=i;
    }
    printf ("Result: %g", sum);
    getchar();
    return 0;
}
