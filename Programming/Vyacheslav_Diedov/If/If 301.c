#include <conio.h>
#include <stdio.h>
int main ()
{
	int x;
	printf("x=");
	scanf("%i",&x);
	if(x==0)
	{
	printf("�������");
	}
	else
	{
		if (x>0)
		{
			if(x%2==0)
			{
			printf("������� ����� �����");
			}
			else
			{
			printf("������� ������� �����");
			}
		}else
		{
		if(x<0)
		{
		if(x%2==0)
			{
			printf("������� ����� �����");
			}
			else
			{
			printf("������� ������� �����");
			}
		}
		}
		}
	return 0;
	getch();
}
