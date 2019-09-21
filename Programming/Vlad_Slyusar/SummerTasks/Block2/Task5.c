#include <stdio.h>
#include <conio.h>

void cows ( int G, int *pb, int *pc, int *pt );

int main()
{
    int G, b, c, t;
    int *pb = &b, *pc = &c, *pt = &t;
    printf ( "Enter sum of money(tens of thousands): " );
    scanf ( "%i", &G );
    G *= 10000;
    cows ( G, pb, pc, pt );
    printf ( "Amount of money: %i\ncalves : %i\n cows: %i\nbulls: %i", G, t, c, b );
    getch();
    return 0;
}

void cows ( int G, int *pb, int *pc, int *pt )
{
    int firstCows ;
    if ( G > 500000 && G <= 1000000 )
    {
        firstCows = G / 5000;
        *pc = firstCows - ( firstCows - 100 ) * 2;
        *pb = firstCows - 100;
        *pt = 0;
    }
    else if ( G % 50000 == 0 && G >= 50000 )
    {
        *pb = ( G / 50000 ) - 1;
        *pc = *pb * 9;
        *pt = 100 - *pb * 10;
    }
    else
    {
        *pt = -1;
        *pc = -1;
        *pb = -1;
    }
}
