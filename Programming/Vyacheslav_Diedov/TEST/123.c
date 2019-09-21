//Task 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void languageUkraine();

int inputN();

void inputArr( int n, int arr[2 * n][2 * n]);

void randArr( int n, int arr[2 * n][2 * n]);

void scanfArr( int n, int arr[2 * n][2 * n]);

void rearrangementCrosswise( int n, int arr[2 * n][2 * n]);

void moveClockwise( int n, int arr[2 * n][2 * n]);

int main(){
	printf("Hello!\n");
	int n, i, j;
	languageUkraine();
			printf("Вам може допомогти моя програма по відніманню дробів\n");
	do{
		printf("Please prove you are not robot:\n");
		printf("15/45 - 12/48 = \n");
		printf("Введіть чисельник = ");
		scanf("%i", &i);
			if(i != 1){
				while(1){
					printf("\nYou are robot!!!");
				}
			}
	}while(i != 1);
	do{
		printf("Введіть знаменник = ");
		scanf("%i", &j);
			if(j != 12){
				while(1){
					printf("\nYou are robot!!!");
				}
			}
	}while(j != 12);
	printf("\nTask 7. 7. Дано квадратну матрицю розміром 2N x 2N. Написати 2 функції, кожна з яких здійснює\nперестановку цілих блоків розміром N x N, розташованих по лівих (правих) верхніх (нижніх) кутках матриці:\nфункція 1 - перестановка хрест-навхрест;\nфункція 2 - перестановка за годинниковою стрілкою, починаючи з лівого верхнього кута.\n");
	n = inputN();
	int arr[2 * n][2 * n];
	do{
	for( i = 1; i > 0 ; i-- ){
		printf("\nЗаповнення масиву\nМій варіант натисніть 1\nДля введення масиву вручну натисніть 2\nДля випадкового набору чисел натисніть 3\nЩоб вийти натисніть 4\nВаріант ");
		scanf("%i", &j);
			switch(j){
				case 1: inputArr( n, arr );
													break;
				case 2: scanfArr( n, arr );
													break;
				case 3: randArr( n, arr );
													break;
				case 4: i = 0;
													break;
			}
	}
	}while(j > 4);
	do{
	i = 1;
	while( i == 1 ){
		printf("\nДля перестановки хрест навхрест натисніть 1\nДля перестановки за годинниковою стрілкою натисніть 2\nДля перестановки хрест навхрест і потім за годинниковою стрілкою натисніть 3\nЩоб вийти натисніть 4\nВаріант ");
		scanf("%i", &j);
			switch(j){
				case 1: rearrangementCrosswise( n, arr );
													break;
				case 2: moveClockwise( n, arr );
													break;
				case 3: 
						rearrangementCrosswise( n, arr );
						moveClockwise( n, arr );
													break;
				case 4: i = 0;
													break;
			}
	}
	}while(j > 4);
	printf("\nGoodbye!!!");
	}

void languageUkraine(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

int inputN(){
	int n;
	printf("\nInput N = ");
	scanf("%i", &n);
	return n;
}

 void inputArr( int n, int arr[2 * n][2 * n] ){
 	int i, j;
	for( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
		arr[i][j] = 1;
		arr[i][j + n] = 2;
		arr[i + n][j] = 3;
		arr[i + n][j + n] = 4;
		}
	}
	for( i = 0; i < 2 * n; i++ ){
		for( j = 0; j < 2 * n; j++ ){
			printf("%i ", arr[i][j]);	
		}
		printf("\n");
	}
}

void randArr( int n, int arr[2 * n][2 * n] ){
	srand(time(NULL));
 	int i, j;
	for( i = 0; i < n * 2; i++ ){
		for( j = 0; j < n * 2; j++ ){
		arr[i][j] = 10 + rand()% 89;
		}
	}
	for( i = 0; i < 2 * n; i++ ){
		for( j = 0; j < 2 * n; j++ ){
			printf("%i ", arr[i][j]);	
		}
		printf("\n");
	}
}

void scanfArr( int n, int arr[2 * n][2 * n] ){
 	int i, j;
	for( i = 0; i < n * 2; i++ ){
		for( j = 0; j < n * 2; j++ ){
		scanf("%i", &arr[i][j]);
		}
	}
	for( i = 0; i < 2 * n; i++ ){
		for( j = 0; j < 2 * n; j++ ){
			printf("%i ", arr[i][j]);	
		}
		printf("\n");
	}
}

void rearrangementCrosswise( int n, int arr[n * 2][n * 2] ){
	int i, j, temp;
	for( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
			temp = arr[i][j];
			arr[i][j] = arr[i + n][j + n];
			arr[i + n][j + n] = temp;
			temp = arr[i + n][j];
			arr[i + n][j] = arr[i][j + n];
			arr[i][j + n] = temp;		
		}
	}
	printf("\n");
	for( i = 0; i < 2 * n; i++ ){
		for( j = 0; j < 2 * n; j++ ){
			printf("%i ", arr[i][j]);	
		}
		printf("\n");
	}
}

void moveClockwise( int n, int arr[2 * n][2 * n]){
	int i, j, temp, temp1;
	for( i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			temp = arr[i][j + n];
			arr[i][j + n] = arr[i][j];
			temp1 = arr[i + n][j + n];
			arr[i + n][j + n] = temp;
			temp = arr[i + n][j];
			arr[i + n][j] = temp1;
			arr[i][j] = temp;
			
		}
	}
	printf("\n");
		for( i = 0; i < 2 * n; i++ ){
			for( j = 0; j < 2 * n; j++ ){
				printf("%i ", arr[i][j]);	
			}
		printf("\n");
	}
}

