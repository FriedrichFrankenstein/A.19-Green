#include <stdio.h>
#include <conio.h>



int main()
{
    int manth;
    printf("Enter manth ");
    scanf("%i", &manth);
    printf("It is ");
    switch(manth){
        case 12: printf("winter\n");
                            break;
        case 1: printf("winter\n");
                            break;
        case 2: printf("winter\n");
                            break;
        case 3 ... 5: printf("spring\n");
                            break;
        case 6 ... 8: printf("summer\n");
                    break;
        case 9 ... 11: printf("autumn\n");
                            break;
        default : printf("incorrect");
    }
    getch();
    return 0;
}
