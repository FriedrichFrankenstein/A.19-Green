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
	int i = 0, j, count = 0;
	char arr[10][20] = {};
	while ( fscanf ( input, "%s", arr[i]) != EOF ){
		printf ( "%s\n", arr[i] );
		i++;
		count++;
	}
	char temp[50] = {};
	for( i = 0; i < count; i++ ){
		for( j = 0; j < count; j++ ){
			if ( strcmp (arr[i], arr[j]) == -1){
				strcpy ( temp, arr[i] );
				strcpy ( arr[i], arr[j] );
				strcpy ( arr[j], temp );
			}		
		}
	}
FILE* output = fopen ( "Rezult.txt", "w" );
	for( i = 0; i < count; i++ ){
		fprintf ( output, "%s\n", arr[i] );
	}
	fflush ( input );
    fclose ( input );
    fflush ( output );
    fclose ( output );
}
