#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Enter number ");
    scanf("%i", &number);
    if(number==0){
    	printf("нуль");
	}else
	{
		switch(number)
		{
			case 10 ... 19: 
				switch(number)
				{
				case 10:printf("дес€ть");
								break;
				case 11:printf("одинадц€ть");
								break;
				case 12:printf("дванадц€ть");
								break;
				case 13:printf("тринадц€ть");
								break;
				case 14:printf("чотирнадц€ть");
								break;
				case 15:printf("п€тнадц€ть");
								break;
				case 16:printf("ш≥стнадц€ть");
								break;
				case 17:printf("с≥мнадц€ть");
								break;
				case 18:printf("в≥с≥мнадц€ть");
								break;							
				case 19:printf("дев€тнадц€ть");
								break;
			}	
		}
		switch(number/10)
		{
			case 2: printf("двадц€ть ");
								break;
			case 3: printf("тридц€ть ");
								break;
			case 4: printf("сорок ");
								break;
			case 5: printf("п'€тдес€т ");
								break;
			case 6: printf("ш≥стдес€т ");
								break;
			case 7: printf("с≥мдес€ть ");
								break;			
			case 8: printf("в≥с≥мдес€т ");
								break;
			case 9: printf("дев'€носто ");
								break;
		}
		switch(number%10)
		{
			case 1: printf("один");
							break;
			case 2: printf("два");
							break;					
			case 3: printf("три");
							break;					
			case 4: printf("чотири");
							break;	
			case 5: printf("п'€ть");
							break;	
			case 6: printf("ш≥сть");
							break;	
			case 7: printf("с≥м");
							break;	
			case 8: printf("в≥с≥м");
							break;	
			case 9: printf("дев'€ть");
							break;							
		}
	}
    getch();
    return 0;
}
