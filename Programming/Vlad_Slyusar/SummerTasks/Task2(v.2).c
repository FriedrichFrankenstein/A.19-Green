#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    for (i = 0; i <= 16; i++){
        printf("Rabbits %2i; geeses %2i\n", i, 32-i*2);
    }
    getch();
    return 0;
}


