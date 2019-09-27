#include <stdio.h>
#define N 40
#define M 40

int main(){
	int A[N], B[M] = {};
	int C[N + M];
	FILE* mybin = fopen("input.dat", "rb");
	int i, n, temp;
	n = fread ( &C, sizeof(int), (N + M + 1), mybin );
	if (( N + M) < n){
		printf("ERROR");
		return 0;
	}
	freopen("input.dat", "rb", mybin);
	if( n > N){
	for ( i = 0; i < N; i++){
		fread(&A[i], sizeof(int), 1, mybin);
	}
	}else{
	for ( i = 0; i < n; i++){
		fread(&A[i], sizeof(int), 1, mybin);
	}
	}
	for ( i = N; i < n; i++){
		fread(&B[i - N], sizeof(int), 1, mybin);
	}
	fclose(mybin);
	if( N > M){
		n -= N;
	}else{
		n -= M;
	}
	FILE* outbin = fopen("output.dat", "wb");
	for( i = 0; i < n; i++){
		temp = A[i] + B[i];
		fwrite ( &temp, sizeof(int), 1, outbin );
	}
	freopen("output.dat", "rb", outbin);
	for( i = 0; i < n; i++){
		fread ( &temp, sizeof(int), 1, outbin );
		printf("A[%i] = %i , B[%i] = %i, sum = %i\n", i, A[i], i, B[i], temp);
	}
	fclose(outbin);
	return 0;
}
