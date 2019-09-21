#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




int main()
{
    char *s1 = malloc ( 40* 1 );
    char *s2 = malloc ( 40* 1 );
    char temp;
    int n, sign = 0;
    printf ( "Enter string s1: " );
    gets ( s1 );
    do
    {
        sign = 0;
        printf("Enter string s2: ");
        gets ( s2 );
        printf("Enter number n: ");
        scanf("%i", &n);
        fflush(stdin);
        if (n > strlen(s2) + 1){
            printf("\nn is too big, enter less number\n");
            sign = 1;
            continue;
        } else if ( _msize(s1)  < strlen(s2)){
            printf("\nNot enough space to copy s2 in s1!\n");
            sign = 1;
            continue;
        }
        s2 [n] = 0;
        temp = s1 [n];
        strcpy(s1 , s2);
        s1 [n] = temp;
    }  while( sign == 1);
    puts(s1);
    getch();
    return 0;
}

