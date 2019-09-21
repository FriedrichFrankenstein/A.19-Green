//Task 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void cows ( int G, int* b, int* c, int* t );

int main(){
	int G, b, c, t;
	printf ( "Input Maney G - " );
	scanf ( "%i", &G );
	cows ( G, &b, &c, &t );
	printf ( "\nFinal option\nBull - %i, cow - %i, calf - %i\n", b, c, t);
	return 0;
}

void cows ( int G, int* b, int* c, int* t ){
	int i, j, n;
	int arr[100][3];
	int temp = G, count = 0;
	for ( i = 0; i <= 100; i++ ){
		for ( j = 0; j <= 100; j++ ){
			for ( n = 0; n <= 100; n++ ){
				temp = temp - ( n * 500 ) - ( j * 5000 ) - ( i * 10000 );
				if (( i + j + n) == 100 && temp == 0 ){
					count++;
					arr[count][0] = i;
					arr[count][1] = j;
					arr[count][2] = n;
					printf ( "%i) Bull - %i, cow - %i, calf - %i\n", count, i, j, n );
				}
				temp = G;
			} 
		}
	}
	if ( count >= 1 ){
		if ( count == 1 ){
			(*b) = arr[count][0];
			(*c) = arr[count][1];
			(*t) = arr[count][2];
			
		}else{
			printf ( "\nSelect the option do you need - " );
			scanf ( "%i", &count );
			(*b) = arr[count][0];
			(*c) = arr[count][1];
			(*t) = arr[count][2];
		}
	}else{
		arr[count][0] = (*b);
			(*b) = -1;
			(*c) = -1;
			(*t) = -1;
	}
}
