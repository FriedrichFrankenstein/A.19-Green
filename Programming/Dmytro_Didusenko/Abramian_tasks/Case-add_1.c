#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("������ �� \n");
    int year;
    scanf("%i", &year);
    int animal = (year - 4) % 12;
	printf("г� ");
	switch(animal)
	{
		case 0: printf("������"); break;
		case 1: printf("������"); break;
		case 2: printf("�����"); break;
		case 3: printf("�����"); break;
		case 4: printf("�������"); break;
		case 5: printf("���"); break;
		case 6: printf("����"); break;
		case 7: printf("����"); break;
		case 8: printf("�����"); break;
		case 9: printf("�����"); break;
		case 10: printf("������"); break;
		case 11: printf("����"); break;
	}
	getch();
	return 0;
}
