#include <stdio.h>

main ()
{
	int month;
	printf ("Enter month: ");
	scanf ("%i", &month);
	switch (month)
	{
		case 1: printf ("Winter");
		break;
		case 2: printf ("Winter");
		break;
		case 3: printf ("Spring");
		break;
		case 4: printf ("Spring");
		break;
		case 5: printf ("Spring");
		break;
		case 6: printf ("Summer");
		break;
		case 7: printf ("Summer");
		break;
		case 8: printf ("Summer");
		break;
		case 9: printf ("autumn");
		break;
		case 10: printf ("autumn");
		break;
		case 11: printf ("autumn");
		break;
		case 12: printf ("Winter");
		break;
		default: printf ("Wrong month");
		break;
	}
	getchar();

}
