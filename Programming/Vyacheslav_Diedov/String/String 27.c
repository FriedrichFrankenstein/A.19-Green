#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num1, num2, i;
	printf("Input num1 (max 14) = ");
	scanf("%i", &num1);
	printf("Input num2 (max 12) = ");
	scanf("%i", &num2);
	char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'};
	char s2[] = "opqrstuvwxyz";
	int n = num1 + num2;
	char* s3;
	s3 = (char*)malloc(n*sizeof(char*));
	strncpy(s3, s1, num1);
	for(i = 0; i < num1; i++){
		printf("%c ", *s3);
		s3++;
	}
	printf("\n");
	n = strlen(s2);
	n = n - num2;
	strcpy(s3, s2+n);
	for(i = 0; i < num2; i++){
		printf("%c ", *s3);
		s3++;
	}
	return 0;
}
