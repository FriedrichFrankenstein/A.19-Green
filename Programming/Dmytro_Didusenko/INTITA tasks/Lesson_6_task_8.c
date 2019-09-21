#include <stdio.h>
#include <string.h>

int main(){
	char word[10];
	int i;
	FILE *fin, *fout;
	
	fin = fopen("input8.txt", "r");
	fout = fopen("output8.txt", "w");
	
	if(fin != NULL){
		while(fscanf(fin, "%s", word) != EOF){
			for(i=0; i<strlen(word); i++){
				if(word[i] >= '0' && word[i] <= '9')
				fprintf(fout, "%s ", word);
			}
		}
		puts("Action done! Look into \"output8.txt\" file");
	}
	else puts("Error. File does'n exist");
	
	fclose(fin);
	fclose(fout);
	return 0;
}
