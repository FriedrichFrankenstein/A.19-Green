#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* fscant(FILE* str);

int main(){
    FILE *input = fopen("resource.txt","r");
    int i;
    char* name;

	for(i = 0; i < 7; i++){
	name = fscant(input);
	name++;
    }
	puts(name);
	return 0;
}

char* fscant(FILE* str)
{
int i = 0;
char* name;
name = (char*)malloc(1*sizeof(char));
while(1){
if(fscanf(str,"%c", name+i)==EOF)break;
//printf("%c ", *name);
i++;
name = (char*)realloc(name,(i+1)*sizeof(char));
if(*(name+i-1) == ' ' || *(name+i-1) == ',' || *(name+i-1) == '.' || 
*(name+i-1) == '-')break;
}
*(name+i)=0;
//printf("\n");
if(_msize(name)==1) return NULL;
return name;
}


