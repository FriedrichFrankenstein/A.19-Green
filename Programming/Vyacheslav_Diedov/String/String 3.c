#include <stdio.h>

int main(){
	char c;
	printf("Enter liter  - ");
	scanf("%c", &c);
	printf("%c\n%c", c-1, c+1);
	return 0;
}
