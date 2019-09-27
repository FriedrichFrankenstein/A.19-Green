#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int a = 12378;
	char text[] = "EndofFile";
	
	FILE* f=fopen("file_bin","ab"); 
	printf("position start: %i\n",ftell(f));
	rewind(f);
	printf("position start: %i\n",ftell(f));
	fseek(f, 0, 2);
    printf("position 1: %i\n",ftell(f));
    fseek(f, -(long)sizeof(a), 1);
	printf("position 2: %i\n",ftell(f));
    fseek(f, 0, 2);    
	printf("position 3: %i\n",ftell(f));    
    rewind(f);
    printf("position 4: %i\n",ftell(f));
    fwrite(text,sizeof(text),1,f);
    printf("position fin: %i\n",ftell(f));
    getch();
    return 0;
}
