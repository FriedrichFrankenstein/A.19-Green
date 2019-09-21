#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>

void DivBy3(FILE *fp);
void IsSquare(FILE *fp);

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE* input = fopen("input1.txt","r");

    DivBy3(input);
    //IsSquare(input);


    fclose(input);



    getch();
    return 0;
}

void DivBy3(FILE *fp)
{
    int sum[100] = {};
    int i = 0, j = 0;
    char buffer[100][100];
    while(fscanf(fp,"%s",buffer[i]) != EOF )
    {
        for(j = 0; j < strlen(buffer[i]); j++)
        {
            if(buffer[i][j] != '-')
            sum[i] += buffer[i][j] - '0';
        }
        i++;
    }
    fclose(fp);
    FILE* output = fopen("result.txt","w");
    for(j = 0 ; j < i; j++)
    {
        if(sum[j] % 3 == 0 && sum[j] != 0)
            fprintf(output,"1\n");
        else
            fprintf(output,"0\n");
    }
    fclose(output);
}
void IsSquare(FILE *fp)
{
    FILE* output = fopen("result.txt","w");
    long long int temp, j;
    while(fscanf(fp,"%lli",&temp) != EOF)
    {
        printf("%lli\n",temp);
        for(j = 1; j <= temp/2; j++)
        {
            if( temp/j == j )
            {
                fprintf(output,"%lli\n",temp);
                break;
            }
        }
    }
    fclose(output);
}
void IsSquare(FILE *fp)
{
    FILE* output = fopen ("result.txt","w");
    long long int number = 0, square1, square2;
    while(fscanf(fp,"%lli",&number) != EOF)
    {
        square1 = sqrt(number);
        square2 = square1 * square1;
        if(number - square2  == 0)
        {
            fprintf(output, "%lli\n", number);
        }
    }
    fclose(output);
}
