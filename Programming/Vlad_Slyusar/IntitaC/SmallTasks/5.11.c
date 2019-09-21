#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10

int main()
{
    char s1[MAX], s2[MAX];
    do{
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);
    if (strlen(s1) + strlen(s2) < MAX){
        strcat(s1, s2);
        printf("Result: ");
        puts(s1);
        break;
    }
    } while (1);
    getch();
    return 0;
}


