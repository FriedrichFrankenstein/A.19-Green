#include <conio.h>
#include <stdio.h>

main ()
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
			print("������� ������� �����");
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
			print("������� ������� �����");
			}
		}
		else
		{}
		}
		}
	return 0;
	getch();
}
