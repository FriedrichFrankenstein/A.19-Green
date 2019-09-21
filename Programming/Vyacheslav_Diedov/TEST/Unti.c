#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	int i;
    int counter = 0;
    char string[100] = "HTML is the standard markup language for Web pages.";
    for( i = 0; i < 100; i++){
        if(string[i] == ' ' && string[i] != ' '){
            counter++;
        }
    }
    printf("%i\n", counter+1);
    return 0;
}
