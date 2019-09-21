#include <stdio.h>
#include <string.h>


int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *validNumbers = fopen("validNumbers.txt", "w");
    FILE *integers = fopen("integers.txt", "w");
    float tempFloat, sumFloat = 0, lastValidNum;
    int tempInt, sumInt = 0, sumIntParts = 0;

    while(fscanf(input, "%f", &tempFloat) != EOF){
        tempInt = tempFloat;
        if (tempFloat - tempInt == 0){
            fprintf(integers, "%i\n", tempInt);
            sumInt += tempInt;
        }else {
            fprintf(validNumbers, "%g\n", tempFloat);
            sumFloat += tempFloat;
            sumIntParts += tempInt;
        }
    }
    fprintf(integers, "Sum = %i\n", sumInt);
    fprintf(validNumbers, "Sum = %g\n", sumFloat);
    freopen("validNumbers.txt", "a",validNumbers );
    freopen("validNumbers.txt", "r",input );
    rewind(validNumbers);
    lastValidNum = tempFloat;
    fprintf(validNumbers, "Integer parts: ");
    while(fscanf(input, "%f", &tempFloat) != EOF){
        tempInt = tempFloat;
        fprintf(validNumbers, "%i ", tempInt);
        if (tempFloat == lastValidNum) break;
    }
    fprintf(validNumbers, "\nSum of integer parts: %i", sumIntParts);
    fclose(input);
    fclose(validNumbers);
    fclose(integers);
    return 0;
}
