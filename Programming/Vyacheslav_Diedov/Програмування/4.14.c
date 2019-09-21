#include <stdio.h>
#include <stdlib.h>

int numberSum(int max, int N, int t);

int* inputArr(int* sum, int max, int N, int t);


int main(){
	int* sum;
	int max, N, t, i;
	N = 1;
	sum = (int*) malloc ( N * sizeof(int*));
	*sum = 0;
	printf("Input max sum =");
	scanf("%i", &max);
	N = numberSum(max, N, t);
	i = N;
	sum = (int*) realloc (sum, N * sizeof(int*));
	N = 0;
	inputArr(sum, max, N, t);
	for( N = 0; N < i; N++){
		printf("%i\n", *sum);
		sum++;
	}
}

int numberSum(int max, int N, int t){
	if(t < max){
		N++;
		t = N + t;
		numberSum(max, N , t);
	}else{
		return N;
	}
}
	
int* inputArr(int* sum, int max, int N, int t){
		N += 1;
		t = *sum;
	if((N+t) < max){
		sum++;
		*sum = N + t;
		inputArr(sum, max, N , t);
	}
}
