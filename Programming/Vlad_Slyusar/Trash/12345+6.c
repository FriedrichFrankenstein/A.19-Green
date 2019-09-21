#include <stdio.h>
#include <math.h>

void update ( int *a, int *b )
{
    int c = *a, d = *b;
    *a = c + d;
    *b = fabs ( c - d );
}

int main()
{

    int a, b;
    int *pa = &a, *pb = &b;
    int *ppa = pa;
    scanf ( "%d %d", &a, &b );
    update ( ppa, pb );
    printf ( "%d\n%d", a, b );
    return 0;
}
