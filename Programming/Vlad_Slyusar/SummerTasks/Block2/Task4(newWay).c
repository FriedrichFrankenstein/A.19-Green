#include <stdio.h>
#include <conio.h>


int lift ( int N, int f_start, int M );

int checks (int N, int f_start, int M);

int main()
{
    int N, f_start, M;
    printf ( "Enter number of floors; start floor; number of apartment: " );
    scanf ( "%i %i %i", &N, &f_start, &M );
    printf("The elevator will stop on the floor %i",lift (N, f_start, M) );
    getch();
    return 0;
}

int lift ( int N, int f_start, int M )
{
    int i, neededFloor;
    if (checks(N, f_start, M)) return -1;
    if (M % 3 == 0){
    neededFloor = M / 3;
    } else {
        neededFloor = (M / 3) + 1;
    }
    if (neededFloor % 2 != 0){
        return neededFloor;
    } else {
        if (neededFloor > f_start){
            return --neededFloor ;
        } else {
            return ++neededFloor;
        }
    }
}

int checks (int N, int f_start, int M){
    if ( N < 100 || M > N * 3|| f_start > N){
        return 1;
    }
    if (  M < 1 || f_start < 1){
        return 1;
    }
    return 0;

}
