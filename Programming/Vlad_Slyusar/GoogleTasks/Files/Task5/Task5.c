#include <stdio.h>
#include <string.h>


int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int i ;
    char string [30] = {};
    while (1){
        if ( fscanf(input, "%s",string ) == EOF) break;
        for ( i = 0; i < strlen(string); i++){
            if (string [i] >= '0' && string [i] <= '9'){
                fprintf(output, "%s ", string);
            }
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
