#include <stdio.h>
#include <conio.h>

int main ()
{
    int N, i, sum = 0, number, N1;
    printf ("ENter your number: ");
    scanf ("%i", &N);
    N1 = N;
    for ( i = 1; i <= N1; i*=10){
        number = N % 10;
        printf ("number = %i\n", number);
        N /= 10;
        sum += number;
    }
    printf ("Result: %i ", sum);
    return 0;
    char *sen;

}
