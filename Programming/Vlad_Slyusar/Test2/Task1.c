#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

int* merge ( int n1, int* a1, int n2, int* a2 );

int main ()
{
    int i;
    int *a1 = ( int* ) calloc ( sizeof ( int ), 10 );
    int *a2 = ( int* ) calloc ( sizeof ( int ), 10 ) ;
    for ( i = 0; i < 10; i++ )
    {
        a1 [i] = i + 10 ;
        a2 [i] = i + 50 ;
    }
    int *temp = merge ( 10, a1, 10, a2 );
    for (i = 0; i < 20; i++){
        printf("%i\n", temp[i]);
    }
    free ( a1 );
    free ( a2 );
    getch();
    return 0;
}

int* merge ( int n1, int* a1, int n2, int* a2 )
{
    void sortMin ( int *array, int n1, int n2 )
    {
        int i, j, temp, min, place;
        for ( i = 0; i < n1 + n2; i++ )
        {
            min = * ( array + i );
            place = i;
            for ( j = i; j < n1 + n2; j++ )
            {
                if ( array[j] < min )
                {
                    min = array[j];
                    place = j;
                }
            }
            temp = * ( array + i );
            * ( array + i ) = min;
            * ( array + place ) = temp;
        }
    }
    void sortMax ( int *array, int n1, int n2 )
    {
        int i, j, temp, max, place;
        for ( i = 0; i < n1 + n2; i++ )
        {
            max = * ( array + i );
            place = i;
            for ( j = i; j < n1 + n2; j++ )
            {
                if ( array[j] > max )
                {
                    max = array[j];
                    place = j;
                }
            }
            temp = * ( array + i );
            * ( array + i ) = * ( array + place );
            * ( array + place ) = temp;
        }
    }
    int* fillArray ( int n1, int* a1, int n2, int* a2 )
    {
        int i;
        int *array = ( int* ) calloc ( sizeof ( int ), n1 + n2 );
        for ( i = 0; i < n1 + n2; i++ )
        {
            if ( i < n1 )
            {
                * ( array + i ) = * ( a1 + i );
            }
            else
            {
                * ( array + i ) = * ( a2 + ( i - n1 ) );
            }
        }
        return array;
    }
    int i;
    if ( (_msize ( a1 ) == 0 && _msize ( a2 ) == 0) || (n1 == 0 && n2 == 0) )
    {
        printf ( "Arrays is empty\n" );
        return NULL;
    }
    if ( (_msize ( a1 ) / sizeof(int)) != n1 || (_msize ( a2 ) / sizeof(int)) != n2){
        printf("Date in func is wrong!");
        return NULL;
    }
    int *array = fillArray ( n1, a1, n2, a2 );
    if ( * ( a1 + 0 ) > * ( a1 + 1 ) || * ( a2 + 0 ) > * ( a2 + 1 ) )
    {
        sortMax ( array, n1, n2 );
    }
    else
    {
        sortMin ( array, n1, n2 );
    }
    return array;
}
