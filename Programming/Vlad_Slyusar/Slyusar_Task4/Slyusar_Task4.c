#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void deletEqualNumbers ()
{
    /*Есть массив, нужно удалить одинаковые числа при этом оставить
    последнее вхождение этого числа */
    int lengthArray, i, sum = 0, a;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A [lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 11;
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        for ( a = 0; a < lengthArray; a++ )
        {
            if ( A[a] == 0 || a == i )
            {
                continue;
            }
            if ( A[i] == A[a] )
            {
                A[i] = 0;
            }
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i] );
    }
}


void converselyMaxMin ()
{
    /*Есть массив. Нужно найти макс и минимальное значение, и переставить
    все числа между ними, включая миним и макс значение, в обратном порядке.*/
    int lengthArray, i, sum = 0, max = 0, min = 0, add;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A [lengthArray], A1 [lengthArray] ;
    for ( i = 0; i < lengthArray; i++ )
    {
        A [i] = rand() % 101;
        A1 [i] = A [i];
        if ( A [max] < A [i] )
        {
            max = i;
        }
        if ( A[i] < A[min] )
        {
            min = i;
        }
    }
    printf ( "Max = %i\nMin = %i\n", max, min );
    if ( max > min )
    {
        add = min;
        for ( max; max >= min; max--, add++ )
        {
            A1 [add] = A[max];
        }
    }
    else
    {
        add = max;
        for ( min; max <= min; min--, add++ )
        {
            A1 [add] = A[min];
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i] );
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A1 [%i] = %i\n", i, A1[i] );
    }
}
void numberInArraysAscending ()
{
    /*Есть 2 масива А[5] и В[5], элементы обоих упорядочены по возрастанию.
    Объеденить  эти массивы так, чтобы результирующий массив С[10], тоже был уопрядочен
    по ворзастанию.*/
    int lengthArray = 5;
    int  i, sum = 0, K = 0, h;
    int A[lengthArray], B[lengthArray], C[lengthArray + lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        K = rand() % 101;
        h = i;
        while ( 1 )
        {
            if ( A[h - 1] > K && h >= 1 )
            {
                A[h] = A [h - 1];
                h--;
                if ( h == 0 )
                {
                    A[h] = K;
                    break;
                }
            }
            else
            {
                A[h] = K;
                break;
            }
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        K = rand() % 101;
        h = i;
        while ( 1 )
        {
            if ( B[h - 1] > K && h >= 1 )
            {
                B[h] = B [h - 1];
                h--;
                if ( h == 0 )
                {
                    B[h] = K;
                    break;
                }
            }
            else
            {
                B[h] = K;
                break;
            }
        }
    }
    for ( i = 0 ; i < lengthArray; i++ )
    {
        C [i] = A [ i];
    }
    for ( i = 5 ; i < lengthArray * 2; i++ )
    {
        K = B [i - 5] ;
        h = i;
        while ( 1 )
        {
            if ( C[h - 1] > K && h >= 1 )
            {
                C[h] = C [h - 1];
                h--;
                if ( h == 0 )
                {
                    C[h] = K;
                    break;
                }
            }
            else
            {
                C[h] = K;
                break;
            }
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i] );
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "B[%i] = %i\n", i, B[i] );
    }
    for ( i = 0; i < lengthArray * 2; i++ )
    {
        printf ( "C [%i] = %i\n", i, C[i] );
    }
}

void sumOfPreviousNumbers ()
{
    /*Есть массив А, нужно сформировать массив В того же размера по правилу:
    элемент массива Вк = суме элементов массива А с номерами от 0 до К*/
    int lengthArray, i, sum = 0;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 11;
        sum += A[i];
        B[i] = sum;
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A [%i] = %i\n", i, A[i] ) ;
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "B [%i] = %i\n", i, B[i] ) ;
    }
}

void positionMultiple3 ()
{
    /*Есть массив А [<=15], нужно заполнить массив В числами массива А
    порядковый номер которых кратный 3. Вывести массив В и его длину.*/
    int lengthArray, i, n = 0, sizeArray;
    printf ( "Enter array length ( max 15): " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray / 3];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 101;
    }
    for ( i = 2; i <= lengthArray ; i += 3, n++ )
    {
        B [n] = A[i];
    }
    printf ( "Length B = %i\n", lengthArray / 3 );
    for ( i = 0; i < lengthArray / 3 ; i++ )
    {
        printf ( "B [%i] = %i\n",  i,  B[i] );
    }
    sizeArray = sizeof ( B ) / sizeof ( int );
    getch ();
}

void maxNumbersTimes ()
{
    /*Создать массив на 20 элементов. Проинициализировать рандомно
     числами от 0 до 9. Вывести число/числа которые
     повторяются чаще всего.*/
    int B[10] = {}, i, max;
    int A [20] = {};
    for ( i = 0; i < 20; i++ )
    {
        A [i] = rand() % 10;
        switch ( A [i] )
        {
        case 0:
        {
            B [0] ++;
            break;
        }
        case 1:
        {
            B [1] ++;
            break;
        }
        case 2:
        {
            B [2] ++;
            break;
        }
        case 3:
        {
            B [3] ++;
            break;
        }
        case 4:
        {
            B [4] ++;
            break;
        }
        case 5:
        {
            B [5] ++;
            break;
        }
        case 6:
        {
            B [6] ++;
            break;
        }
        case 7:
        {
            B [7] ++;
            break;
        }
        case 8:
        {
            B [8] ++;
            break;
        }
        case 9:
        {
            B [9] ++;
            break;
        }
        }
    }
    max = 0;
    for ( i = 0; i < 10; i++ )
    {
        if ( B [i] > B[max] )
        {
            max = i;
        }
    }
    for ( i = 0; i < 10; i++ )
    {
        if ( B[max] == B[i] )
        {
            printf ( "max = %i\n", i );
        }
    }
}

void arrayAscending ()
{
    /*Создать массив на 20 элементов. Проинициализировать рандомно
    числами от 0 до 50. Написать программу которая упорядочивает
    элементы по возрастанию. */
    int  i, K, h;
    int A [20] ;
    for ( i = 0; i < 20; i++ )
    {
        K = rand() % 51;
        h = i;
        while ( 1 )
        {
            if ( A[h - 1] > K && h >= 1 )
            {
                A[h] = A [h - 1];
                h--;
                if ( h == 0 )
                {
                    A[h] = K;
                    break;
                }
            }
            else
            {
                A[h] = K;
                break;
            }
        }
    }
    for ( i = 0; i < 20; i++ )
    {
        printf ( "A [%i] = %i\n", i, A[i] ) ;
    }
}

void indicesSumOfNumbers ()
{
    /*Given an array of integers, return indices
    of the two numbers such that they add up to a specific target
    . You may assume that each input would have exactly one solution,
    and you may not use the same element twice.  */
    int  lengthArray = 100, array [lengthArray], i, target, h, sum;
    printf ( "Enter target ( 0 < target < 60): " );
    scanf ( "%i", &target );
    for ( i = 0; i < lengthArray; i++ )
    {
        array [i] = rand() % 31;
    }
    /* for ( i = 0; i < lengthArray; i++ )
     {
         printf ( " array [%i] = %i\n", i, array[i] );
     }*/
    for ( i = 0; i < lengthArray; i++ )
    {
        for ( h = 1; h < lengthArray; h++ )
        {
            if ( array [i] + array [h] == target && array [i] != array [h] )
            {
                printf ( "Indices: %i and %i", i, h );
                return;
            }
        }
    }
    printf ( "No result" );
}
int main()
{
    int choice;
    srand ( time ( NULL ) );
    while ( 1 )
    {
        printf ( "\nEnter which function do you want to see\n" );
        printf ( "1 - deletEqualNumbers\n" );
        printf ( "2 - converselyMaxMin\n" );
        printf ( "3 - numberInArraysAscending\n" );
        printf ( "4 - sumOfPreviousNumbers\n" );
        printf ( "5 - positionMultiple3\n" );
        printf ( "6 - maxNumbersTimes\n" );
        printf ( "7 - arrayAscending\n" );
        printf ( "8 - indicesSumOfNumbers\n" );
        printf ( "Another number is EXIT\n" );
        scanf ( "%i", &choice );
        switch ( choice )
        {
        case 1:
        {
            deletEqualNumbers();
            break;
        }
        case 2:
        {
            converselyMaxMin();
            break;
        }
        case 3:
        {
            numberInArraysAscending();
            break;
        }
        case 4:
        {
            sumOfPreviousNumbers();
            break;
        }
        case 5:
        {
            positionMultiple3();
            break;
        }
        case 6:
        {
            maxNumbersTimes();
            break;
        }
        case 7:
        {
            arrayAscending();
            break;
        }
        case 8:
        {
            indicesSumOfNumbers();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
    getch ();
}
