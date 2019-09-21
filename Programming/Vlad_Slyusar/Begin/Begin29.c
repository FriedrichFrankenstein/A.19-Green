#include <stdio.h>
#include <math.h>

main()
{
	float a, angleRad;
	printf ("Enter angle (0<a<360): ");
	scanf ("%f", &a);
	if (a<0 || a> 360)
	{
		printf ("Wrong number");
	}
	else {
		angleRad=a/(180/3.14);
		printf ("result=%g", angleRad);
		
	}
	getchar;
}
