#include <stdio.h>
#include <string.h>
#include <math.h>



int main()
{
    while(1){
    int d1, d2, fraction, remainder, i;
    printf("Enter two numbers (d1 and d2): ");
    scanf("%i %i", &d1, &d2);
    if (d2 == 0){
        printf("d2 can't be 0. Enter another number.\n");
        continue;
    }
       fraction = d1/d2;
       remainder = d1 % d2;
       switch (remainder){
        case 1:{
            for ( i = 0; i < d2; i++){
                printf("%i\n", fraction);
            }
                printf("%i\n", remainder);
                break;
        }
        case 2:{
            i = 0;
            while ( i < d2){
                    i++;
                printf("%i\n", fraction);
            }
            printf("%i\n", remainder);
            break;
        }
        case 3:{
            i = 0;
            do {
                    i++;
                printf("%i\n", fraction);
            } while ( i < d2);
            printf("%i\n", remainder);
            break;

        }
        default:{
            break;
        }
       }
       if (remainder >= 1 && remainder <= 3){
        break;
       }
    }
    return 0;
}


