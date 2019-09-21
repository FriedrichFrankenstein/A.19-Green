#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int lift ( int N, int f_start, int M );

int** getMemory ( int N );

void fillNumbersOfApartment ( int **array, int N );

int getFloorWithNeededApartment ( int **array, int N, int M );

int main()
{
    int N, f_start, M;
    printf ( "Enter number of floors; start floor; number of apartment: " );
    scanf ( "%i %i %i", &N, &f_start, &M );
    printf("The elevator will stop on the floor %i",lift (N, f_start, M) );
    getch();
    return 0;
}

int lift ( int N, int f_start, int M )
{
    int i, neededFloor;
    int **numbersOfApartment = getMemory ( N );
    fillNumbersOfApartment ( numbersOfApartment, N );
    neededFloor = getFloorWithNeededApartment (numbersOfApartment, N, M);
    if (neededFloor % 2 != 0){
        return neededFloor;
    } else {
        if (neededFloor > f_start){
            return --neededFloor ;
        } else {
            return ++neededFloor;
        }
    }
    for ( i = 0; i < N; i++ )
    {
        free ( * ( numbersOfApartment + i ) );
    }
    free ( numbersOfApartment );
}

int** getMemory ( int N )
{
    int i;
    int **array = calloc ( sizeof ( int ), N + 1 );
    for ( i = 1; i <= N; i++ )
    {
        * ( array + i ) = calloc ( sizeof ( int ), 3 );
    }
    return array;
}

void fillNumbersOfApartment ( int **array, int N )
{
    int i, j, k = 1;
    for ( i = 1; i <= N; i ++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            * ( * ( array + i ) + j ) = k;
            k++;
        }
    }
}

int getFloorWithNeededApartment ( int **array, int N, int M )
{
    int i, j;
    for ( i = 1; i <= N; i ++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            if(* ( * ( array + i ) + j ) == M ){
                return i;
            }
        }
    }
}
