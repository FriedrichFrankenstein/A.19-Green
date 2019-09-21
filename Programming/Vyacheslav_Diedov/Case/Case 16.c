#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("Enter age-");
	scanf("%i", &num);
	switch(num/10){
		case 2: printf("הגאהצÿעü");
							break;
		case 3: printf("ענטהצÿעü");
							break;
		case 4: printf("סמנמך");
							break;
		case 5: printf("ןÿעהוסÿע'");
							break;
		case 6: printf("רטסעהוסÿע");
							break;
		default: printf("incorect");
		}
		switch(num%10)
		{
		case 1: printf(" מהטם");
						break;
		case 2: printf(" הגא");
						break;
		case 3: printf(" ענט");
						break;				
		case 4: printf(" קמעטנט");
						break;				
		case 5: printf(" ןÿעü");
						break;				
		case 6: printf(" רוסעü");
						break;				
		case 7: printf(" סולü");
						break;				
		case 8: printf(" גמסול");
						break;				
		case 9: printf(" הוגÿעü");
						break;				
		}
		switch(num%10)
		{
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf(" כוע");
						break;
			case 1: printf(" דמה");
						break;
			case 2:
			case 3:
			case 4:printf(" דמהא");
						break;
		}
	getch();
	return 0;
}
