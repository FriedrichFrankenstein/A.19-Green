#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int* openingOfLock ( int array [], int constNum1, int constNum2 );

void getConstPosNumber ( int array[], int constNum );

int getConstNumber ();

void printOfArray ( int array[] );

void fillingArray ( int array[] );

void searchNullNumberAndFillIt ( int array[], int constNum1, int constNum2, int constPlace1 );

int checkSolution (int constNum1, int constNum2, int constPlace1, int constPlace2);

int main()
{
    srand ( time ( NULL ) );
    int constNum1, constNum2, i, k;
    int array [10] = {};
    constNum1 = getConstNumber();
    constNum2 = getConstNumber();
    getConstPosNumber ( array, constNum1 );
    getConstPosNumber ( array, constNum2 );
    openingOfLock ( array, constNum1, constNum2 );
    getch();
    return 0;
}

int* openingOfLock ( int array [], int constNum1, int constNum2 )
{
    int i = 0, constPlace1 = 0, constPlace2 = 0;
    printf ( "\n" );
    printf ( "Origin numbers: \n" );
    printOfArray ( array );
    for ( i = 0 ; i < 10; i ++ )
    {
        if ( array [i] == constNum1  &&  constPlace1 == 0)
        {
            constPlace1 = i;
        }
        else if ( array[i] == constNum2 &&  constPlace2 == 0 )
        {
            constPlace2 = i;
        }
    }
    constPlace1 %= 3;
    constPlace2 %= 3;
    if (  checkSolution(constNum1, constNum2, constPlace1, constPlace2 ))
    {
        printf ( "Task hasn't solution" );
    } else
    {
        array[constPlace1] = constNum1;
        array[constPlace2] = constNum2;
        searchNullNumberAndFillIt ( array, constNum1, constNum2, constPlace1 );
        fillingArray ( array );
        printf ( "\n" );
        printf ( "Result: \n" );
        printOfArray ( array );
    }
    return array;
}

void getConstPosNumber ( int array[], int constNum )
{
    int i ;
    do
    {
        printf ( "Enter position for number: " );
        scanf ( "%i", &i );
    }
    while ( array[i] != 0 );
    array[i] = constNum;
}


int getConstNumber ()
{
    int constNum;
    printf ( "Enter  constant number (1 - 6): " );
    scanf ( "%i", &constNum );
    if ( constNum > 6 || constNum < 1 )
    {
        printf ( "Wrong number!\n" );
        getConstNumber();
    }
    else
    {
        return constNum;
    }
}

void printOfArray ( int array[] )
{
    int i;
    for ( i = 0; i < 10; i ++ )
    {
        printf ( "%i\n", array[i] );
    }
}

void fillingArray ( int array[] )
{
    int i = 0;
    while ( 1 )
    {
        i += 3;
        array[i] = array[0];
        if ( i == 9 )
        {
            break;
        }
        array[i + 1] = array[1];
        array[i + 2] = array[2];
    }
}

void searchNullNumberAndFillIt ( int array[], int constNum1, int constNum2, int constPlace1 )
{
    int i = 0;
    if ( constNum1 == constNum2 )
    {
        switch ( constPlace1 )
        {
        case 0:
        {
            array [1] = 7 - constNum1;
            array [2] = 10 - array[1] - constNum1;
            break;
        }
        case 1:
        {
            array [0] = 7 - constNum1;
            array [2] = 10 - array[0] - constNum1;
            break;
        }
        case 2:
        {
            array [0] = 7 - constNum1;
            array [1] = 10 - array[0] - constNum1;
            break;
        }
        }
    }
    else
    {
        for ( i = 0; i < 3; i++ )
        {
            if ( array[i] == 0 )
            {
                array[i] = 10 - ( constNum1 + constNum2 );
            }
        }
    }
}

int checkSolution (int constNum1, int constNum2, int constPlace1, int constPlace2){
    if ((constPlace1 == constPlace2 && constNum1 == constNum2 && constNum1 + constNum2 <= 12)){
        return 0;
    }
    if ( constNum1 + constNum2 <= 9){
        return 0;
    }
    return 1;

}


