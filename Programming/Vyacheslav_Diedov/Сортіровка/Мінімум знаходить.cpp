#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void sortWord ( FILE* input );

int main(){
	FILE* input = fopen ( "recount.txt", "r" );
 	sortWord ( input );
}

void sortWord ( FILE* input ){
	int temp;
    int min = 1000;
    while(fscanf(input,"%i",&temp)!=EOF){
        if(temp < min){
            min = temp;
        }
    }
    printf("Min = %i\n", min);
    fclose(input);
}
