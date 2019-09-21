#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int isAnagram ( int n1, char *s1, int n2, char *s2 );


int main ()
{
    char *s1 = "A gentleman";
    char *s2 = "Elegant man";
    int result = isAnagram ( 4, s1, 4, s2 );
    if (result){
        printf("Strings are anagram");
    } else {
        printf("Strings are not anagram");
    }
    getch();
    return 0;
}

int isAnagram ( int n1, char *s1, int n2, char *s2 )
{
    void toLowCase ( int n1, char *s1, char *s2 )
    {
        int i;
        for ( i = 0; i < n1; i++ )
        {
            if ( s1[i] > 64 && s1[i] < 91 )
            {
                s1[i] += 32;
            }
            if ( s2[i] > 64 && s2[i] < 91 )
            {
                s2[i] += 32;
            }
        }
    }
    void countChar ( int len1, char *s1, char *s2, int *alphabet1, int *alphabet2 )
    {
        int i, j;
        for ( i = 0; i < 26; i++ )
        {
            for ( j = 0; j < len1; j++ )
            {
                if ( s1 [j] == i + 97 )
                {
                    alphabet1[i]++;
                }
                if ( s2 [j] == i + 97 )
                {
                    alphabet2[i]++;
                }
            }
        }
    }
    int   len1 = strlen ( s1 );
    int   len2 = strlen ( s2 );
    char *string1 = (char *) calloc(1, len1);
    char *string2 = (char *) calloc(1, len2);
    strcpy(string1, s1);
    strcpy(string2, s2);
    int alphabet1 [26] = {};
    int alphabet2 [26] = {};
    int i;
    if ( len1 != len2 )
    {
        return 0;
    }
    if ( len1 == 0 )
    {
        printf ( "Strings are empty, but void = void, that is why this strings are anagram too.\n" );
        return 1;
    }
    toLowCase ( len1, string1, string2 );
    countChar ( len1, string1, string2, alphabet1, alphabet2 );
    for ( i = 0; i < 26; i++ )
    {
        if ( alphabet1[i] !=  alphabet2[i] )
        {
            return 0;
        }
    }
    return 1;
}
