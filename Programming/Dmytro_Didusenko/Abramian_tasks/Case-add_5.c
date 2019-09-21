#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input random integer number in diapason 0-99 and press Enter button \n");
	int number;
	scanf("%i", &number);
	printf("%i - ", number);
	if (number >= 10 && number < 20) 
	{
		switch(number)
		{
			case 10: printf("ten"); break;
			case 11: printf("eleven"); break;
			case 12: printf("twelve"); break;
			case 13: printf("thirteen"); break;
			case 14: printf("fourteen"); break;
			case 15: printf("fifteen"); break;
			case 16: printf("sixteen"); break;
			case 17: printf("seventeen"); break;
			case 18: printf("eighteen"); break;
			case 19: printf("nineteen"); break;
		}
	}
	else
	{
		int digit1 = number % 10;
		int digit2 = number / 10;
		
		switch(digit2)
		{
			case 2: printf("twenty "); break;
			case 3: printf("thirty "); break;
			case 4: printf("forty "); break;
			case 5: printf("fifty "); break;
			case 6: printf("sixty "); break;
			case 7: printf("fseventy "); break;
			case 8: printf("eighty "); break;
			case 9: printf("ninty "); break;
		}
		switch(digit1)
		{
			//case 0: printf("zero"); break;
			case 1: printf("one"); break;
			case 2: printf("two"); break;
			case 3: printf("three"); break;
			case 4: printf("four"); break;
			case 5: printf("five"); break;
			case 6: printf("six"); break;
			case 7: printf("seven"); break;
			case 8: printf("eight"); break;
			case 9: printf("nine"); break;
			default: printf("zero");
		}
	}
}
