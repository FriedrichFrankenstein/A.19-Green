#include <stdio.h>
#include <conio.h>
 float main()
{
	float radius, length, area;
	printf("Enter radius value R = ");
	scanf("%f", &radius);
	length = 2*3.14*radius;
	area = 3.14*radius*radius;
	printf("Length=%g, Aree=%g", length, area);
	getch();
	return 0;
}
