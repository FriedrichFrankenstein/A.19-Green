#include <stdio.h>
#include <string.h>

void createTempFiles (FILE *filePointer1,  FILE *filePointer2);

int main()
{
    FILE *filePointer1 = fopen("text1.txt", "r");
    FILE *filePointer2 = fopen("tempText1.txt", "w");
    FILE *result = fopen("result.txt", "w");
    char string [50][20] = {{}};
    char tempWord [20];
    int counter [50] = {}, i = 0, flag = 0, k = 0;
    createTempFiles (filePointer1, filePointer2);
    rewind(filePointer1);
    freopen("tempText2.txt", "w", filePointer2);
    createTempFiles (filePointer1, filePointer2);
    freopen("tempText1.txt", "r", filePointer1);
    freopen("tempText2.txt", "r", filePointer2);
    while (1){
            flag = 0;
        if (fscanf(filePointer1, "%s", &tempWord) == EOF) break;
        for ( i = 0; i < 50; i++){
            if (strstr (string[i], tempWord) != 0){
                flag = 1;
                continue;
            }
        }
        if (flag == 1){
            continue;
        }
        strcpy(string[k], tempWord);
        while (1){
            if (fscanf(filePointer2, "%s", &tempWord) == EOF) break;
          // printf("k = %i; %s =  %s\n", k, string[k],  tempWord);
            if (strcmp(tempWord, string[k]) == 0){
             //   printf("TRUE\n");
                counter [k] ++;
            }
        }
        k++;
        rewind(filePointer2);
    }
    k = 0;
    while (strlen(string[k]) >= 1){
        fprintf(result, "%s - %i\n", string[k], counter[k]);
        k++;
    }
    fclose(filePointer1);
    fclose(filePointer2);
    fclose(result);
    remove("tempText1.txt");
    remove("tempText2.txt");
    return 0;
}

void createTempFiles (FILE *filePointer1,  FILE *filePointer2){

    char temp1;
      while (1){
        if (fscanf(filePointer1, "%c", &temp1) == EOF) break;
        if ( temp1 >= 'A' && temp1 <= 'Z'){
            temp1 += 32;
        }
        if (temp1 >= 'a' && temp1 <= 'z' || temp1 == ' ' ){
            fprintf(filePointer2, "%c", temp1);
        }
    }
}
