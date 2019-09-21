#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void nullLocalMax ()
{
    //Дан массив. Обнулить все его локальные максимумы(числа больше своих  соседей).
    int lengthArray, i;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int array [100];
    for ( i = 0; i < lengthArray; i++ )
    {
        array[i] = rand() % 10;
        printf ( "Array1 [%i] = %i\n", i, array[i] );
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        if ( array[i] > array[i - 1] && array [i] > array [i + 1] && i > 0 )
        {
            array [i] = 0;
        }
        if ( i == 0 && array [i] > array [i + 1] )
        {
            array [i] = 0;
        }
        if ( array[i] > array[i - 1] && i == lengthArray - 1 )
        {
            array [i] = 0;
        }
    }
    printf("_________________________________\n");
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ("Array1 [%i] = %i\n", i, array[i] );
    }
}
void powLocalMin (){
    //Дан массив. Поднести до квадрата все его локальные минимумы(числа больше своих  соседей).
    int lengthArray, i;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int array [100];
    for ( i = 0; i < lengthArray; i++ )
    {
        array[i] = rand() % 10;
        printf ( "Array1 [%i] = %i\n", i, array[i] );
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        if ( array[i] < array[i - 1] && array [i] < array [i + 1] && i > 0 )
        {
            array [i] *= array [i];
        }
        if ( i == 0 && array [i] < array [i + 1] )
        {
            array [i] *= array [i];
        }
        if ( array[i] < array[i - 1] && i == lengthArray - 1 )
        {
            array [i] *= array [i];
        }
    }
    printf("_________________________________\n");
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ("Array1 [%i] = %i\n", i, array[i] );
    }
}

void maxElemInC(){
    /*Есть массивы А, В, С. Сформировать массив С из максимальных элементов массивов А и В
     с теми же индексами*/
    int lengthArray, i;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray], C[lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 101;
        B[i] = rand() % 101;
        if ( A[i] > B [i] )
        {
            C[i] = A [i];
            printf ( "Place: %i; A = %i, B = %i, C = %i\n", i, A[i], B[i], C[i] );
        }
        else
        {
            C[i] = B[i];
            printf ( "Place: %i; A = %i, B = %i, C = %i\n", i, A[i], B[i], C[i] );
        }
    }
    }

void printMatrixSpiral_InClockwise (){
    /*Есть квадратный 2 мерный массив. Нужно вывести
        все его значения по часовой стрелке и по спирали.*/

    int M, i = 0, h = 0, k = 0, g = 0;
    printf ( "Enter length of array: " );
    scanf ( "%i", &M );
    g = ( M - 3 ) / 2 + 2;
    int A [M][M]  ;
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < M; h++ )
        {
            A [i][h] = i;
        }
    }
    for ( i = 0; i <= g; i++ )
    {
        for ( h = i ; h < M - i; h++ )
        {
            printf ( "1 : %i\n", A[i][h] );
            if ( i == g && h == g )
            {
                return ;
            }
        }
        for ( k = i + 1, h = M - ( i + 1 ); k <= M - ( i + 1 ); k++ )
        {
            printf ( "2 : %i\n", A [k][h] );
        }
        for ( k = M - ( i + 1 ), h = M - ( i + 1 ); h > i; h -- )
        {
            printf ( "3 : %i\n", A [k][h] );
        }
        for ( h = i, k = M - ( i + 2 ) ; k >= i + 1; k-- )
        {
            printf ( "4 : %i\n", A [k][h] );
        }
    }

}

void printMatrixSpiralCounterClockwise (){
     /*Есть квадратный 2 мерный массив. Нужно вывести
        все его значения против часовой стрелке и по спирали.*/
     int M, i = 0, h = 0, k = 0, g = 0;
    printf ( "Enter length of array: " );
    scanf ( "%i", &M );
    g = ( M - 3 ) / 2 + 2;
    int A [M][M]  ;
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < M; h++ )
        {
            A [i][h] = i;
        }
    }
    for ( i = 0; i <= g; i++ )
    {
        for ( h = i ; h < M - i; h++ )
        {
            printf ( "1 : %i\n", A[h][i] );
            if ( i == g && h == g )
            {
                return ;
            }
        }
        for ( h = i + 1, k = M - ( i + 1 ); h <= M - ( i + 1 ); h++ )
        {
            printf ( "2 : %i\n", A [k][h] );
        }
        for ( h = M - ( i + 1 ), k = M - ( i + 1 ); k > i; k -- )
        {
            printf ( "3 : %i\n", A [k][h] );
        }
        for ( k = i, h = M - ( i + 2 ) ; h >= i + 1; h-- )
        {
            printf ( "4 : %i\n", A [k][h] );
        }
    }
}

void sumOfEveryString () {
    int M = 5, N, i, h, maxInd = 0;
    printf("Enter length of array M and N: ");
    scanf("%i%i", &M, &N);
    printf("M = %i, N = %i\n", M, N);
    int array [M][N];
    int arrayForSum [M] ;
    for (i = 0; i < M; i++){
        arrayForSum [i] = 0;
    }
    for ( i = 0; i < M; i++){
        for ( h = 0; h < N; h++){
        array [i][h] = rand()%11;
        arrayForSum [i] += array [i][h];
        }
    }
    for ( i = 0; i < M; i++){
        for ( h = 0; h < N; h++){
        printf("%i ", array [i][h]);
        }
        printf("\n");
    }
     for ( i = 0; i < M; i++){
        printf("Array for sum [%i] = %i\n", i, arrayForSum [i]);
    }


}

int main()
{
    char choice;
    srand ( time ( NULL ) );
     while ( 1 )
     {
         printf ( "\nEnter which function do you want to see\n" );
         printf ( "1 - nullLocalMax\n" );
         printf ( "2 - powLocalMin\n" );
         printf ( "3 - maxElemInC\n" );
         printf ( "4 - printMatrixSpiral_InClockwise\n" );
         printf ( "5 - printMatrixSpiralCounterClockwise\n" );
         printf ( "6 - sumOfEveryString\n" );
         printf ( "Another number is EXIT\n" );
         choice = getch();
         switch ( choice )
         {
         case '1':
         {
             nullLocalMax();
             break;
         }
         case '2':
         {
             powLocalMin();
             break;
         }
         case '3':
         {
            maxElemInC();
             break;
         }
         case '4':
         {
             printMatrixSpiral_InClockwise();
             break;
         }
         case '5':
         {
                printMatrixSpiralCounterClockwise();
             break;
         }
         case '6':
         {
             sumOfEveryString();
             break;
         }
         default:
         {
             return 0;
         }
         }
     }
    getch ();
    return 0;
}
