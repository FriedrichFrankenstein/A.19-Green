#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15
#define M 16

void creatingBinaryFile ();

int main()
{
    creatingBinaryFile  ();
    FILE* fp = fopen ( "input.dat", "rb" );
    FILE* fpOutput = fopen ( "output.dat", "wb" );
    int A[N] = {}, i = 0, j, B[M] = {}, temp;
    if ( fread ( A, sizeof ( int ), N, fp ) >= N )
    {
            fread ( B, sizeof ( int ), M, fp );
            if ( feof(fp)){
            printf ( "Reached end of file!\n" );
            } else {
             printf ( "In file are there more number than space in array." );
             return 0;
            }
    }
    else
    {
        printf ( "Reached end of file!\n" );
    }
    for ( i = 0; i < N; i++ )
    {
        temp = A[i] + B[i];
        fwrite ( &temp, sizeof ( int ), 1, fpOutput );
    }
    freopen ( "output.dat", "rb", fpOutput );
    for ( i = 0; i < N; i++ )
    {
        fread(&j, sizeof(int), 1, fpOutput);
        printf ( "j = %i  A = %i  B = %i\n", j, A[i], B[i] );
    }
    fclose ( fp );
    fclose ( fpOutput );
    return 0;
}

void creatingBinaryFile (){

  srand(time(NULL));
    FILE* fp = fopen("input.dat", "wb");
    int arr [30], i;
    for (i = 0; i < 30; i++){
        arr[i] = rand() % 11;
    }
    fwrite(arr, sizeof(int), 30, fp);
    fclose(fp);

}
