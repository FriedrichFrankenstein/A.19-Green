#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	printf("direction-");
	scanf("%c",&ch);
	int num1, num2;
	printf("Comand 1 = ");
	scanf("%i",&num1);
	switch(ch){
		case 'n':
			switch(num1){
				case -1: ch='e';
						break;
				case  1: ch='w';
						break;
				case  0: ch='s';
						break;
				default: printf("incorrect");
			}
		break;
		case 'e':
			switch(num1){
				case -1: ch='s';
						break;
				case  1: ch='n';
						break;
				case  0: ch='w';
						break;
				default: printf("incorrect");
			}
		break;
		case 's':
			switch(num1){
				case -1: ch='w';
						break;
				case  1: ch='e';
						break;
				case  0: ch='n';
						break;
				default: printf("incorrect");
			}
		break;
		case 'w':
			switch(num1){
				case -1: ch='n';
						break;
				case  1: ch='s';
						break;
				case  0: ch='e';
						break;
				default:printf("incorrect");
			}
		break;
	}
printf("Comand 2 = ");
scanf("%i", &num2);
	switch(ch){
		case 'n':
			switch(num2){
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
			switch(num2){
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
			switch(num2){
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
			switch(num2){
				case -1: printf("north");
								break;
				case  1: printf("south");
								break;
				case  0: printf("eath");
								break;
				default:printf("incorrect");
			}
		break;
	}
	getch();
	return 0;
}
