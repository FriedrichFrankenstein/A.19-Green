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
        printf("����i�� ��������� ������� ����:\n");
        scanf("%i%i",&x1,&y1);
        if(x1 > 8 || x1 < 1 || y1>8 || y1 <1 )
            printf("����i�� ���������� y �i� 1 �� 8.��������� �� ���!\n\n");
        else
            break;
    }
    while(666)
    {
        printf("����i�� ����� � ��� ������ ���������� ����:\n");
        scanf("%i%i",&x2,&y2);
        if(x2 > 8 || x2 < 1 || y2>8 || y2 < 1 )
            printf("����i�� ���������� y �i� 1 �� 8.��������� �� ���!\n\n");
        else
            break;
    }
        if(x1 == x2 && y1 == y2)
            printf("�� ����� �������� �������.");
        else if(x1 == x2 || y1 == y2)
        {
            printf("������� ��������.");
            return 0;
        }
        else
        {
            printf("������� ����������.");
            return 0;
        }
    getch();
}

/*
���� ���������� (�� ��� �� 1 �� 8) ���� ���� ������ �����.
���������, �� ���� ���� �� ���� ��� ������� � ������ �� ��� ���� �� ����.
*/
