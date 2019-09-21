#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    FILE* fp = fopen("input.dat", "wb");
    int arr [29], i;
    for (i = 0; i < 29; i++){
        arr[i] = i+10;
    }
    fwrite(arr, sizeof(int), 29, fp);
    fclose(fp);
    return 0;
}

