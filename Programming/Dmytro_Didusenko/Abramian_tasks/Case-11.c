#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("Команды, которые может принимать локатор: \n 1 - Поворот налево; \n-1 - Поворот направо; \n 2 - Поворот на 180. \n");
    int dir1, dir2;
	scanf("%i%i", &dir1, &dir2);
	int totalDir = abs((dir1 + dir2) % 4);
	switch (totalDir)
	{
		case 0: printf("\nНаправление локатора - Север"); break;
		case 1: printf("\nНаправление локатора - Восток"); break;
		case 2: printf("\nНаправление локатора - Юг"); break;
		case 3: printf("\nНаправление локатора - Запад"); break;
	}
	getch();
}
