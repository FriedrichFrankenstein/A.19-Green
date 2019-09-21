#include <stdio.h>

#include <string.h>

int main()

{

char str1[] = "Australia"; 

char str2[] = "Austria"; 

int n;

do{
	printf("Input n = ");
	scanf("%i", &n);
	
}while( strncmp(str1, str2, n) != 0 );

return 0;

}
