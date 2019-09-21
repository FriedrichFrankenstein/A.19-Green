#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    FILE* fp = fopen("input.dat", "rb");
    int a;
    //rewind(fp);
    fread(&a, sizeof(int), 1, fp);
    printf("1. %i\n", a);
    fseek(fp, sizeof(int), SEEK_CUR);
    fread(&a, sizeof(int), 1, fp);
    printf("2. %i\n", a);
    fseek(fp, sizeof(int), SEEK_SET);
    fread(&a, sizeof(int), 1, fp);
    printf("3. %i\n", a);
    fseek(fp, sizeof(int), SEEK_CUR);
    fread(&a, sizeof(int), 1, fp);
    printf("4. %i\n", a);
    fclose(fp);
    return 0;
}

