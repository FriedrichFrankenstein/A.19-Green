#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	char str[25];
	scanf("%s", str);
//	printf("Your string - ");
//	puts(str);
	int N = strlen(str);
	printf("Number of symbols - %i\n", N);
	for(i=N-1; i>=0; i--){
		printf("%c ", str[i]);
	}
	getch();
	return 0;
}
