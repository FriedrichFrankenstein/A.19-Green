#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("������ �� � ������� 20-69 � �������� ������ Enter \n");
    int age;
	scanf("%i", &age);
	int firstNum = age / 10;
	int secondNum = age % 10;
	switch(firstNum)
	{
		case 2: printf("�������� "); break;
		case 3: printf("�������� "); break;
		case 4: printf("����� "); break;
		case 5: printf("�'������� "); break;
		case 6: printf("س������� "); break;
	}
		switch(secondNum)
	{
		case 0: printf("����"); break;
		case 1: printf("���� ��"); break;
		case 2: printf("��� ����"); break;
		case 3: printf("��� ����"); break;
		case 4: printf("������ ����"); break;
		case 5: printf("�'��� ����"); break;
		case 6: printf("����� ����"); break;
		case 7: printf("�� ����"); break;
		case 8: printf("��� ����"); break;
		case 9: printf("���'��� ����"); break;
	}
	getch();	
}
