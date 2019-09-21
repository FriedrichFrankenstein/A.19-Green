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

void smallCalc(){
	/*Дано число 1-4 которое отвечает за математическое действие.
	Также дано 2 числа. Нужно произвести соответствующее мат. действие
	и вывести результат на экран.*/
	int mathAction, numberA, numberB, result;
	printf (" Сhoose math action (1=+,2=-,3=*,4=/): ");
	scanf ("%i", &mathAction);
	printf ("Enter 2 numbers: ");
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
void robotsDirection (int direction){
	/*Case10. Есть переменная которая показывает направление движения робота.
	Нужно определить конечное направление движения робота.*/
	switch (direction){
		case 1:{
				printf ("Robot's Direction is East\n");
				break;
				}
		case 2:{
				printf ("Robot's  Direction is West\n");
				break;
				break;
				}
			
		default: {
				printf ("Robot's  Direction is North\n");
					break;
				}			
	}
	
}
void locatorsDirection (int direction, int direction2) {
	/*Case11. Есть 2 переменные которые показывают направление движения
	Нужно определить конечное направление движения локатора.*/
	switch (direction){
		case 1:{
				printf ("Locator's Direction #1 is East\n");
				switch (direction2) {
					case 0:{
						printf ("Locator's Direction is West\n");
						break;
					}
					case 1: {
						printf ("Locator's Direction is South\n");
						break;
					}
					case 2: {
						printf ("Locator's Direction is North\n");
						break;
					}
				}
				break;
				}
		case 2:{
				printf ("Locator's Direction #1 is West\n");
					switch (direction2){
					case 0:{
						printf ("Locator's Direction is East\n");
						break;
					}
					case 1: {
						printf ("Locator's Direction is North\n");
						break;
					}
					case 2: {
						printf ("Locator's Direction is South\n");
						break;
					}
				}
				break;
				}
			
		default: {
				printf ("Locator's Direction #1 is South\n");
					switch (direction2){
					case 0:{
						printf ("Locator's Direction is North\n");
						break;
					}
					case 1: {
						printf ("Locator's Direction is East\n");
						break;
					}
					case 2: {
						printf ("Locator's Direction is West\n");
						break;
					}
				}
					break;
				}			
	}
}
void tasksWithMonths (){
	int number;
	printf ("Enter number of month: ");
	scanf ("%i", &number);
	whichSeason (number);
	howMuchDaysInTheMonth (number);
}
void diractionTasks (){
	int direction, direction2;
	printf ( "Enter 2 directions (0-2): " );
	/* For robor 0 = forward, 1 - right, 2 - left;
	For locator 0 = 180, 1 - right, 2 -left; */
	scanf ("%i%i",  &direction, &direction2);
	robotsDirection (direction);
	locatorsDirection (direction, direction2);
	}
int main(){
	int taskNumber;
	for ( ; ; ){
	printf ("\nWhich Tasks do you want to check?\n1 - tasks With Months\n2 - smallCalc\n3 - diractionTasks\nEnter number (4 to exit): ");
	scanf ("%i", &taskNumber);
	if (taskNumber >= 4){
		break;
	}
	else {
	switch (taskNumber){
		case 1:{
			tasksWithMonths();
			break;
		}
		case 2: {
			smallCalc();
			break;
		}
		case 3: {
			diractionTasks();
			break;
		}
	}
}
	
}
	getch ();
	return 0;
}
