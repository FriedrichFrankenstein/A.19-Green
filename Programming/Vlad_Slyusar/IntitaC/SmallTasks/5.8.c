#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int n, result;
    char str1 [] = "Australia";
    char str2 [] = "Austria";
    do{
        printf("Enter the number of characters to check: ");
        scanf("%i", &n);
        result = strncmp(str1, str2, n);
        if (result == 0){
            printf("Match");
        } else{
            printf("Doesn't match\n");
        }
    } while (result != 0);
    return 0;
}
