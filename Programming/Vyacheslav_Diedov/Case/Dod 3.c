#include <stdio.h>
#include <conio.h>

int main()
{
    int date, march;
    printf("Enter date  ");
    scanf("%i", &date);
    printf("Enter march ");
    scanf("%i", &march);
    printf("Number ");
    switch(march){
        case 1: printf("%i days of year",date);
                            break;
        case 2: printf("%i days of year",date+31);
                            break;
        case 3: printf("%i days of year",date+59);
                            break;
        case 4: printf("%i days of year",date+90);
                            break;
        case 5: printf("%i days of year",date+120);
                    break;
        case 6: printf("%i days of year",date+151);
                            break;
        case 7: printf("%i days of year",date+181);
                            break;
        case 8: printf("%i days of year",date+212);
                            break;
        case 9: printf("%i days of year",date+243);
                            break;
        case 10: printf("%i days of year",date+273);
                            break;
        case 11: printf("%i days of year",date+304);
                    break;
        case 12: printf("%i days of year",date+334);
        			break;
        }
    getch();
    return 0;
}	
