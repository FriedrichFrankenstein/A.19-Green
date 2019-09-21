#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* scant(FILE* str);

main()
{
 FILE *str = fopen("resource.txt","w+");
 return 0;
}

char* scant(FILE* str){
	char word[10];
int i;
while(fscanf(str,"%s",word[i])!=EOF){
        i++;
    }	
//	fscanf(str, "%c", word);
   printf("%s", word[i]);
}
