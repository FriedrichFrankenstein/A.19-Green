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
    int num = year % 10;
    printf("%i ", year);
	switch(num)
	{
		case 1: printf("��"); break;
		case 2: 
		case 3: 
		case 4: printf("����"); break;
		case 5: 
		case 6: 
		case 7: 
		case 8: 
		case 9: 
		case 0: printf("����"); break;
	}
	getch();
	return 0;
}
