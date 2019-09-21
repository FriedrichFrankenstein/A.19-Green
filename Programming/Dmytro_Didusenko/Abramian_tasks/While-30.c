#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input sides of rectangular A and B, and side C of the square \n");
	int A, B, C, A1, counter=0;
	scanf("%i%i%i", &A, &B, &C);
	A1 = A;
	while(B >= C)
	{
	
		while(A >= C)
		{
			A -= C;
			counter++;
		}
			B -= C;
			A = A1;
		//counter++;
	}
	//int total = counterA * counterB;
	
	printf("%i", counter);
		
	getch();
	return 0;
}
//Узнать, каким образом можно избежать использования умножения в строчке 19
//Уточнить счетчик!!!
