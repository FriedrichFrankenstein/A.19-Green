#include <stdio.h>
#include <conio.h>
#include <math.h>

void DigitCoumSum ( int K, int *pC, int *pS){
    while (1){
        *pS += K % 10;
        K /= 10;
        *pC = *pC + 1;
        if ( K < 1 ){
            break;
        }
    }



}
int main()
{
    int K = 0, C = 0, S = 0,  i;
    int *pC = &C, *pS = &S ;
    for ( i = 0; i < 5; i++){
        C = 0;
        S = 0;
        printf("Enter number : ");
        scanf("%i", &K);
        DigitCoumSum(K, pC, pS);
        printf("Result: number of number = %i, sum = %i\n", *pC, *pS );
    }

    getch ();
    return 0;
}
