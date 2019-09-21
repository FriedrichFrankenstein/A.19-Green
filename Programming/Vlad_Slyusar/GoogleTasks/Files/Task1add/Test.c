#include <stdio.h>
#include <string.h>


int main()
{

    char string [20][20] = {{}};
    char tempWord [20];
    strcpy(string[4], "TRE");
    char *adress = strstr(string[5], "Bitch");
    if (adress == 0) printf("WIN");
   // printf("%p", adress);

    return 0;
}

