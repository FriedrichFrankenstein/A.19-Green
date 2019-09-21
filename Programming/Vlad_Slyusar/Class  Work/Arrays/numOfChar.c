#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int i, balance = 0;
    char string [] = "[[]][][[[]]";
    for ( i = 0; i < 11; i++ )
    {
        if ( string [i] == '[' )
        {
            balance++;
        }
        else if ( string [i] == ']' )
        {
            balance--;
        }
    }
    if ( balance == 0 )
    {
        printf ( "equals" );
    }
    else
    {
        printf ( "in equals" );
    }
    getch ();
    return 0;
}
