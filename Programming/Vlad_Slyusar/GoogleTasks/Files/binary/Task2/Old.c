#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 15
#define M 14

int main()
{
    FILE* fp = fopen("input.dat", "rb");
    FILE* fpOutput = fopen("output.dat", "wb");
    fseek(fp, 0, SEEK_END);
    printf("\n%i\n", ftell(fp));
    int A[N] = {}, i = 0, j, B[M] = {}, temp;
    int C[N];
    while (1){
        if ( i == 0){
            fread(A, sizeof(int), 15, fp);
            i++;
        } else if ( i == 1){
            fread(B, sizeof(int), 14, fp);
            printf("\n%i\n", ftell(fp));
            i++;
            if (feof(fp)){
            printf("Reached end of file!2\n");
            }
            break;
        } else {
            printf("In file are there more number than space in array.");
            break;
        }
        }
        return 0;
    }

//    for (i = 0; i < N; i++){
//     fpOutput       temp = A[i] + B[i];
//    printf("temp = %i\n", temp);
//        fwrite(&temp, sizeof(int), 1, fpOutput);
//    }
//    freopen("output.dat", "rb", fpOutput);
//    fread(C, sizeof(int), N, fpOutput);
//    for (i = 0; i < N; i++){
//       // fread(&j, sizeof(int), 1, fp);
//        printf("j = %i  A = %i  B = %i\n", C[i], A[i], B[i]);
//    }
//    fclose(fp);
//    fclose(fpOutput);
//    return 0;
//}

