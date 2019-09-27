#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{    SetConsoleCP(1251);
      SetConsoleOutputCP(1251);
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
        case 10: printf("коня");
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
        switch(year%10){
           	case 4 ... 5:printf(" зелений");
        					break;
           	case 6 ... 7:printf(" красний");
        					break;
        	case 8 ... 9:printf(" жовтий");
        					break;
        	case 0 ... 1:printf(" білий");
        					break;
           	case 2 ... 3:printf(" чорний");
        					break;
		}
    getch();
    return 0;
}	
