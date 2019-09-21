#include <stdio.h>
#include <string.h>

int main(){
	float num1, num2;
	char str[100];
	
	scanf("%f%f", &num1, &num2);
	sprintf(str, "Variables into string - NUM1 = %.2f, NUM2 = %.2f", num1, num2);
	puts(str);	
	sscanf(str, "%f%f", &num1, &num2);
	printf("Variables from string - NUM1 = %g, NUM2 = %g", num1, num2);
	
	return 0;
}
