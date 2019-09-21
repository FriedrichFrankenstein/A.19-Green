#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int** getMatrix (int *pN, int *pM);

void fillMatrix (int **matrix, int N, int M);

void findMaxNumber (int *prowMaxNum, int *pcolumnMaxNum, int N, int M, int** matrix);

void rowsTransposition (int N, int M, int** matrix, int rowMaxNum);

void printMatrix (int N, int M, int** matrix );

void columnTransposition (int N, int M, int** matrix, int columnMaxNum);

int main()
{
    srand(time(NULL));
    int N, M, rowMaxNum, columnMaxNum, i;
    int *pN = &N, *pM = &M, *prowMaxNum = &rowMaxNum, *pcolumnMaxNum = &columnMaxNum;
    int **matrix = getMatrix(pN, pM);
    printf("\nOrigin matrix: \n\n");
    printMatrix(N, M, matrix);
    findMaxNumber (prowMaxNum, pcolumnMaxNum, N, M, matrix);
    rowsTransposition(N, M, matrix, rowMaxNum);
    columnTransposition (N, M, matrix, columnMaxNum );
    printf("\nResult matrix: \n\n");
    printMatrix(N, M, matrix);
    for (i = 0; i < N; i++){
        free(*(matrix + i));
    }
    free(matrix);
    getch();
    return 0;
}

int** getMatrix (int *pN, int *pM){
    int i;
    printf("Enter N and M (size of matrix):");
    scanf("%i %i", pN, pM);
    int **matrix = (int **) calloc(sizeof(int), *pN);
    for (i = 0; i < *pN ; i++){
        *(matrix + i) = (int *) calloc(sizeof(int), *pM);
    }
    fillMatrix (matrix, *pN, *pM);
    return matrix;
}

void fillMatrix (int **matrix, int N, int M){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            *(*(matrix + i)+ j) = rand() % 100;
        }
    }
}

void findMaxNumber (int *prowMaxNum, int *pcolumnMaxNum, int N, int M, int** matrix){
    int i, j, maxNum = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            if ( *(*(matrix + i)+ j) > maxNum){
                maxNum = *(*(matrix + i)+ j);
                *prowMaxNum = i;
                *pcolumnMaxNum = j;
            }
        }
    }
    printf("\nMax number is %i; row = %i; column = %i \n", maxNum, *prowMaxNum, *pcolumnMaxNum);

}

void rowsTransposition (int N ,int M, int** matrix, int rowMaxNum){
    int i, j, temp;
    for (i = rowMaxNum; i > 0; i--){
        for (j = 0; j < M; j++){
            temp = *(*(matrix + i)+ j);
            *(*(matrix + i)+ j) = *(*(matrix + i - 1)+ j);
            *(*(matrix + i - 1)+ j) = temp;
        }
        printf("\n");
        printMatrix(N, M, matrix);
    }

}

void printMatrix (int N, int M, int** matrix ){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            printf("%2i ", *(*(matrix + i)+ j));
        }
        printf("\n");
    }
}

void columnTransposition (int N, int M, int** matrix, int columnMaxNum){
    int i, j, temp;
    for (j = columnMaxNum; j > 0; j--){
        for (i = 0; i < N; i++){
            temp = *(*(matrix + i)+ j);
            *(*(matrix + i)+ j) = *(*(matrix + i)+ j - 1);
            *(*(matrix + i)+ j - 1) = temp;
        }
        printf("\n");
        printMatrix(N, M, matrix);
    }
}
