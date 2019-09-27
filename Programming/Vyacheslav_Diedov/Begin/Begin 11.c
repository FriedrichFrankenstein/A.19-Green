//Дано 2 числа(не нуль). Знайти модулі додавання, віднімання, множення, ділення. 
#include <conio.h>
#include <stdio.h>
#include <math.h>

float main()
{
	float a,b;
	printf("Enter 2 numbers (not zero):\na=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	if (a==0 || b==0)
	{
	printf ("Incorrect data entered");
	}
	else
	{
		float ModuleSum, ModuleDiff, ModuleMult,	ModuleDiv;
		ModuleSum =  fabs(a)+fabs(b);
		ModuleDiff = fabs(a)-fabs(b);
		ModuleMult = fabs(a)*fabs(b);
		ModuleDiv = fabs(a)/fabs(b);
printf("ModuleSum=%.2f\nModuleDiff=%.2f\nModuleMult=%.2f\nModuleDiv=%.2f",ModuleSum,ModuleDiff,ModuleMult,ModuleDiv);	
	}
	return 0;
	getch();
}
