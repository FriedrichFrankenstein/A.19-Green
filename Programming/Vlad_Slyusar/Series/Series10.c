#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int number, i, var, K;
    printf("Enter number: ");
    scanf("%i", &number);
    for (i = 1; i <= number; i++){
        printf("Enter var: ");
        scanf("%i", &var);
        if ( var > 0){
            K = 1;
            printf("TRUE");
            break;
        }
    }
    if ( K != 1){
       printf("FALSE");
    }
    getch ();
    return 0;
}
