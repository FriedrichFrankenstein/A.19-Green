#include <stdio.h>
#include <conio.h>

int main()
{
    int exp;
    printf("Enter experience ");
    scanf("%i", &exp);
    printf("Wage ");
    switch(exp){
        case 0 ... 5: printf("50 $");
                            break;
        case 6 ... 15: printf("100 $");
                            break;
        case 16 ... 30: printf("%i $", 100+((exp-15)*10));
                            break;
        case 31 ... 80: printf("300 $");
        			break;
        default: printf("incorect");
        }
    getch();
    return 0;
}	
