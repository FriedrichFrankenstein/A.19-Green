#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


void sortArrayOfWords ();

void comparisonOfNumbers ();

void setNumberAndString (int *pn1, int *pn2, char *str1, char *str2);

int myStrlen ( char *str);

int checkLengthOfString (int n1, int n2,char *str1, char *str2 );

char * newString ( int n1, int n2, char *str1, char *str2);

int main()
{       sortArrayOfWords();
      int n1, n2, *pn1 = &n1, *pn2 = &n2, checkLength;
    char *str1  = (char *) calloc(30, 1);
    char *str2 = (char *) calloc(30, 1);
    char *str3;
    setNumberAndString (pn1, pn2, str1, str2);
    checkLength = checkLengthOfString (n1, n2,str1, str2 );
    if ( checkLength == 0){
        printf("Some n longer than some string!");
        return 0;
    }
    str3 = newString(n1, n2, str1, str2);
    puts(str3);
    free(str1);
    free(str2);
    free(str3);
    getch();
    return 0;
}


void sortArrayOfWords ()
{
    int i, j = 0, sign;
    char temp [15];
    char string [5][15] = { "Kiev", "Vinnitsa", "Lvov", "Dnepr", "Kharkov"};
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

void setNumberAndString (int *pn1, int *pn2, char *str1, char *str2){

    printf("Enter 2 number: ");
    scanf("%i%i", pn1, pn2);
    fflush(stdin);
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
}

int checkLengthOfString (int n1, int n2,char *str1, char *str2 ){
        if (myStrlen(str1) >= n1 && myStrlen(str2) >= n2){
            return 1;
        }
        return 0;

}

char * newString ( int n1, int n2, char *str1, char *str2){
    char *str3 = (char *) calloc(n1 + n2 + 1, 1);
    int i, j = 0;
    for (i = 0; i < n1 + n2;i++ ){
        str3[i] = str1 [i];
        if ( i >= n1){
             str3[i] = str2 [j];
             j++;
        }
    }
    str3[i] = 0;
    return str3;

}

int myStrlen ( char *str){
    int i = 0;
    while (str [i] != 0){
        i++;
    }
    return i;
}

void comparisonOfNumbers ()
{
    int n;
    printf ( "Enter number n: " );
    scanf ( "%i", &n );
}
