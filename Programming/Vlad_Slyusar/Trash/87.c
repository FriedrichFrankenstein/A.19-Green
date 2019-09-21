#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>

int main ()
{
    int maxLength, lengthRow;
    printf ( "Enter max length: " );
    scanf ( "%i", &maxLength );
    fflush(stdin);
    char str [1000];
    do {
        printf("Enter row: ");
        gets(str);
        lengthRow = strlen(str);
        printf("Length of row: %i\n", lengthRow);
    } while (maxLength < lengthRow);
    getch();
    return 0;
}
