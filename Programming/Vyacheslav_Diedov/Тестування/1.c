#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void DivBy3(FILE *fp);

int main(){
	FILE* input = fopen ( "recount.txt", "r" );
 	DivBy3 ( input );
}

void DivBy3(FILE *fp){
	int i = 0, j = 0, count = 0, num, len;
	char arr[250][250] = {};
	while ( fscanf ( fp, "%s", arr[i]) != EOF ){
		printf("%s\n", arr[i]);
		count++;
		i++;
	}
	FILE* output = fopen ( "Rezult.txt", "w" );
	for (i = 0 ; i < count ; i++ ){	
		len = strlen ( arr[i] );
			num=0;
		for ( j = 0 ; j < len ; j++ ){
			num += '0' - arr[i][j];
		}
		if( num % 3 == 0 ){
			fprintf ( output, "%i\n", 1 );
		}else{				
		fprintf ( output, "%i\n", 0 );
		}
	}
	fflush ( fp );
    fclose ( fp );
    fflush ( output );
    fclose ( output );
}
    
