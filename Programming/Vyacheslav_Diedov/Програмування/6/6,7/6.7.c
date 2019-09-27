#include <stdio.h>

typedef struct
{
int x;
int y;
int z;
}Mystruct;

Mystruct readFile();

void writeFile(Mystruct mystruct);

int main()
{
	Mystruct mystruct;
	mystruct = readFile();
	writeFile(mystruct);
	printf("Have a nice day!");
	return 0;
}

Mystruct readFile()
{
	Mystruct mystruct;
	FILE *myfile = fopen("input.txt", "r");
	fscanf(myfile, "%i%i%i", &mystruct.x, &mystruct.y, &mystruct.z);
	fclose(myfile);
	return mystruct;
}

void writeFile(Mystruct mystruct)
{
	FILE *myfile = fopen("output.txt", "w");
	fprintf(myfile, "%i\n%i\n%i\n", mystruct.y, mystruct.x, mystruct.z);
	fclose(myfile);
}
