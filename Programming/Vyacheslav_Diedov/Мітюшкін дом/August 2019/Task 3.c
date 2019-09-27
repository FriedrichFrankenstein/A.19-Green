//Task 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* inputPunctum( int n );

int* theDistanceBetweenThePunctum(int n, int* p, int* m);

int main(){
	int n, i;
	int* m;
	m = ( int*) malloc (2 * sizeof(int*));	
	printf("Input number of punctum N =");
	scanf("%i", &n);
	int* p;
	p = inputPunctum(n);
	m = theDistanceBetweenThePunctum(n, p, m);
	printf("\nMaximum distance between %c and ", 'A' + *m);
	m++;
	printf("%c punctum", 'A' + *m);
	return 0;
}

int* inputPunctum(int n){
	int i;
	int* p;
	p = ( int*) malloc ( n * 2);
	for ( i = 0; i < n ; i++ ){
		printf("Input %c , x punctum = ", 'A' + i);
		scanf("%i", p++);
		printf("Input %c , y punctum = ",'A' + i);
		scanf("%i", p++);
	}
	p = p - i * 2;
	return p;
}

int* theDistanceBetweenThePunctum(int n, int* p, int* m){
	int i, j, num1, num2;
	float temp, temp1;
	temp = 0;
	for ( i = 0; i < n * 2 - 2; i = i + 2){
		for ( j = i; j < (n * 2) - 2; j = j + 2){
			temp1 = sqrt ( pow ((p[j + 2]) - (p[i]), 2) + pow ((p[j + 3])- (p[i + 1]), 2));
				if ( temp < temp1){
					temp = temp1;
					*m = i / 2;
					m++;
					*m = (j + 2) / 2;
					m--;
			}	
		}
	}
	return m;
}

