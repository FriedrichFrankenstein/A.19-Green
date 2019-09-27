//task 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int lift ( int N, int f_start, int M );

int climbUp ( int f_start, int M );

int lowerDown ( int f_start, int M );

int main(){
	int N, f_start, M, num;
	printf("\nInput number of floors N - ");
	scanf("%i", &N);
	printf("\nInput the floors start - ");
	scanf("%i", &f_start);
	printf("\nInput number of the desired apartment M - ");
	scanf("%i", &M);
	num = lift ( N, f_start, M );
	printf("\nElevator stop floor number - %i", num);
	return 0;
}

int lift(int N, int f_start, int M){
	int num;
	if ( M % 3 != 0){
		M += 1;
		if ( M % 3 != 0 ){
			M += 1;
		}
	}
	M /= 3;
	if ( N < 100 || f_start > N || ( f_start % 2 ) == 0 || M > N || M == f_start || f_start < 0 || M < 0 ){
		num = -1;
		return num;
	}
	if ( M > f_start){
		num = climbUp ( f_start, M );
		return num;
	}else{
		num = lowerDown ( f_start, M );
		return num;
	}
}

int climbUp ( int f_start, int M ){
	while( f_start <= M ){
		f_start += 2;
	}
	return f_start - 2;
}

int lowerDown ( int f_start, int M ){
	while( f_start >= M ){
		f_start -= 2;
	}
	return f_start + 2;
}

