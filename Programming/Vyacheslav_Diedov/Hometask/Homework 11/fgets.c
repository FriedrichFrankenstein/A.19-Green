#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE* pInput = fopen("resource.txt", "r");
	char temp[100];
	while(fgets(temp, 100, pInput) != NULL){
		printf("%s", temp);
	}
/*	while(fscanf(pInput, "%s", temp) != EOF){
		printf("%s\n", temp);
	}
*/
}
