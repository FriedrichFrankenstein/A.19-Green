#include <stdio.h>
#include <conio.h>
#include <math.h>
void maxNumber () {
	/* If 11. Есть два числа, если они не равны оба числа должны стать
	 большим из них, если равны, то оба стоют ноль.*/
	int A, B;
	printf ("Function name is maxNumber. Enter numbers: ");
	scanf ("%i%i", &A, &B);
	if ( A != B){
		A = B = fmax(A,B);
	}
	else {
		A = B = 0;
	}
	printf ("A = %i, B = %i", A, B);
}

void averageNumber (){
	/*If 13. Есть три числа. Надо вывести среднее, то что
	 будет между наибольшим и наименьшим.*/
	 	int A, B, C, average;
	printf ("Function name is averageNumber. Enter 3 numbers: ");
	scanf ("%i%i%i", &A, &B, &C);
	if ( A > B && A > C){
		if (B > C){
			 average = B;
		}
		else {
			 average = C;
		}
	}
	else if (B > C && B > A) { 
		if (A > C){
			 average = A;
		}
		else {
			 average = C;
		}
	}
	else {
		if ( B > A){
			 average = B;
		}
		else {
			 average = A;
		}
		}
			printf ("Average = %i",  average);

	 
}
void sumOfTwoBiggerNumber (){
	//If 15.  Есть три числа. Надо найти суму 2 больших чисел.
	int A, B, C, sumOfThem;
	printf ("Function name is sumOfTwoBiggerNumber. Enter 3 numbers: ");
	scanf ("%i%i%i", &A, &B, &C);
	if ( A > B && A > C){
		if (B > C){
			 sumOfThem = A + B;
		}
		else {
			 sumOfThem = A + C;
		}
	}
	else if (B > C && B > A) { 
		if (A > C){
			 sumOfThem = B + A;
		}
		else {
			 sumOfThem = B + C;
		}
	}
	else {
		if ( B > A){
			 sumOfThem = C + B;
		}
		else {
			 sumOfThem = C + A;
		}
		}
	printf ("Summ two numbers = %i", sumOfThem)	;
}
void functionNumberOne (){
	/* Есть х, надо значение функции f которая:
	если х <= 0 = -x
	if 0 < x < 2 = x^2
	if x >= 2 = 4 */
	float x;
	printf ("Function name is functionNumberOne. Enter value of x: ");
	scanf ("%f", &x);
	if ( x <= 0){
		x = -x;
	}
	else if ( 0 < x && x < 2){
		x = pow(x, 2);
	}
	else {
		x = 4;
	}
	printf ("f(x) = %g", x);
}
void functionNumberTwo () {
	/* Есть х, надо значение функции f которая:
	if x < 0 = 0
	if x = [0,1);[2,3) ... =1
	if x = [1,2);[3,4) ... = -1 */
	float x ;
	printf ("Function name is functionNumberTwo. Enter value of x: ");
	scanf ("%f", &x);
	int y = floor (x);
	if ( x < 0){
		x = 0;
	}
	else if ( y % 2 == 0){
		x = 1;
	}
	else if ( y % 2 != 0){
		x = -1;
	}
	printf ("x = %g", x); 
}

	int main(){
	int numberOfFunction;
//	printf ("Which function do you want to check? Enter number: \n");
//	scanf ("%i", &numberOfFunction);
	for ( ; ; ){
	printf ("\nWhich function do you want to check? Enter number (6 to exit): ");
	scanf ("%i", &numberOfFunction);
	if (numberOfFunction >= 6){
		break;
	}
	else {
	
	switch (numberOfFunction){
		case 1: {
			maxNumber();
			break;
		}
		case 2: {
			averageNumber();
			break;
		}
		case 3: {
			sumOfTwoBiggerNumber ();
			break;
		}
		case 4: {
			functionNumberOne();
			break;
		}
		case 5: {
			functionNumberTwo();
			break;
		};
		default : {
			printf ("This function doesn't exist");
			break;
		}
	}
	
}
}
	getch ();
	return 0;
}
