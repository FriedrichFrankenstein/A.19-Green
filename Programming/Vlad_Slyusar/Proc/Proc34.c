#include <stdio.h>
#include <conio.h>
#include <math.h>


int Fact   ( int A){
    int i, result = 1;
    for ( i = 1; i <= A; i++){
         result *= i;
    }
    return result;

}
int main()
{
    int A, i;
    for (i = 0; i < 5; i++){
        printf ("Enter  number: ");
        scanf("%i", &A);
        printf("Result1: %i\n", Fact (A));
    }

    getch ();
    return 0;
}
