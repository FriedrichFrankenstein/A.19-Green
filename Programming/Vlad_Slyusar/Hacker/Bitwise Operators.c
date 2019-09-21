#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum ( int n, int k )
{
    int A [n], i, length = 0, num = 1, i1, max1 = 0, max2 = 0, max3 = 0;
    for ( i = 0; i < n; i++ )
    {
        A [i] = num;
        num++;
        length += i;
    }
    num = 0;
    int A1 [length], A2 [length], A3 [length];
    for ( i = 0; i < n; i++ )
    {
        for ( i1 = i + 1; i1 < n ; i1++ )
        {
            A1[num] = A [i] & A[i1];
            A2[num] = A[i] | A[i1];
            A3[num] = A[i] ^ A[i1];
            num++;
        }
    }
    for ( i = 0; i < length; i++ )
    {
        if ( A1[i] < k )
        {
            max1 = i;
            break;
        } else if( i == length - 1){
        max1 = 0;
        A1 [max1] = 0;
        }
    }
    for ( i = 0; i < length; i++ )
    {
        if ( A2[i] < k )
        {
            max2 = i;
            break;
        } else if( i == length - 1){
        max2 = 0;
        A2 [max2] = 0;
        }
    }
    for ( i = 0; i < length; i++ )
    {
        if ( A3[i] < k )
        {
            max3 = i;
            break;
        } else if( i == length - 1){
        max3 = 0;
        A3 [max3] = 0;
        }
    }
    for ( i = 0 ; i < length; i++ )
    {
        if ( A1 [i] > A1[max1] && A1 [i] < k )
        {
            max1 = i;
        }
        if ( A2 [i] > A2[max2] && A2 [i] < k )
        {
            max2 = i;
        }
        if ( A3 [i] > A3 [max3] && A3 [i] < k )
        {
            max3 = i;
        }
    }
    // printf("%i\n%i\n%i", max1, max2, max3);
     printf("%i\n%i\n%i", A1[max1], A2 [max2], A3[max3]);
}

int main()
{
    int n, k;
    scanf ( "%d %d", &n, &k );
    calculate_the_maximum ( n, k );
    return 0;
}
