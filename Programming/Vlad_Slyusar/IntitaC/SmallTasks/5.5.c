#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 80

int func (char str [MAX]);

int main()
{
    printf("Enter string: ");// підказка
    char string[MAX];
    gets(string);
    printf("Result = %i", func(string));
    getch();
    return 0;
}

int func (char str [MAX])    {
    char *ps = str;
    int i = 0, numPos = -1;
    while (1){
        if ( *(ps + i) == 0) break;
        if ( *(ps + i) == 'y'){
            numPos = i;
        }
        i++;
    }
    return numPos;
}
