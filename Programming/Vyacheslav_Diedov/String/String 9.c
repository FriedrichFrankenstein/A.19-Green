#include <stdio.h>

int main(){
	int n, i;
	printf("Input even N: ");
	scanf("%i", &n);
	char s1, s2;
	
	
	printf("Input leters C1 and C2 ");
	scanf("%s%s", &s1, &s2);
	char* string;
	string = (char*)malloc(n*sizeof(char*));
	
	for( i = 0; i < n; i + 2){
		*string = s1;
		string = string + 2;
	}
	
	string = string - n;
	
	for( i = 1; i < n; i + 2){
		*string = s2;
		string = (string + 1) + 2;
	}
	
	string = string - (n-1);
	
	for( i = 0; i < n; i++){
		printf("%c", string[i]);
	}
	
	return 0;
}
