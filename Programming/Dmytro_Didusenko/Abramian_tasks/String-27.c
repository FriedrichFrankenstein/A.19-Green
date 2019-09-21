#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[20], str2[20];
	int N1, N2, i, j;
	gets(str1);
	gets(str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	while(1){	
		scanf("%i%i", &N1, &N2);
		if(N1 <= len1 && N2 <= len2) break;
		printf("Wrong input. Try again\n");
	}
	int N = N1+N2 + 1;
	char* str = (char*)calloc(N, sizeof(char));
	strncpy(str, str1, N1);
	for(i=N1, j=0; i<N-1; i++, j++){
		str[i] = str2[len2-N2+j];
	}
	str[N] = 0;
	puts(str);
	free(str);
	return 0;
}
