#include <stdio.h>
#include <string.h>

int checkOnNumbers(char str[20]);

int main(){
	int i;
	char str[20];
	FILE *myfile = fopen("input.txt", "r");
    while (fscanf(myfile, "%s", str)!=EOF){
    	i = 0;
    	printf("%s\n", str);
    	i = checkOnNumbers(str);
    	if ( i > 0 ){
    		FILE *myfile = fopen("output.txt", "a");
    		fprintf(myfile, "%s\n", str);
		}
	}
	fclose(myfile);
	return 0;
}

int checkOnNumbers(char str[20]){
	int i, j;
	for(i = 0; i < 20; i++){
		for( j = 0; j < 10; j++){
			if(str[i] == (49 + j)){
				return 1;
			}
		}
	}
	return -1;
}
