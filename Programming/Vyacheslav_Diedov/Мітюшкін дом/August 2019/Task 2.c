//Task 2
#include <stdio.h>
#include <stdlib.h>

void rabbitsGeeses(int k);

int main()
{
	printf("Hello!!!\n");
	int quotes = 64;
	rabbitsGeeses(quotes);
	printf("Goodbye!!!");
	return 0;
}

void rabbitsGeeses(int k){
		int i, j, countRabbits = 0, countGeese = k / 2;
	for( i = 0; i <= k; i = i + 4 ){
		printf("Rabbits - %i  and ", countRabbits);
		countRabbits++;
		for ( j = k; j > 0; j = j - i - 2 ){
			printf("Geeses - %i\n", countGeese);
			countGeese -= 2;
			break;
		}
	}
}
