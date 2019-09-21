#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter year ");
    scanf("%i", &year);
    printf("Рiк  ");
    switch(year%12){
        case 4: printf("пацюк");
                            break;
        case 5: printf("корови");
                            break;
        case 6: printf("тигра");
                            break;
        case 7: printf("зайця");
                            break;
        case 8: printf("дракона");
                    break;
        case 9: printf("змiї");
                            break;
        case 10: printf("кiня");
                            break;
        case 11: printf("вiвці");
                            break;
        case 12: printf("мавпи");
                            break;
        case 1: printf("курки");
                            break;
        case 2: printf("собаки");
                    break;
        case 3: printf("свині");
        			break;
        }
    getch();
    return 0;
}	
