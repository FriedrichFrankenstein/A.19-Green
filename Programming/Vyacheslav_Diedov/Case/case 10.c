#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	printf("direction-");
	scanf("%c",&ch);
	int num1;
	printf("Comand = ");
	scanf("%i",&num1);
	printf("You go to ");
	switch(ch){
		case 'n':
			switch(num1){
				case -1: printf("east");
								break;
				case  1: printf("west");
								break;
				case  0: printf("south");
								break;
				default: printf("incorrect");
			}
		break;
		case 'e':
			switch(num1){
				case -1: printf("south");
								break;
				case  1: printf("north");
								break;
				case  0: printf("west");
								break;
				default: printf("incorrect");
			}
		break;
		case 's':
			switch(num1){
				case -1: printf("west");
								break;
				case  1: printf("east");
								break;
				case  0: printf("north");
								break;
				default: printf("incorrect");
			}
		break;
		case 'w':
			switch(num1){
				case -1: printf("north");
								break;
				case  1: printf("south");
								break;
				case  0: printf("eath");
								break;
				default:printf("incorrect");
			}
	}
	getch();
	return 0;
}
