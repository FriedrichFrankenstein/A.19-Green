#include <stdio.h>
#include <conio.h>

int main(){
	int N, i;
	char C, C1;
	printf("Input integer value and char symbol \n");
	scanf("%i %c %c", &N, &C, &C1);
	for(i=0; i<N; i++){
		if(i%2 == 0) printf("%c", C);
		else printf("%c", C1);
	}
	getch();
	return 0;
}
