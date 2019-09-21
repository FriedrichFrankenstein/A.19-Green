#include <stdio.h>

main ()
{
	int number;
	printf ("Enter number: ");
	scanf ("%i", &number);
	if ( number < 1 && number > 999){
		printf ("Wrong number");
	}
	else if (number % 2 == 0) {
		if ( number  > 99){
			printf("Even+3_Signs");
		}
		else {
			printf("Even+2_Sing");
		}		
	}
	else if (number > 99){
		printf ("NotEven+3_Sings");
	}
	else {
		printf ("NotEven+2_Sings");
	}
	getchar();
	
}
