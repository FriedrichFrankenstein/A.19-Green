#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void DivBy3(FILE *fp);
void IsSquare(FILE *fp);

int main (){
	//FILE *pInput = fopen("readTask1.txt", "r");
	FILE *input = fopen ("readTask2.txt", "r");
	
//	DivBy3(pInput);
	IsSquare(input);
	
	fclose (input);
//	fclose(pInput);
	return 0;
}

void DivBy3(FILE *fp){
	
	int count=0;
	int Sum=0, Num;
	int i=0,j=0;
	char* buffer=(char*)malloc(100*sizeof(char));
	FILE *output = fopen ("resultTask1.txt","w");
	while (fscanf(fp, "%s", buffer)!=EOF){
		for (j=0;j<strlen(buffer);j++){
				Num = buffer[j] - 48;
				Sum+=Num;
		}
			printf ("%i\n", Sum);
			if (Sum%3==0){
				fprintf (output, "1\n");
			}else {
				fprintf (output, "0\n");
			}
			Sum=0;
	}
	fflush(output);
	fclose(output);
}

void IsSquare(FILE *fp) {

	float n=0;
	long long i=0,buffer;
	FILE *output = fopen ("resultTask2.txt","w");
	while (fscanf(fp, "%lli", &buffer)!=EOF){
		printf ("%lli\n", buffer);
		n=(long long)sqrt(buffer);
			if (n*n==buffer){
				fprintf (output, "%lli\n", buffer);
			}
		}
	fclose(output);
}

