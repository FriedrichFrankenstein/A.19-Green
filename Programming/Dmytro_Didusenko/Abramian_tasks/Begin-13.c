#include <stdio.h>
#include <conio.h>
#include <math.h>
float main()
{
	float radius_1, radius_2, area_1, area_2, area_ring;
	printf("Enter R1 and R2, where R1>R2 and press Enter button \n");
	scanf("%f%f", &radius_1, &radius_2);
	area_1 = 3.14 * pow(radius_1, 2);
	area_2 = 3.14 * pow(radius_2, 2);
	area_ring = area_1 - area_2;
	printf("Area of the ring with outer radius %g and inner radius %g - %g", radius_1, radius_2, area_ring); 
	getch();
	return 0;
}
