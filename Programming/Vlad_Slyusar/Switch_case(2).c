#include <stdio.h>
#include <conio.h>
#include <math.h>

void whichSeason (int month){
	/*Case 3. Есть число 1-12 которое соответствует номеру месяца.
	Необходимо узнать какому времени года принадлежит месяц.*/
	switch (month){
		case 3 ... 5:{
			printf ("Season is Spring\n");
			break;
		}
		case 6 ... 8: {
			printf ("Season is Summer\n");
			break;
		}
		case 9 ... 11: {
			printf ("Season is Autumn\n");
			break;
		}
		default: printf ("Season is Winter\n");
		
	}
}
void howMuchDaysInTheMonth (int month){
	/*Case 4. Есть число 1-12 которое соответствует номеру месяца.
	Необходимо узнать сколько дней в конкретном месяце (невысокосный год).*/
	switch (month){
		case 2:{
			printf ("Month has 28 days");
			break;
		}
		case 4 :	{
				printf ("Month has 30 days");
				break;
			}
		case 6 :	{
				printf ("Month has 30 days");
				break;
			}
		case 9 :	{
				printf ("Month has 30 days");
				break;
			}
		case 11 :	{
				printf ("Month has 30 days");
				break;
			}
			default: printf ("Month has 31 days");			
	}
}
void tasksWithMonths (){
	int number;
	printf ("Enter number of month: ");
	scanf ("%i", &number);
	whichSeason (number);
	howMuchDaysInTheMonth (number);
}
void smallCalc(){
	/*Дано число 1-4 которое отвечает за математическое действие.
	Также дано 2 числа. Нужно произвести соответствующее мат. действие
	и вывести результат на экран.*/
	int mathAction, numberA, numberB, result;
	printf (" Сhoose math action (1=+,2=-,3=*,4=/): ");
	scanf ("%i", &mathAction);
	printf ("Enter 2 number: ");
	scanf ("%i%i", &numberA, &numberB);
	if ( numberB == 0){
		printf ("Wrong number");
	}
	else{ 
	
		switch (mathAction){
			case 1:{
				result = numberA + numberB;
				printf ("Result: %i", result);
				break;
			}
			case 2:{
				result = numberA - numberB;
				printf ("Result: %i", result);
				break;
			}
			case 3:{
				result = numberA * numberB;
				printf ("Result: %i", result);
				break;
			}
			case 4:{
				result = (int) numberA / numberB;
				printf ("Result: %i", result);
			break;
			}
			default: printf ("Wrong choice");
	}
}
}
void robotsDirection (int direction, char cardinalDirection){
	/*Case10. Есть 2 переменные одна показывает направление движения, вторая сторону мира куда надо двигаться.
	Нужно определить конечное направление движения робота.*/
	switch (direction){
		case 1:{
			
				switch (cardinalDirection){
					case 'W':
					case 'w': {
						printf ("Left West");
						break;
					}
					case 'E':
					case 'e': {
						printf ("Left East");
						break;
					}
					case 'N':
					case 'n': {
						printf ("Left Nord");
						break;
					}
					case 'S':
					case 's': {
						printf ("Left South");
						break;
					}
				}
				break;
			}
		case 2:{
				switch (cardinalDirection){
					case 'W':
					case 'w': {
						printf ("Right West");
						break;
					}
					case 'E':
					case 'e': {
						printf ("Right East");
						break;
					}
					case 'N':
					case 'n': {
						printf ("Right Nord");
						break;
					}
					case 'S':
					case 's': {
						printf ("Right South");
						break;
					}
					
				}
				break;
				}
			
		default: {
				 switch (cardinalDirection){
					case 'W':
					case 'w': {
						printf ("Forward West");
						break;
					}
					case 'E':
					case 'e': {
						printf ("Forward East");
						break;
					}
					case 'N':
					case 'n': {
						printf ("Forward Nord");
						break;
					}
					case 'S':
					case 's': {
						printf ("Forward South");
						break;
					}
				}
					break;
				}			
	}
	
}

int main(){
	//tasksWithMonths();
//	smallCalc();
	int direction = 1;
	char cardinalDirection;
	printf ( "Cardinal Direction(W, E, N, S):" );
	scanf ("%c",  &cardinalDirection);
	printf ( "Enter direction (0-2): " );
	scanf ("%i",  &direction);
	robotsDirection (direction, cardinalDirection);
	getch ();
	return 0;
}
