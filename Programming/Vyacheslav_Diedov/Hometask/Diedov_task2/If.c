#include <conio.h>
#include <stdio.h>
#include <windows.h>

/* ��� ������� ������������� x ����� �������� ��������� ������� f,
����������� ������������ ��������:
    	= -x, ���� x<=0,
f (x)   = pow(x), ���� 0 < x < 2,
        = 4, ���� x >= 2.*/
  
  void functionX(float num)
{
	printf("num= ");
	scanf("%f",&num);
	if(num<=0 || num>=2)
	{
		if(num<=0)
		{
		num=num;
		}
		else
		num=4;
	}
	else 
	num=num*num;
	printf("function=%.2f\n",num);
	return 0;
}

/*���� ��� ���������� ������ ����: A � B. 
���� �� �������� �� �����, �� ��������� ������ ���������� ������� �� ���� ��������, 
� ���� �����, �� ��������� ���������� ������� ��������. ������� ����� �������� ���������� A � B*/

	void valuesVariables(int num1, int num2)
	{
	int a, b;
	printf("\nnum1= ");
	scanf("%i",&num1);
	printf("num2= ");
	scanf("%i",&num2);
	if (num1!=num2)
	{
		if(num1>num2)
		{
		a=num1;
		b=num2;
		printf("num1=%i num2=%i\n",a,b);
		}
		else
		{
		a=num2;
		b=num2;
		printf("num1=%i num2=%i\n",a,b);
		}
	}
	else
	{
	a=0;
	b=0;
	printf("num1=%i num2=%i\n",a,b);
	}
	return 0;
}

/*���� ��� �����. ������� ���������� ����� �������� �� ���*/

void findLess(float number1, float number2)
{
	printf("\nEnrer two numbers-");
		scanf("%f%f",&number1,&number2);
	if (number1>=number2)
	{
	printf("Min - %.2f\n",number2);
	}
	else
	printf("Min - %.2f\n",number1);
	return 0;
}

//���� ����� �����. ������� ��� ������-�������� ���� "������������� ������ �����", "������� �����", "������������� �������� �����" � �. �.

	int definitionNumber (int numb)
	{
	printf("\nNumb= ");
	scanf("%i",&numb);
	if(numb==0)
	{
	printf("�������\n");
	}
	else
	{
		if (numb>0)
		{
			if(numb%2==0)
			{
			printf("������� ����� �����\n");
			}
			else
			{
			printf("������� ������� �����\n");
			}
		}else
		{
		if(numb<0)
		{
		if(numb%2==0)
			{
			printf("������� ����� �����\n");
			}
			else
			{
			printf("������� ������� �����\n");
			}
		}
		}
		}
		return 0;
	}
	
/*���� ��� ����� �����. ����� ���������� ������������� � ���������� ������������� ����� � �������� ������. */	
	
int positive(int a, int b, int c)
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	if(a>0)
	{
	a=1;
	}
	else
	a=0;
		if(b>0)
		{
		b=1;
		}
		else
		b=0;
			if(c>0)
			{
			c=1;
			}
			else
			c=0;
	int xPos;
	xPos=a+b+c;
	return xPos;
}

int negative(int a, int b, int c)
{
	if(a<0)
	{
	a=1;
	}
	else
	a=0;
		if(b<0)
		{
		b=1;
		}
		else
		b=0;
			if(c<0)
			{
			c=1;
			}
			else
			c=0;
	int xNeg;
	xNeg=a+b+c;
	return xNeg;
}

int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int a, b, c;
	printf("Enter 3 numbers:\n");
	scanf("%i%i%i",&a,&b,&c);
	int xPos, xNeg;
	xPos= positive (a,b,c);
	xNeg= negative (a,b,c);
	printf("Positive nunber %i\nNegative number %i\n\n",xPos,xNeg);	
	float num;
	functionX(num);
	int num1, num2;
	valuesVariables (num1,num2);
	float number1, number2; 
	findLess(number1, number2);
	int numb;
	definitionNumber(numb);
	getch();
	return 0;
}
