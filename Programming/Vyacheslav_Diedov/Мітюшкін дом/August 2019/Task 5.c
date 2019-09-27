//task 5
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define n 10

int* randomNumber();

int* keyForTheLock(int* p);

void printKey(int* p);

int main(){
	int* arr;
	int* key;
	do{
	arr = randomNumber();
	printf("\n");
	key = keyForTheLock(arr);
	}while((key[0] + key[1] + key[2]) != 10);
	printKey(key);
	return 0;
}

int* randomNumber(){
	int i, j, r1, r2, r3, r4;
	srand(time(NULL));
	int* p;
	p = (int*) malloc (n * sizeof(int*));
	for ( i = 0 ; i < n; i++){
		*p = 0;
		p++;
	}
	p -= i;
	while (1){
		r1 = rand()% n;
		r2 = rand()% n;
		r3 = 1 + rand()% 6;
		r4 = 1 + rand()% 6;
//		printf("r1 = %i, r2 = %i, r3 = %i, r4 = %i\n", r1, r2, r3, r4);
		if( r1 == r2 || r1 == (r2 + 3) || r1 == (r2 + 6) || r1 == (r2 + 9) || r3 == r4 || (r3 + r4) < 4 || (r3 + r4) >= n) continue;
		p[r1] = r3;
		p[r2] = r4;
		break;
	}
	for( j = 0; j < n; j++){
		printf("k[%i] = %i,  ", j + 1, p[j]);
	}
	return p;	
}

int* keyForTheLock(int* p){
	int i, j, temp;
	for ( i = 0; i < 3; i++){
		if (p[i] != 0){
			p[i + 3] = p[i];
			p[i + 6] = p[i];
			if(i == 0) p[i + 9] = p[i];
		}	
	} 
	for ( i = 3; i < 6; i++){
		if (p[i] != 0){
			p[i - 3] = p[i];
			p[i + 3] = p[i];
			if(i == 3) p[i + 6] = p[i];
		}	
	} 
	for ( i = 6; i < n; i++){
		if (p[i] != 0){
			p[i - 3] = p[i];
			p[i - 6] = p[i];
			if(i == 9) p[i - 9] = p[i];
		}	
	}
	if(p[0] == 0) temp = n - p[1] - p[2];
	if(p[1] == 0) temp = n - p[0] - p[2];
	if(p[2] == 0) temp = n - p[1] - p[0];
	for ( i = 0; i < n; i++){
		if (p[i] == 0) p[i] = temp;
	}
	return p;
}

void printKey(int* p){
	int i;
	for( i = 0; i < n; i++){
		printf("k[%i] = %i,  ", i + 1, *p);
		p++;
	}
	p -= i;
	printf("\nThe key is selected!!!\nThe lock is open!!!\nCongratulations!!!");
}
