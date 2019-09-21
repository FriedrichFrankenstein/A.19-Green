#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, x2, y1, y2;
    while(666)
    {
        printf("Введiть початкову позицію тури:\n");
        scanf("%i%i",&x1,&y1);
        if(x1 > 8 || x1 < 1 || y1>8 || y1 <1 )
            printf("Введiть координати y вiд 1 до 8.Спробуйте ще раз!\n\n");
        else
            break;
    }
    while(666)
    {
        printf("Введiть точку в яку хочете перемістити туру:\n");
        scanf("%i%i",&x2,&y2);
        if(x2 > 8 || x2 < 1 || y2>8 || y2 < 1 )
            printf("Введiть координати y вiд 1 до 8.Спробуйте ще раз!\n\n");
        else
            break;
    }
        if(x1 == x2 && y1 == y2)
            printf("Ви ввели стартову позицію.");
        else if(x1 == x2 || y1 == y2)
        {
            printf("Перехід можливий.");
            return 0;
        }
        else
        {
            printf("Перехід неможливий.");
            return 0;
        }
    getch();
}

/*
Дано координати (як цілі від 1 до 8) двох полів шахової дошки.
Визначити, чи може тура за один хід перейти з одного із цих полів на інше.
*/
