#include <stdio.h>

int Natural(int x, int N);

int main(){
	int x, N;
	N = 1;
	x = 1;
	x = Natural(x, N);
	return 0;
}

int Natural(int x, int N){
	if ( N > 10 ){
	}else{
		printf("x(%i) = %i\n", N, x);
		x += 1;
		Natural(x, N + 1);
		return x;
	}	
}
