#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(float arr[]);
void printArray(float arr[], int size);
float func();

int main(){
	srand(time(0));
	
	float arr[20];
	
	fillArray(arr);
	printArray(arr, 20);
	
	
	return 0;
}

void fillArray(float arr[]){
	int i;
	for(i=0; i<20; i++){
		arr[i] = 0.1 * (-100 + rand()%201);
	}
}

void printArray(float arr[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%.2f ", arr[i]);
	}
}
