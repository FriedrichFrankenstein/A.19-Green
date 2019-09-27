#include <stdio.h>

int main(){
	int n, i;
	printf("Input N: ");
	scanf("%i", &n);
	char string[n];
	printf("Input word with %i leters ", n);
	scanf("%s", &string);
	
	for(i = 0; i < n; i++){
		printf("String [%i] = %c\n", i, string[i]);
	}
	
	return 0;
}
