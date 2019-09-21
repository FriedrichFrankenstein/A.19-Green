#include <conio.h>
#include <stdio.h>



int main()
{
	unsigned int firstNamber=50;     //unsigned полпжительне число
	unsigned int secondNamber=10;
	int summa = sum(firstNamber,secondNamber);
	int difficalt = diff(firstNamber,secondNamber);
	int multiply = mult(firstNamber,secondNamber);
	printf("%i,%i,%i",summa,difficalt,multiply);
        return 0;
	getch();
}



//function-імя функції
//int function(int numberOme,int numberTwo)
//{
//	int suma= numberOme+numberTwo;
//	return suma;
//}

int sum(int numberOme,int numberTwo)
{
	int sum= numberOme+numberTwo;
	return sum;
}
int diff(int numberOme,int numberTwo)
{
	int diff= numberOme/numberTwo;
	return diff;
}
int mult(int numberOme,int numberTwo)
{
	int mult= numberOme*numberTwo;
	return mult;
}



