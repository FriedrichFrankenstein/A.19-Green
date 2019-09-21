#include <stdio.h>
#define MAX 80

int main(){
char str[MAX];
printf("Input string: ");
scanf("%s", str);
printf("You’ve input: %s\n", str);
int i;
char* p;
p = str;
for ( i = 0; i < MAX; i++){
	if ( *p == NULL)break;
	printf("%c\n", *p);
	p++;
}
return 0;
}
