#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void sortWord( FILE* input );

int main(){
	FILE* input = fopen ( "recount.txt", "r" );
 	sortWord(input);
}

void sortWord ( FILE* input ){
	int i = 0, j, count = 0;
	int arr [10] = {};
	while( fscanf ( input, "%i", &arr[i]) != EOF ){
		printf( "%i\n", arr[i] );
		i++;
		count++;
	}
	int temp;
	for( i = 0 ; i < count ; i++ ){
		for( j = 0 ; j < count ; j++ ){
			if( arr[i] < arr[j] ){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}		
		}
	}
FILE* output = fopen ( "Rezult.txt", "w" );
	for( i = 0; i < count; i++ ){
		fprintf ( output, "%i\n", arr[i] );
	}
	fflush ( input );
    fclose ( input );
    fflush ( output );
    fclose ( output );
}
