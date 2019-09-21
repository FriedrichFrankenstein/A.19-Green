#include <stdio.h>
#include <math.h>
main ()
{
	//Виділити пам'ять для вхідних, вихдіних, проміжних даних
	float side, S, V;
	//Ввести вхідні дані
	printf ("Enter side: ");
	scanf ("%f", &side);
	//Обробка даних	
	S=6*pow(side, 2);
	V=pow(side, 3);
	//Виведення результатів
	printf ("S=%g\nV=%g", S, V);
	getch();

}
