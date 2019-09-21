#include <stdio.h>
#include <conio.h>
#include <math.h>

void whichYear (int year){
	int work = year % 12;
	switch (work){
		case 1:{
		 printf ("Chicken");
				break;}
		case 2:{
		 printf ("Dog");
				break;}
		case 3:{
		 printf ("Pig");
				break;}
		case 4:{
		 printf ("Rat");
				break;}
		case 5:{
		 printf ("cow");
				break;}
		case 6:{
		 printf ("tiger");
				break;}
		case 7:{
		 printf ("hare");
				break;}
		case 8:{
		 printf ("Dragon");
				break;}
		case 9:{
		 printf ("Snake");
				break;}
		case 10:{
		 printf ("Horse");
				break;}
		case 11:{
		 printf ("Sheep");
				break;}
		case 12:{
		 printf ("Monkey");
				break;}
		default: printf ("Wrong number!");
		
	}
}

int main ()
{
	int year;
	printf ("Enter year: ");
	scanf ("%i", &year);
	whichYear (year);
	getchar();
	return 0;
}
