#include <stdio.h>

int main(){
	int i, j, n, temp;
	int k1 = 1, k2 = 3;
	int arr[20] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
int matr[4][5];
for (i = 0; i < 20; ){
    for( j = 0; j < 4; j++){
        for( n = 0; n < 5; n++){
            matr[j][n] = arr[i];
            printf("%i ", matr[j][n]);
            i++;
        }
        printf("\n");
    }
}
for( n = 0; n < 4; n++){
	temp = matr[n][k1];
	matr[n][k1] = matr[n][k2];
    matr[n][k2] = temp;
}
printf("\n");
for ( i = 0; i < 20; ){
    for( j = 0; j < 4; j++){
        for( n = 0; n < 5; n++){
            arr[i] = matr[j][n];
            printf("%i ", matr[j][n]);
            i++;
        }
    printf("\n");
    }
}
return 0;
}
