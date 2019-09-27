#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int i, count=0;
	char string[20];
	printf("Input words and numbers - ");
	scanf("%s", &string);
	
	for(i = 0; i <= 20; i++)
		if(string[i] >= '0' && string[i] <= '9'){
			count++;
			printf("Number[%i] = %c\n", i, string[i]);
		}
	
	printf("Number of numbers %i", count);
	return 0;
	
}
