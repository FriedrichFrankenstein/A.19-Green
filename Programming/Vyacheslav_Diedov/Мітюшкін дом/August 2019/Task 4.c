//Task 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int inputNumber();

char fractionSubtraction(int a, int b, int c, int d);

int denominatorIsEqual(int b, int d);

int main(){
	int a, b, c, d;
	int i = 0;
	printf("Input a, b, c, d\n");
	while( i == 0){
		a = inputNumber();
		b = inputNumber();
		c = inputNumber();
		d = inputNumber();
		if ( b == 0 || d == 0){
			printf("Error \nb = 0 or d = 0\nrepeat input\n");
			continue;
		}else{
			i++;
		}
	}
	fractionSubtraction(a, b, c, d);
	return 0;
}

int inputNumber(){
	int num;
	printf("Input number = ");
	scanf("%i", &num);
	return num;
}

int denominatorIsEqual(int b, int d){
	if ( b == d){
		return 1;
	}else{
		return 0;
	}
}

char fractionSubtraction(int a, int b, int c, int d){
	int den1, den2, i, j;
	int rez, rez1;
	float arr[3] = {};
	if ( denominatorIsEqual ( b, d ) == 0 ){
		for( i = 1; i < 1000; i++ ){
			for(j = 1; j < 1000; j++ ){
				if ( b > d ){
					den1 = b;
					den2 = d;
				}else{
					den1 = d;
					den2 = b;
				}
				den1 *= i;
				den2 *= j;
				if ( denominatorIsEqual ( den1, den2 ) == 1 ){
					if ( b > d ){
					b = den1;
					d = den2;
					a *= i;
					c *= j;
				}else{
					d = den1;
					b = den2;
					c *= i;
					a *= j;
				}
					printf("a = %i b = %i c = %i d = %i\n", a, b, c, d);
				}
			if ( denominatorIsEqual ( den1, den2 ) == 1 )break;
			}
		if ( denominatorIsEqual ( den1, den2 ) == 1 )break;
		}
	}
	if (denominatorIsEqual(b, d) == 1){
	arr[0] = a - c;
	arr[1] = b;
	printf("( %i - %i ) / %i = ", a, c, b);
	arr[2] = arr[0]/arr[1];
	rez = arr[2];
		if (rez == arr[2]){
			printf("%g / %g = %g", arr[0], arr[1], arr[2]);
		}else{
			printf("%g / %g = ", arr[0], arr[1]);
			for (i = 2 ; i <= 10; ){
				a = arr[0];
				b = arr[1];
				arr[0] /= i;
				arr[1] /= i;
				rez = arr[0];
				rez1 = arr[1];
				if (rez == arr[0] && rez1 == arr[1] ){
					a = rez;
					b = rez1;
					continue;
				}else{
				arr[0] = a;
				arr[1] = b;
				}
			i++;	
			}
			printf("%i / %i", a, b);
			if ( a > b){
				rez = b;
				for( i = 1 ; i < b; i++){
					rez1 = b;
					rez1 *= i;
					if ( rez1 < a){
						rez = rez1;
					}else break;
				}
			printf(" = %i + %i / %i", i - 1, a - rez, b);
			}
		}
	}		
}
