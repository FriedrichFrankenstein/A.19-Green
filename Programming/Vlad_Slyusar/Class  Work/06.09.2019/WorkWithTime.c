#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



int main()
{
    FILE* fp = fopen("data.txt", "r");
    float sum = 0.0;
    int a, counter = 0;
    clock_t begin = clock();
    while (fscanf(fp,"%i", &a) != EOF){
        sum += a;
        counter++;
    }
    sum /= counter;
    printf("Average number is %g\n", sum);
    fclose(fp);
    clock_t end = clock();
    float time_spend = (float) (end - begin) / CLOCKS_PER_SEC;
    printf("Time = %f", time_spend);
    getch();
    return 0;

}

