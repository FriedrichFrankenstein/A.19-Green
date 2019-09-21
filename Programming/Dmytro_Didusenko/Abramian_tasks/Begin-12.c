#include <stdio.h>
#include <conio.h>
#include <math.h>
float main()
{
	int cath_a, cath_b;
	float gipotenuse, perim;
	printf("Enter two cathetuses of triangle and press Enter \n");
	scanf("%i%i", &cath_a, &cath_b);
	gipotenuse = sqrtf(powf(cath_a, 2) + powf(cath_b, 2));
	perim = cath_a + cath_b + gipotenuse;
	printf("Gipotenuse = %g\nPerim = %g \n", gipotenuse, perim);
	getch();
	return 0;
}
