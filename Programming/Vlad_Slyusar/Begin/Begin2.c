#include <stdio.h>
#include <math.h>
main ()
{
	//Виділити пам'ять для вхідних, вихдіних, проміжних даних
	float side, S;
	//Ввести вхідні дані
	printf ("Side ");
	scanf ("%f", &side);
	//Обробка даних
	S = pow (side, 2);
	//Виведення результатів
	printf ("S = %g", S);
	getch();
}
