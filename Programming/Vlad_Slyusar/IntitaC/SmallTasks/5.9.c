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

char* test (char *str1, char *str2, int n) {
    char *s1, *s2;
    s1 = &str1[0];
    s2 = &str2[0];
    if (15 < n ){
        return "Error";
    }else if ( 15 - n > 9){
    return "Error";
    } else {
        s1 += n;
        strcpy ( s1 + n, s2);
        return s1;
    }
}
