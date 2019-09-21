#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


void PositiveNegative (int num){
	int result = num * num;
}
int main(){
	srand (time(NULL)); // говорить те, що кожен запуск програми відбувається з нульовим часом
	int number;
	printf ("Enter number: ");
	number =  rand ()%100;// верню границю пишемо після відсотки тоді буде обмеження
	// для рандомного мінусового 1000 - number%1001 ( додатнє число в 2 рази більше ніж мінусове)
	PositiveNegative (number);
	getchar ();
	return 0;
}
