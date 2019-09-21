#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 50

void charCopy (int n1, int n2, char str1[N], char str2 [N]);

void groupCopy (int n1, int n2, char str1[N], char str2 [N]);

int main()
{
    char str1 [N];
    char str2 [N];
    char choice;
    int n1, n2;
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    do{
        printf("Enter two numbers (< length of strings): ");
        scanf("%i %i", &n1, &n2);
    } while (n1 > strlen(str1) || n2 > strlen(str2));
    do{

        printf("What method for copy do you want to use? ( 1 - char; 2 - group): \n");
        choice =  getch();
        switch (choice){
            case '1': {
                charCopy(n1, n2, str1, str2);
                break;
            }
            case '2': {
                groupCopy (n1, n2, str1, str2);
                break;
            }
            default:{
                printf("You made wrong choice!\n");
                break;
            }
        }
        printf("Do you want to try again? Press 1 to try again.\n");
        choice = getch();
    } while ( choice == '1');
    getch();
    return 0;
}

void charCopy (int n1, int n2, char str1[N], char str2 [N]){
    char *str3 = (char *) calloc (sizeof(char), n1 + n2);
    int i;
    for (i = 0; i < n1 ; i++){
        *(str3 + i) = *(str1 + i);
    }
    for (i = 0; i < n2; i++){
        *(str3 + n1 + i) = *(str2 + (strlen(str2) - n2 + i));
    }
    puts(str3);
    free(str3);
}

void groupCopy (int n1, int n2, char str1[N], char str2 [N]){
    char *str3 = (char *) calloc (sizeof(char), n1 + n2);
    strncpy(str3, str1, n1);
    strncpy((str3 + n1), (str2 + (strlen(str2) - n2 )), n2);
    puts(str3);
    free(str3);

}

