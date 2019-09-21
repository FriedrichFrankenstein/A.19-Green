#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define columns 7

void fillArray (int array [rows][columns]);

void transpositionRowAndColumn ( int array [rows][columns], int column, int row);

void printArray (int array [rows][columns]);

int main()
{
    srand (time(NULL));
    int column, row;
    int array [rows][columns];
    fillArray (array);
    printArray(array);
    printf("Enter number of column and row: ");
    scanf("%i %i", &column, &row);
    transpositionRowAndColumn(array, column, row);
    printArray(array);
    getch();
    return 0;
}

void fillArray (int array [rows][columns]){
    int i, j;
      for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            array[i][j] = rand() % 100;
        }
    }

}

void transpositionRowAndColumn ( int array [rows][columns], int column, int row){

    int i, j, temp;
    for (i = 0; i < rows; i++){
            if(i!=columns && i!=rows){
            temp = array [row][i];
            array [row][i] = array [i][column];
            array [i][column] = temp;
            }
    }

}

void printArray (int array [rows][columns]){
    int i, j;
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
          printf("%2i ", array[i][j]);
        }
        printf("\n");
    }
}
