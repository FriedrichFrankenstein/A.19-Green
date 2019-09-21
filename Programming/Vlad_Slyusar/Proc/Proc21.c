#include <stdio.h>
#include <conio.h>
#include <math.h>

int SumRange ( int A, int B){
    int sum = 0, i;
    if (B < A){
        return 0;
    }
    for ( i = A; i <= B; i++){
            sum += i;
    }
    return sum;

}
int main()
{
    int A, B, C;
    printf ("Enter 3 numbers: ");
    scanf("%i%i%i", &A, &B, &C);
    printf("Sum ( A to B) = %i; sum ( B to C) = %i",SumRange(A, B), SumRange(B, C) );
    getch ();
    return 0;
}
