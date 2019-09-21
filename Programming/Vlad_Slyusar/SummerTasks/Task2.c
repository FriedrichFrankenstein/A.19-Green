#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    for (i = 0; i <= 64; i++){
        printf("Rabbits %2i; geeses %2i\n", i, 64-i);
    }
    getch();
    return 0;
}


