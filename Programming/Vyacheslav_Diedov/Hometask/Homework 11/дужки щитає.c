#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


int main(){

readFile();

}

void readFile(){
	FILE* pInput = fopen("resource.txt", "r");
	 int firstBalance =0, secondBalance=0;
	 int i;
	 char buffer[256];
		while(fgets(buffer, 256, pInput) != NULL){
		printf("%s", buffer);
	}
/*		while(buffer[i] != '\n'){
			printf("%c", buffer[i++]);
		}*/
    for( i = 0; i < strlen(buffer); i++){
        if(buffer[i] == '[') firstBalance++;
        if(buffer[i] == ']') firstBalance--;
        if(buffer[i] == '{') secondBalance++;
        if(buffer[i] == '}') secondBalance--;
    }
    if(firstBalance == 0 && secondBalance == 0){
        printf("OK");
    } else {
        printf("ERROR");
    }
    fflush(stdin);
    fclose(pInput);
	fflush(stdin);
	fclose(pInput);	
}

