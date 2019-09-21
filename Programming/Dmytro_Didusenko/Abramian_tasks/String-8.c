#include <stdio.h>
#include <conio.h>

int main(){
	int N, i;
	char C;
	printf("Input integer value and char symbol \n");
	scanf("%i %c", &N, &C);
	for(i=1; i<=N; i++){
		printf("%c", C);
	}
	getch();
	return 0;
}
