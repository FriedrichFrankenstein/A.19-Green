#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N, i, a, b, c;
    printf("������ ���������� ����� N:\n");
   while(666)
   {
    scanf("%i",&N);
    if(N<1)
        printf("����� N �� ���� > 0.��������� �� ���!\n");
    else
        break;
   }

    for(c=1; c<=N; c++)
    {
        for(b=1; b<=c; b++)
        {
            for(a=1; a<=b; a++)
            {
                if(c*c==a*a+b*b)
                {
                    printf("%3i^2 + %3i^2 = %3i^2;  ��������:  %5i + %5i = %5i; \n",a, b, c,a*a,b*b,c*c);
                }
            }
        }
    }

    getch();
    return 0;
}
/*
����  ����������  ����� N.
��������  �� ϳ������������ ����������� �����, ����� � ���� �� �������� N,
(a<=b<=c<=N.
*/

