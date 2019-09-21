#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("Введить количество-");
	scanf("%i", &num);
		if(num>=10 && num<20)
		{
			switch(num)
			{
				case 10: printf("десять");
								break;
				case 11: printf("одинадцать");
								break;
				case 12: printf("дванадцать");
								break;
				case 13: printf("тринадцать");
								break;
				case 14: printf("чотирнадцать");
								break;
				case 15: printf("пятнадцать");
								break;
				case 16: printf("шестнадцать");
								break;
				case 17: printf("семнадцать");
								break;
				case 18: printf("восемнадцать");
								break;
				case 19: printf("девятнадцать");
								break;
				case 40: printf("сорок");
								break;								
			}
		}
		else{
		switch(num/10)
		{
		case 2: printf("двадцять");
							break;
		case 3: printf("тридцять");
							break;
		default: printf("incorect");
		}	
		switch(num%10)
		{
		case 1: printf(" одно");
						break;
		case 2: printf(" два");
						break;
		case 3: printf(" три");
						break;				
		case 4: printf(" четири");
						break;				
		case 5: printf(" пять");
						break;				
		case 6: printf(" шесть");
						break;				
		case 7: printf(" сем");
						break;				
		case 8: printf(" восем");
						break;				
		case 9: printf(" девять");
						break;				
		}
	}
		switch(num)
		{
			case 10 ... 20:
			case 22 ... 30:
			case 32 ... 40: printf(" учебных заданий");
										break;
			case 21:
			case 31: printf(" учебное задание");
										break;
		}

	getch();
	return 0;
}
