#include <stdio.h>

main()
{
	// виділити пам'ять для вхідних, вихідних  і проміжних даних
	//int- цілі числ;
	//float- дробові числа;
	float side, Perim;
	// ввести вхідні дані
	//side=12;
	//printf-вивести на екран
	printf("Введiть данi");
	//scanf("%i",&side);
	scanf("%f",&side);
	// обробка даних
	Perim=side*side;
	// виведення результатів
	//printf("A=%i\nP=4*A=4*%i=%i", side,side,Perim);
	//printf("A=%f\nP=4*A=4*%f=%f", side,side,Perim);
	printf("A=%g\nP=A*A=%g*%g=%g", side,side,Perim);
	/* %g для чисел без нулів після коми */
	getch();
	
}
