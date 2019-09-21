#include <stdio.h>
#include <conio.h>

int main() {
const int N = 11;
int mas[N][N], i, j;
for (i = 0; i < N; i++) {
for (j = 0; j < N; j++)
mas[i][j] = i * j;
}
for (i = 1; i < N; i++) {
for (j = 1; j < N; j++)
printf("%4d ", mas[i][j]);
printf("\n");
}
return 0;
}
