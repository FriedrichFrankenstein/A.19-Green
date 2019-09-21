#include <stdio.h>
#include <conio.h>

int main()
{
	int calc;
	float numA, numB, result;
	printf("Input two float pointed numbers A and B. Press Enter button\n");
	scanf("%f%f", &numA, &numB);
	printf("\nInput number of math operanion: \n1 - sum og two numbers \n2 - difference between two numbers \n3 - multiplication of two numbers \n4 - dividing two numbers \n");
	scanf("%i", &calc);
	if (numB == 0) printf("Number is forbidden");
	else
	{
		switch(calc)
		{
			case 1: result = numA + numB; break;
			case 2: result = numA - numB; break;
			case 3: result = numA * numB; break;
			case 4: result = numA / numB; break;
			default: printf("\nYou have entered a wrong number \n");
		}
	printf("Result - %g", result);
	}
	getch();
	return 0;
}
