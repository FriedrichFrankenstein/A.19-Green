#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void IsSquare(FILE *fp);

int main(){
	FILE* input = fopen ( "recount.txt", "r" );
 	IsSquare(input);
}

void IsSquare(FILE *fp){
	FILE* output = fopen ( "Rezult.txt", "w" );
	int i = 0;
	long long arr[100] = {};
	double temp[100] = {};
	long long temp2[100] = {};
	while( fscanf ( fp, "%i", &arr[i]) != EOF ){
		printf("%i\n", arr[i]);
		temp[i] = sqrt( arr[i]);
		temp2[i] = temp[i];
			if(temp2[i] == temp[i]){
			fprintf ( output, "%i\n", arr[i] );
			}
	}
	fflush ( fp );
    fclose ( fp );
    fflush ( output );
    fclose ( output );
}
