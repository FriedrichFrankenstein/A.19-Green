#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("Input year \n");
    int year;
    scanf("%i", &year);
    /*
    switch(year%60)
    	case 4 ...15: printf("green ); break;
    	case 16 ... 27: printf("red "); break;
    	case 28 ... 39: printf("yellow "); break;
    	case 40 ... 51: printf("white "); break;
    	case 52 ... 59: 
		case 0 ... 3: printf("black "); break;
    switch(year%12)
    	case 4: printf("rat"); break;
    	case 5: printf("caw"); break;
    	...
    	case 11: printf(""); break;
    	case 0: printf(""); break;
    	case 1: printf("chiken"); break;
    	...
    	case 3: printf("pig"); break;
    */
    //int cycle = year % 60; 
    	int color = (year - 4) % 5;
	int animal = (year - 4) % 12;
	switch(color)
	{
		case 0: printf("Year of green "); break;
		case 1: printf("Year of red "); break;
		case 2: printf("Year of yellow "); break;
		case 3: printf("Year of white "); break;
		case 4: printf("Year of black "); break;
	}
		switch(animal)
	{

		case 0: printf("rat"); break;
		case 1: printf("cow"); break;
		case 2: printf("tiger"); break;
		case 3: printf("hare"); break;
		case 4: printf("dragon"); break;
		case 5: printf("horse"); break;
		case 6: printf("sheep"); break;
		case 7: printf("monkey"); break;
		case 8: printf("pig"); break;
		case 9: printf("chiken"); break;
		case 10: printf("dog"); break;
		case 11: printf("pig"); break;
	}
	getch();	
}
