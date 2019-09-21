#include <stdio.h>
#include <conio.h>



int main()
{
    int manth;
    printf("Enter manth ");
    scanf("%i", &manth);
    printf("Manth has  ");
    switch(manth){
        case 1: printf("31 day\n");
                            break;
        case 2: printf("28 day\n");
                            break;
        case 3: printf("31 day\n");
                            break;
        case 4: printf("30 day\n");
                            break;
        case 5: printf("31 day\n");
                            break;
        case 6: printf("30 day\n");
                            break;
        case 7 ... 8: printf("31 day\n");
                            break;
        case 9: printf("30 day\n");
                            break;
        case 10: printf("31 day\n");
                            break;
        case 11: printf("30 day\n");
                            break;
        case 12: printf("31 day\n");
                            break;
        default : printf("incorrect");
    }
    getch();
    return 0;
}
