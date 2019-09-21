#include <stdio.h>
#include <string.h>
#define N 20

int main(){
	
	char s1[N], s2[N];
	
	do{
		puts("Input the first string");
		gets(s1);
		puts("Input the second string");
		gets(s2);		
		if(N - strlen(s1) > strlen(s2)){
			strcat(s1, s2);
			puts(s1);
			break;
		}
		printf("\n");
	}while(1);
	
	return 0;
}
