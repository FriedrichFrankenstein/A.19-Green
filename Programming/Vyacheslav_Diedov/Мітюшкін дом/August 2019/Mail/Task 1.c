#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wholeNumber();
//task 1

void subtractionAndSumma();
//task 2

int main()
{
	printf("Hello!!!\n");
	wholeNumber();
	subtractionAndSumma();
//	printf("Goodbye!!!");
	return 0;
}

void wholeNumber(){
	printf("Task 1\n");
	srand ( time ( NULL ) );
	int arr[5];
	int i, sum = 0;
	for( i = 0; i < 5; i++ ){
		arr[i] = rand () % 100;
		printf("arr[%i]=%i\n", i+1, arr[i]);
		sum += arr[i]; 
	}
	printf("Sum = %i\n", sum);
	for( i = 0; i < 5; i++){
		printf("Multiplication arr[%i] = %i * %i = %i\n",i + 1, arr[i], sum, arr[i] * sum);
	}
}

void subtractionAndSumma(){
	printf("\nTask 2\n");
	int i, sum = 0;
	int arr[5];
	for ( i = 0; i < 5; i++ ){
		printf("Input number %c - ", 'A' + i);
		scanf("%i", &arr[i]);
	}
	for ( i = 4; i > 0; i--){
		arr[i] -= arr[i-1];
	}
	for ( i = 0; i < 5; i++ ){
		sum += arr[i];
		printf("arr[%i] = %i\n", i, arr[i]);
	}
	printf("Suma = %i", sum);	
}
