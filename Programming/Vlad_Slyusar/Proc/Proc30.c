#include <stdio.h>
#include <conio.h>
#include <math.h>


int DigitN   ( int A, int N){
   int i, result = 0;
    for (i = 0; i <= N; i++){
        result = A % 10;
        //printf("r = %i", result);
        A /= 10;
        if (A == 0){
            return 1;
        }
    }
    return result;

}
int main()
{
    int A, N1 = 3, N2 = 1, N3 = 5;
    printf ("Enter  number: ");
    scanf("%i", &A);
    printf("Result1: %i\n", DigitN (A, N1));
    printf("Result2: %i\n", DigitN (A, N2));
    printf("Result3: %i\n", DigitN (A, N3));
    getch ();
    return 0;
}
