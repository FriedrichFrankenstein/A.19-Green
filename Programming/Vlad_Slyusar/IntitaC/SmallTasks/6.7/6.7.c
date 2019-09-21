#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int num1, num2, num3;
    fscanf(input, "%i %i %i", &num1, &num2, &num3);
    fprintf(output, "%i %i %i", num2, num1, num3);
    fclose(input);
    fclose(output);
    getch();
    return 0;
}



