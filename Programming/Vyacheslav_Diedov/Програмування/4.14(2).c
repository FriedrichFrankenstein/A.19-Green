#include <stdio.h>
#include <stdlib.h>

int numberSum ( int max, int i, int count );

int* inputArr(int* sum, int max, int j, int i);


int main(){
	int* sum;
	int max, count, j, i;
	i = 0, count = 1;
	printf("Input max sum =");
	scanf("%i", &max);
	count = numberSum(max, i, count);
	sum = (int*) malloc ( count * sizeof(int*));
	*sum = 0, j = 0;
	inputArr(sum, max, j, i);
	for( i = 0; i < count; i++){
		printf("%i\n", *sum);
		sum++;
	}
}

int numberSum ( int max, int i, int count ){
	if(i < max){
		i = count + i;
		count++;
		i = numberSum ( max, i, count );
	}else{
		return count - 2;
	}
}
	
int* inputArr(int* sum, int max, int j, int i){
	if ( i < max ){
		j++;
		i += j ;
		if ( i < max ){
		*sum = i;
		sum++;
		inputArr(sum, max, j, i);
		}
	}else{
		return sum;
	}
}

