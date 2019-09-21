#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 3

int sumArray ( int arr [][N]){
    int i, j, sum = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            sum += arr [i][j];
        }
    }
    return  sum;

}
void printMatrix ( int arr [][N]){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf ("%i ", arr[i][j]);
        }
        printf("\n");
    }

}

void changeLine ( int arr [][N]){
    int i, temp = 0;
    for (i = 0; i < N; i++){
        temp = arr [0][i];
        arr[0][i] = arr [N - 1][i];
        arr [N -1][i] = temp;
    }

}
int main ()
{
	int i, factorial = 1,number ;
	int arr [N][N] = {
    {1,3,5},
    {2,3,9},
    {1,8,5}
	};
	changeLine(arr);
	printMatrix(arr);
   // printf ("Result = %i", sumArray(arr));
	getchar();
	return 0;
}
