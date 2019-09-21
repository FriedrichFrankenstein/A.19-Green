#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* func(char str1[], char str2[]);

int main(){
	
	char str1[50], str2[10];
	
	puts("Input string");
	gets(str1);
	puts("Input substring");
	gets(str2);
	
	printf("%i\n", func(str1, str2));
	
	return 0;
}

int* func(char str1[], char str2[]){
	char* ps1 = &str1[0];
	char* ps2 = &str2[0];
	char* p = strstr(ps1,ps2);
	int* pos = (int*)malloc(2*sizeof(int));
 
	pos[0] = p-ps1;
	pos[1] = p-ps1;
 
	int i;
	int start = pos[0]+1;
 
	for(i = start; i < strlen(ps1); i++){
		if(p = strstr(ps1+start,ps2)){
			pos [1] = p-ps1;
  		}
  		start = pos [1];
	} 
 	return pos;
}
