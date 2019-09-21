#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>

int powFunction ( int number, int powNumber){
    int i, temp = number;
    if (powNumber == 0){
        return 1;
    }
    for (i = 1; i < powNumber; i ++){
        number *= temp;
    }
    return number;
}

void saveNumberOfNumberInArray ()
{
    int number, i = 0, temp, lengthArray = 1, temp2;
    int *array = malloc ( lengthArray * 4 );
    printf ( "Enter your number: " );
    scanf ( "%i", &number );
    temp = number;
    while ( temp > 0 )
    {
        * ( array + i ) = temp % 10;
        temp /= 10;
        lengthArray += 1;
        array = realloc ( array,  lengthArray * 4 );
        printf ( "lengthArray  = %i\n", lengthArray );
        i ++;
    }
    for ( i = 0; i < (lengthArray - 1) / 2; i++ )
    {
        temp2 = array[i];
        array[i] = array[lengthArray - 2 - i];
        array[lengthArray - 2 - i] = temp2;
    }
    for ( i = 0; i < lengthArray - 1 ; i++ )
    {
        printf ( "%i", array[i] );
    }
    free(array);
}

void createArray (){
    int lengthArray = rand() % 10;
    int *array = calloc( lengthArray, sizeof(int));
    free(array);
}

void tranformWordIntoCharArray (){
    char string [20], string2 [20];
    printf ("Enter your word: ");
    scanf("%s", string);
    fflush(stdin);
    strcpy(string2, string);
    printf("%s", string2);

}

void floatWholeFractional (){
   float number;
    int i = 0, resultArray [2] = {}, flag = 0, counterFract = 0, counterInt = 0;
    char *string = calloc ( 1, sizeof ( char ) );
    printf ( "Enter number: " );
    while ( 1 )
    {
        string [i] = getch();
        if ( string [i] == 13 )
        {
            break;
        }
          if ( string[i] == 46 )
        {
            flag = 1;
        }
        printf ( "%c", string[i] );
        string = realloc ( string, _msize ( string ) + 1 );
        if ( flag == 0 )
        {
            counterInt++;
        }
        else
        {
            counterFract++;
        }
        i++;
    }
    flag = 0;
   // if ( counterFract >= 2){
   //     resultArray [1] = 1;
   //1 }
  // printf("counterInt = %i\n", counterInt);
   counterFract -= 2;
   counterInt--;
    for ( i = 0; i < _msize ( string ) - 1; i++ )
    {
        if ( string[i] == 46 )
        {
            flag = 1;
            continue;
        }
        if ( flag == 0 )
        {
            resultArray[flag] += ( string[i] - 48 ) * pow(10, counterInt) ;
          //  int test = powFunction ( 10, counterInt);
           // printf("\nstring = %i, counter = %i \n", test, counterInt );
            counterInt--;
        }
        else
        {
            //printf("\n%i\n", counterFract);
            resultArray[flag] += ( string[i] - 48 ) * pow ( 10, counterFract );
           // int test = pow ( 10, counterFract);
           // printf("\nstring = %i, counter = %i \n", test, counterFract );
            counterFract--;
        }
    }
    //resultArray [1] += 1;
    free(string);
    printf ( "\nResult:\n%i\n%i", resultArray[0], resultArray[1] );
}

int main()
{
    srand(time(NULL));
   // saveNumberOfNumberInArray();
    //createArray();
   // tranformWordIntoCharArray();
    floatWholeFractional();
    getch();
    return 0;
}
