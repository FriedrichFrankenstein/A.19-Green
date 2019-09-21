#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


void sortArrayOfWords ()
{
    int i, j = 0, sign;
    char temp [15];
    char string [5][15] = { "Kiev", "Vinnitsa", "Lvov", "Dnepr", "Karkov"};
    for ( i = 0; i < 5; i++ )
    {
        for ( j = i + 1; j < 5; j++ )
        {
            if ( ( string[i][0] > 64 && string[i][0] < 91 ) && ( string[j][0] > 64 && string[j][0] < 91 ) )
            {
                * ( * ( string + i ) ) += 32;
                * ( * ( string + j ) ) += 32;
                sign = strcmp ( string[i], string [j] );
                * ( * ( string + i ) ) -= 32;
                * ( * ( string + j ) ) -= 32;
            }
            else if ( string[i][0] > 64 && string[i][0] < 91 )
            {
                * ( * ( string + i ) ) += 32;
                sign = strcmp ( string[i], string [j] );
                * ( * ( string + i ) ) -= 32;
            }
            else if ( string[j][0] > 64 && string[j][0] < 91 )
            {
                * ( * ( string + j ) ) += 32;
                sign = strcmp ( string[i], string [j] );
                * ( * ( string + j ) ) -= 32;
            }
            else
            {
                sign = strcmp ( string[i], string [j] );
            }
            if ( sign > 0 )
            {
                strcpy ( temp, * ( string + i ) );
                strcpy ( * ( string + i ), * ( string + j ) );
                strcpy ( * ( string + j ), temp );
            }
        }
    }
    for ( i = 0; i < 5; i++ )
    {
        puts ( * ( string + i ) );
    }
}




int main()
{
    char string [] = {'p', 'g', 'a', 'i', 'm', 'n', 'q', 'w'};
//    int i = 0, len, j, temp, flag = 0;
//    int arr [] = {5, 8, 5, 6, 9, 1, 4};
//    len = sizeof ( arr ) / sizeof ( int );
//    for ( i = 0; i < len - 1 ;  )
//    {
//        if ( arr[i] > arr [i sortArrayOfWords+ 1] )
//        {
//            temp = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = temp;
//            flag = 1;
//        }
//        i++;
//        if ( flag == 0 && i == len - 2 )
//            break;
//        if ( i == len - 2 )
//        {
//            i = 0 ;
//            flag = 0;
//        }
//    }
//    for ( i = 0; i < len ; i++ )
//    {
//        printf ( "%i", arr[i] );
//    }
//    int i = 0, len, j, flag = 0;
//    char tempc;
//    len = sizeof ( string ) ;
//    for ( i = 0; i < len - 1 ;  )
//    {
//        if ( string [i] > string [i + 1] )
//        {
//            tempc = string[i];
//            string[i] = string[i + 1];
//            string[i + 1] = tempc;
//            flag = 1;
//        }
//        i++;
//        if ( flag == 0 && i == len - 2 )
//            break;
//        if ( i == len - 2 )
//        {
//            i = 0 ;
//            flag = 0;
//        }
//    }
//    for ( i = 0; i < len ; i++ )
//    {
//        printf ( "%c", string[i] );
//    }
    sortArrayOfWords();
    getch();
    return 0;
}



