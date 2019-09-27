#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "";
	int i, j;
	printf("\nInput maximum the length of the string = ");
	scanf("%i", &i);
	do{
		printf("\nInput text: ");
		scanf("%s", str);
		printf("Length of the string is %i", strlen(str));
		j = strlen( str );
	}while(	j < i );
	return 0;
}
