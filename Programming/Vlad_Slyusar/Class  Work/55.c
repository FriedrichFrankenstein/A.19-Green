#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int digitalInt (){
    int number, i, counter = 0;
    printf("Enter big number: ");
    scanf ("%i", &number);
    while( number > 0){
        number /= 10;
        counter ++;
    }
    return counter;
}

void randNum ( int arr [], int size )
{
    int i;
    for ( i = 0; i < size; i++ )
    {
        arr [i] = rand() % 101;
    }
}
void printArr ( int arr [], int adb [], int size, int n )
{
    int i;
    for ( i = 0; i < size; i++ )
    {
        printf ( "Array [%i] = %i\n", i, arr [i] /*% 2 == 0 ? arr[i] : -1*/ );
    }
     for ( i = 0; i < n; i++ )
    {
        printf ( " Array2 [%i] = %i\n", i, adb[i] );
    }
}

int getEvenNumber ( int arr [], int adb [], int size )
{
    int i, n = 0, index = 0;
    for ( i = 0; i < size; i++ )
    {
        if ( arr [i] % 2 == 0 )
        {
            adb [n] = arr [i];
            n++;
        }
    }

    return n;
   /* for ( i = 0; i < size; i++){
        if (arr[i]%2==0){
            arr[index++] = arr[i];
        }printf("Number of number: %i", lengthNumber);
        return index;
    }*/

}
int getTotalSum (int array[])
{
    int i, sum, length = 10;
    for (i = 0; i < length; i++ ){
        sum += array [i];
    }
    return sum;
}

int main ()
{
    srand ( time ( NULL ) );
    int i, size = 10, lengthArray2, lengthNumber;
    int array [size];
    int array2 [size];
    randNum ( array, size );
   // lengthArray2 = getEvenNumber ( array, array2, size );
  //  printArr ( array, array2, size, lengthArray2 );

   // lengthNumber = digitalInt();
    int sum = getTotalSum(array);
    printf("Total sum: %i", sum);
   // printf("Number of number: %i", lengthNumber);
    getchar();
    return 0;
}
