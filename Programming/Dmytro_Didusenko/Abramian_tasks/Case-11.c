#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("�������, ������� ����� ��������� �������: \n 1 - ������� ������; \n-1 - ������� �������; \n 2 - ������� �� 180. \n");
    int dir1, dir2;
	scanf("%i%i", &dir1, &dir2);
	int totalDir = abs((dir1 + dir2) % 4);
	switch (totalDir)
	{
		case 0: printf("\n����������� �������� - �����"); break;
		case 1: printf("\n����������� �������� - ������"); break;
		case 2: printf("\n����������� �������� - ��"); break;
		case 3: printf("\n����������� �������� - �����"); break;
	}
	getch();
}
