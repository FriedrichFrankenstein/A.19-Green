#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[50];
    int i;
    while(fscanf(input, "%s", str) != EOF){
        for (i = 0; i < 10; i++){
            if (strchr (str, 48 + i) != 0){
                fprintf(output, "%s ", str);
                break;
            }
        }
    }
    fclose(input);
    fclose(output);
    getch();
    return 0;
}



