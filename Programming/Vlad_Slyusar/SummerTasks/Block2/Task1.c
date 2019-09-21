#include <stdio.h>
#include <conio.h>
#include <math.h>
#define sqrt2 1.41
void ta90 ( int el, float val, float *a, float *b, float *h, float *S );

void getB ( float *a, float *b );

void getH ( float *b, float *h );

void getS ( float *a, float *S );

void getA ( float *b, float *a );

int main()
{
    int el;
    float val, a, b, h, S;
    float *pa = &a, *pb = &b, *ph = &h, *pS = &S;
    printf ( "Enter el and value: " );
    scanf ( "%i %f", &el, &val );
    if ( val <= 0 )
    {
        printf ( "Wrong value" );
        a = -1;
        b = -1;
        h = -1;
        S = -1;
    } else {
       ta90 ( el, val, pa, pb, ph, pS );
    }
    printf("Results:\na = %g\nb = %g\nh = %g\nS = %g\n", a, b, h, S);
    getch();
    return 0;
}

void ta90 ( int el, float val, float *a, float *b, float *h, float *S )
{
    switch ( el )
    {
    case 1:
    {
        *a = val;
        getB ( a, b );
        getH ( b, h );
        getS ( a, S );
        break;
    }
    case 2:
    {
        *b = val;
        getA ( b, a );
        getH ( b, h );
        getS ( a, S );
        break;
    }
    case 3:
    {
        *h = val;
        *b = *h * 2;
        getA ( b, a );
        getS ( a, S );
        break;
    }
    case 4:
    {
        *S = val;
        *b = sqrt ( 4 * *S );
        getA ( b, a );
        getH ( b, h );
        break;
    }
    default:
    {
        printf ( "Wrong el!\n" );
        *a = -1;
        *b = -1;
        *h = -1;
        *S = -1;
        break;
    }
    }
}

void getB ( float *a, float *b )
{
    *b = *a * sqrt2;
}

void getH ( float *b, float *h )
{
    *h = *b / 2;
}

void getS ( float *a, float *S )
{
    *S = pow ( *a, 2 ) / 2;
}

void getA ( float *b, float *a )
{
    *a = ( *b * sqrt2 ) / 2;
}

