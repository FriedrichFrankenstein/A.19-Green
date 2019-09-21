#include <stdio.h>

main ()
{
	int number;
	printf("Enter number day of week:  ");
	scanf ("%i", &number);
	switch (number){
		case 1: printf ("Montag");
		break;
		case 2: printf ("Dienstag");
		break;
		case 3: printf ("Mittwoch");
		break;
		case 4: printf ("Donnastag");
		break;
		case 5: printf ("Freitag");
		break;
		case 6: printf ("Samstag");
		break;
		case 7: printf ("Sontag");
		break;
	}
		getch ();
}
