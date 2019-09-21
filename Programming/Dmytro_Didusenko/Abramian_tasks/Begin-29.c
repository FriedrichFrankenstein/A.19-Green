#include <stdio.h>
#include <conio.h>
float main()
{
	printf("Enter degree value (0 < a < 360) and press Enter \n");
	float alfaDegree, alfaRadian;
	scanf("%f", &alfaDegree);
	alfaRadian = (alfaDegree * 3.14) / 180;
	printf("%g degrees = %f radians", alfaDegree, alfaRadian);
	getch();
	return 0;
}
