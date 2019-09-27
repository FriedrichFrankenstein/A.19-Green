//task 6
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void sort ( int arr[], int num[] );

int main(){
	int i;
	int arr[10] = {9, 4, 9, 8, 9, 1, 2, 3, 0, 6};
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	sort ( arr,  num );
	for ( i = 0; i < 10; i++ ){
		printf ( "arr[%i] = %i, num[%i] = %i\n",i , arr[i], i, num[i] );
	}
	return 0;
}

void sort ( int arr[], int num[] ){
	int i = 9, temp, j, max;
	while ( i >= 0 ){
		max = 0;
		j = i;
		while ( j >= 0 ){
			if ( arr[num[j]] >= max ){
				max = arr[num[j]];
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			j--;
		}
		i--;
	}
}
