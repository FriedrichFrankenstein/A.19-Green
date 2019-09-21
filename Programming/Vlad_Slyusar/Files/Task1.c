#include <stdio.h>
#include <conio.h>
#include <string.h>



int main()
{
    char S [15] = "Bill";
    FILE *newFile;
    newFile = fopen("Bill.txt", "w");
    fprintf(newFile, "True %s", S);
    fclose(newFile);
    getch();
    return 0;
}
