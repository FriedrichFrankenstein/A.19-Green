#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int** getMatrix (int *pN);

void fillMatrix (int **matrix, int N);

void printMatrix (int N, int** matrix );

void crosswiseTransposition (int N, int **matrix);

void clockwiseTransposition (int N, int **matrix);

int main()
{
    srand(time(NULL));
    int N, i;
    char choiceOfTask;
    int *pN = &N;
    int **matrix = getMatrix(pN);
    printf("Origin matrix: \n\n");
    printMatrix(N, matrix);
    printf("How do you want to transmit a matrix?\n1 - crosswise\n2 - clockwise\n");
    choiceOfTask = getch();
    switch (choiceOfTask){
        case '1':{
            crosswiseTransposition (N, matrix);
            printf("Crosswise transmitted matrix: \n\n");
            printMatrix(N, matrix);
            break;
        }
        case '2':{
            clockwiseTransposition (N, matrix);
            printf("Clockwise transmitted matrix: \n\n");
            printMatrix(N, matrix);
            break;
        }
        default:{
            printf("Wrong task.\n");
            break;
        }
    }
    for (i = 0; i < N; i++){
        free(*(matrix + i));
    }
    free(matrix);
    getch();
    return 0;
}

int** getMatrix (int *pN){
    int i;
    printf("Enter N  (size of matrix):");
    scanf("%i", pN);
    *pN *=2;
    int **matrix = (int **) calloc(sizeof(int), 2**pN);
    for (i = 0; i < *pN ; i++){
        *(matrix + i) = (int *) calloc(sizeof(int), 2**pN);
    }
    fillMatrix (matrix, *pN);
    return matrix;
}

void fillMatrix (int **matrix, int N){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            *(*(matrix + i)+ j) = rand() % 100;
        }
    }
}

void printMatrix (int N, int** matrix ){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%2i ", *(*(matrix + i)+ j));
        }
        printf("\n");
    }
}

void crosswiseTransposition (int N, int **matrix){
    int i, j, temp;
    for (i = 0; i < N/2; i++){
        for (j = 0; j < N/2; j++){
                //*(*(matrix + i)+ j)
            temp = *(*(matrix + i)+ j);
           *(*(matrix + i)+ j) =  *(*(matrix + i + N/2)+ j + N/2);
            *(*(matrix + i + N/2)+ j + N/2) = temp;
        }
    }
    for (i = N/2; i < N; i++){
        for (j = 0; j < N/2; j++){
            temp = *(*(matrix + i)+ j);
           *(*(matrix + i)+ j) =  *(*(matrix + i - N/2)+ j + N/2);
            *(*(matrix + i - N/2)+ j + N/2) = temp;
        }
    }

}

void clockwiseTransposition (int N, int **matrix){
    int i, j, temp;
    for (i = 0; i < N/2; i++){
        for (j = 0; j < N/2; j++){
            temp = *(*(matrix + i)+ j);
           *(*(matrix + i)+ j) =  *(*(matrix + i + N/2)+ j + N/2);
            *(*(matrix + i + N/2)+ j + N/2) = temp;
        }
    }
     for (i = 0; i < N/2; i++){
        for (j = 0; j < N/2; j++){
            temp = *(*(matrix + i)+ j);
           *(*(matrix + i)+ j) =  *(*(matrix + i + N/2)+ j);
            *(*(matrix + i + N/2)+ j) = temp;
            temp = *(*(matrix + i )+ j + N/2);
           *(*(matrix + i)+ j + N/2) =  *(*(matrix + i + N/2)+ j + N/2);
            *(*(matrix + i + N/2)+ j + N/2) = temp;
        }
    }

}
