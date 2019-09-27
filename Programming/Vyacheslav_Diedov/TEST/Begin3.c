#include <stdio.h>

main()
{
	// виділити пам'ять для вхідних, вихідних  і проміжних даних
	int side, Perim;
	// ввести вхідні дані
	//side=12;
	printf("input side (integer!!!)");
	scanf("%i",&side);
	// обробка даних
	Perim=4*side;
	// виведення результатів
	printf("A=%i\nP=4*A=4*%i=%i", side,side,Perim);
	getchar();
	
}
