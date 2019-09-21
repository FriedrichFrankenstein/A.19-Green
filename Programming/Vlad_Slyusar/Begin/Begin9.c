#include <stdio.h>
#include <math.h>
main ()
{
	//Виділити пам'ять для вхідних, вихдіних, проміжних даних
	float  sideA, sideB, average_value;
	//Ввести вхідні дані
	printf ("Enter 2 sides(not negative numbers): ");
	scanf ("%f%f", &sideA, &sideB);
		if (sideA<0 || sideB<0){
		printf ("Negative number");
	}
	else {
	//Обробка даних
	average_value=sqrt(sideA*sideB);
	//Виведення результатів
	printf ("Average value=%g", average_value);
	
}
	getch();
}
