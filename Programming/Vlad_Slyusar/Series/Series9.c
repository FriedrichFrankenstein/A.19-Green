#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int number, i, var, counter, n = 0;
    printf("Enter number: ");
    scanf("%i", &number);
    for (i = 1; i <= number; i++){
        printf("Enter var: ");
        scanf("%i", &var);
        if ( var % 2 != 0){
            printf("%i\n", i);
            n++;
            counter++;
        }
    }
    printf("Result: %i", counter);
    getch ();
    return 0;
}
