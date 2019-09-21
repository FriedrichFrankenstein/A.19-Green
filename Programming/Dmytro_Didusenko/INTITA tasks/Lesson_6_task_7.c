#include <stdio.h>
#include <string.h>

int main(){
	int nums[3], i;
	FILE *fin, *fout;
	
	fin = fopen("input7.txt", "r");
	fout = fopen("output7.txt", "w");
	
	if(fin == NULL) puts("File open Error! Create file or debug your code");
	else{
		while(1){
			i = fscanf(fin, "%i%i%i", &nums[0], &nums[1], &nums[2]);
			if(i < 3) break;
			fprintf(fout, "%i %i %i\n", nums[1], nums[0], nums[2]);			
		}
		puts("Action done!");
	}
	fclose(fin);
	fclose(fout);
	
	return 0;
}
