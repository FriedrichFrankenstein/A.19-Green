#include <stdio.h>
#define M 5
#define N 7

int main(){
	int bufferIn[10], bufferOut[10] = {}, A[N], B[M] = {}, dataSize, i, arrResSize, sum[10];
	FILE *f_in = fopen("input4.dat", "rb");
	fread(bufferIn, sizeof(int), 10, f_in);
	for(i=0; i<10; i++){
		printf("%i ", bufferIn[i]);
	}
	printf("\n");
	
	rewind(f_in);
	dataSize = fread(A, sizeof(int), N, f_in);	
	dataSize = fread(B, sizeof(int), 10-N, f_in);

	fclose(f_in);
	
	for(i=0; i<N; i++){
		printf("%i ", A[i]);
	}
	printf("\n");
	
	for(i=0; i<M; i++){
		printf("%i ", B[i]);	
	}
	printf("\n");
	
	FILE *f_out = fopen("output4.dat", "wb+");
	
	if(M>N) {
		arrResSize = N;
	}
	else{
		arrResSize = M;
	}
	
	for(i=0; i<arrResSize; i++){
		sum[i] = A[i] + B[i];
	}
	
	fwrite(sum, sizeof(int), arrResSize, f_out);
	
	rewind(f_out);
	fread(bufferOut, sizeof(int), 10, f_out);
	
	for(i=0; i<10; i++){
		printf("%i ", bufferOut[i]);
	}
	fclose(f_out);
		
	return 0;
}
