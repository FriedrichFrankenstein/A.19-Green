#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int i, counter=0;
	char str[40];
	printf("Input your string and press \"Enter\" button \n");
	gets(str);
	for(i=0; i<strlen(str); i++){
		if(str[i]>='0' && str[i]<='9') counter++;
	}
	printf("Total amount of digits in your string - %i", counter);
	getch();
	return 0;
}
