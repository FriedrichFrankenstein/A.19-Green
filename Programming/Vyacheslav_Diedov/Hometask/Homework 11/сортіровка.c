#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
# define N 7

int main(){
FILE* pInput = fopen("resource.txt","r");
    char arr[N][20];
    char temp[20];
    int i, j;
    while(fscanf(pInput, "%s", arr[i]) != EOF){
        i++;
    }
    
    for( i = 0;i < N; i++){
        for( j = 0; j < N;j++){
            if(strcmp(arr[i], arr[j]) == -1){
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    for( i = 0; i < N; i++){
        printf("%s\n", arr[i]);
    }
    FILE* pOutput = fopen("data.txt", "w");
    for(i = 0; i < N; i++){
    	fprintf(pOutput, "%s\n", arr[i]);
	}
	fflush(stdout);
    fclose(pInput);
    return 0;
}
