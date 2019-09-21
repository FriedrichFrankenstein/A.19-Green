#include <stdio.h>
#include <string.h>
#include <math.h>

int lengthOfLine ( int x1, int x2, int y1, int y2 );

int area ( int line1, int line2 );

int main()
{
    int points [4][2];
    int i, k = 0, line1, line2, S;
    int couples [4] = {};
    for ( i = 0; i < 4; i++ )
    {
        printf ( "Enter x y:" );
        scanf ( "%i %i", &points [i][0],  &points [i][1] );
        if ( points[i][0] >= 0 && points[i][1] >= 0 )
        {
            couples [k] = i;
            k++;
        }
    }
    if ( k == 1 )
    {
        line1 = lengthOfLine ( points [couples[k - 1]][0],
                               0,
                               points [couples[k - 1]][1],
                               points [couples[k - 1]][1] );
        line2 = lengthOfLine ( points [couples[k - 1]][0],
                               points [couples[k - 1]][0],
                               points [couples[k - 1]][1],
                               0 );
        S = area ( line1, line2 );
        printf ( "S = %i", S );
    }
    else if ( k == 2 )
    {
        line1 = lengthOfLine ( points [couples[k - 2]][0],
                               0,
                               points [couples[k - 2]][1],
                               points [couples[k - 2]][1] );
        line2 = lengthOfLine ( points [couples[k - 2]][0],
                               points [couples[k - 1]][0],
                               points [couples[k - 2]][1],
                               points [couples[k - 1]][1] );
        S = area ( line1, line2 );
        printf ( "S = %i", S );
    }
    else if ( k == 4 )
    {
        line1 = lengthOfLine ( points [couples[k - 4]][0],
                               points [couples[k - 3]][0],
                               points [couples[k - 4]][1],
                               points [couples[k - 3]][1] );
        line2 = lengthOfLine ( points [couples[k - 4]][0],
                               points [couples[k - 1]][0],
                               points [couples[k - 4]][1],
                               points [couples[k - 1]][1] );
        S = area ( line1, line2 );
        printf ( "S = %i", S );
    }
    else
    {
        printf ( "Wrong enter!" );
    }
    return 0;
}


int lengthOfLine ( int x1, int x2, int y1, int y2 )
{
    int result = sqrt ( pow ( ( x2 - x1 ), 2 ) + pow ( ( y2 - y1 ), 2 ) );
    return result;
}

int area ( int line1, int line2 )
{
    int S = line1 * line2;
    return S;
}
