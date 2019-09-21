#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 15
#define M 15

int main()
{
    FILE* fp = fopen("input.dat", "rb");
    FILE* fpOutput = fopen("output.dat", "wb");
    int A[N] = {}, i = 0, j, B[M] = {}, temp;
    int C[N];
   // while (1){
        if ( fread(A, sizeof(int), 15, fp) <= N){
            if (fread(B, sizeof(int), 15, fp)<= M){
                printf("Reached end of file!\n");
            } else {
                printf("In file are there more number than space in array.");
            }
           // i++;
        } else {
            printf("Reached end of file!\n");
        }
//        } else if ( i == 1){
//            fread(B, sizeof(int), 15, fp);
//            i++;
//            if (feof(fp)){
//            printf("Reached end of file!\n");
//            break;
//        } else {
//            printf("In file are there more number than space in array.");
//            break;
//        }
//        }
  //  }
    for (i = 0; i < N; i++){
            temp = A[i] + B[i];
        printf("temp = %i\n", temp);
        fwrite(&temp, sizeof(int), 1, fpOutput);
    }
    freopen("output.dat", "rb", fp);
    rewind(fp);
    fread(C, sizeof(int), N, fp);
    for (i = 0; i < N; i++){
       // fread(&j, sizeof(int), 1, fp);
        printf("j = %i  A = %i  B = %i\n", C[i], A[i], B[i]);
    }
    fclose(fp);
    fclose(fpOutput);
    return 0;
}


