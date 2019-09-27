#include <stdio.h>

int Div ( int N, int arr[255] );

int NSymbol ( int arr[255], int K, int count );

int main(){
	int N, temp, count;
	do{
		printf( "Input N = ");
		scanf("%i", &N);
		temp = N;
		count = 0;
		do{
			temp /= 10;
			count++;
		}while( temp > 0 );
		printf("count = %i\n", count);
	}while( N < 0 );
	int arr[255];
	Div ( N, arr );
	int K, number;
	printf("Input K = ");
	scanf("%i", &K);
	if ( K <= N ){
		number = NSymbol ( arr, K, count );
		printf("Number [%i] = %i", K, number);
	}else{
		printf("Error K > N ");
	}
	return 0;
}

int Div ( int N, int arr[255] ){
	int i;
	for ( i = 0; N > 0; i++){
			arr[i] = N % 10;
			N /= 10;
			printf("Number [ %i ] = %i\n", i, arr[i]);
	}
	return arr[255];
}

int NSymbol ( int arr[255], int K, int count ){
	int num;
	while ( K > 0 ){
		num = arr[ count - 1];
		count--, K--;
	}
	return num;
}
