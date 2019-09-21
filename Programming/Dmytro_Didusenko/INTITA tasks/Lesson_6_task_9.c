#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char currentNum[10];
	int i, counter, floatCount=0, currentInt, sumInt=0;
	double currentFloat, sumFloat=0;
	FILE *f_in, *f_int, *f_float;
	
	f_in = fopen("input9.txt", "r");
	f_int = fopen("int_output9.txt", "w");
	f_float = fopen("float_output9.txt", "w");
	
	if(f_in != NULL){
		while(fscanf(f_in, "%s", currentNum) != EOF){
			counter = 0;
			for(i=0; i<strlen(currentNum); i++){
				if(currentNum[i] == '.'){
					counter++;
				}
			}
			if(counter == 0){
				fprintf(f_int, "%s\n", currentNum);
			} 
			else{
				fprintf(f_float, "%s\n", currentNum);
				floatCount++;
			} 		
		}
	}
	else puts("File opening error. Check your file or debug your code and run the program again");
	
	fclose(f_in);
	fclose(f_int);
	fclose(f_float);
	
	f_int = fopen("int_output9.txt", "r");
	
	while(fscanf(f_int, "%s", currentNum) != EOF){
 		currentInt = atoi(currentNum);
 		sumInt += currentInt;
	}
	fclose(f_int);
	f_int = fopen("int_output9.txt", "a");
	fprintf(f_int, "Sum = %i\n", sumInt);
	fclose(f_int);
	
	f_float = fopen("float_output9.txt", "r");
	
	while(fscanf(f_float, "%s", currentNum) != EOF){
 		currentFloat = atof(currentNum);
 		sumFloat += currentFloat;
	}
	fclose(f_float);
	f_float = fopen("float_output9.txt", "a");
	fprintf(f_float, "Sum = %.2f\n", sumFloat);
	fclose(f_float);
//
	f_float = fopen("float_output9.txt", "r");
	char* temp = (char*)malloc(floatCount);
	i=0;
	while(fscanf(f_float, "%s", currentNum) != EOF){
		temp[i] = atoi(currentNum);
		i++;
	}
	fclose(f_float);
	sumInt = 0;
	for(i=0; i<floatCount; i++){
		sumInt += temp[i];
	}
	f_float = fopen("float_output9.txt", "a");
	fprintf(f_float, "Integers: ");
	for(i=0; i<floatCount; i++){
		fprintf(f_float, "%i ", temp[i]);
	}
	fprintf(f_float, "\nSum of integers = %i\n", sumInt);
	fclose(f_float);
//	
	puts("Action done! Check \"int_output9.txt\" and \"float_output9.txt\" files");
	
	return 0;
}
