#include <stdio.h>
#include <conio.h>
float main()
{
	printf("Enter degree value (0 < a < 2pi) and press Enter \n");
	float alfaRadian, alfaDegree;
	scanf("%f", &alfaRadian);
	alfaDegree = (alfaRadian * 180) / 3.14;
	printf("%g radians = %f degrees \n", alfaRadian, alfaDegree);
	getch();
	return 0;
}
