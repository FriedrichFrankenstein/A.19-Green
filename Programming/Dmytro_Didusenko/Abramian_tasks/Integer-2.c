#include <stdio.h>
#include <conio.h>
main()
{
	int weight_kg, weight_t;
	printf("Input the weihgt in kilogramms and press Enter \n");
	scanf("%i", &weight_kg);
	weight_t = weight_kg / 1000;
	printf("The weights in tonnes = %i", weight_t);
	getch();
}
