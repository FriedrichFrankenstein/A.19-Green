#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int number, i, var = 0, var1 = 0 , counter = 0;
    printf("Enter number: ");
    scanf("%i", &number);
    for (i = 1; i <= number; i++, var1 = var){
        printf("Enter var: ");
        scanf("%i", &var);
        if ( var < var1 ){
            counter ++;
            printf("%i\n", var1);
        }

    }
    printf("Number: %i", counter);

    getch ();
    return 0;
}
