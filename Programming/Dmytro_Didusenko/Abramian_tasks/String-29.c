#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char S[100], S0[10], C;
	int i, j=0, counter=0;
	printf("Input the first string\n");
	gets(S);
	printf("Input the second string\n");
	gets(S0);
	printf("Input your symbol\n");
	scanf("%c", &C);
	int len = strlen(S);
	int len0 = strlen(S0);
	for(i=0; i<len; i++){
		if(S[i] == C) counter++;
	}
	int* charAdd = (int*)calloc(counter, sizeof(int));
	for(i=0; i<len; i++){
		if(S[i] == C){
			charAdd[j] = i;
			j++;
		}
	}
	for(i=0; i<counter; i++){
		printf("%i ", charAdd[i]);
	}
	printf("\n");
//	for(i=0; i<counter; i++){
		strcpy(S+(charAdd[i]-len0), S0);
//	}
	puts(S);
	
	
	
	






	
	return 0;
}
