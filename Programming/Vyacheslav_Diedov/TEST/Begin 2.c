#include <conio.h>
#include <stdio.h>

main()
{
	char c1;
	printf("\nвведіть першу літеру:");
	scanf("%c", &c1); 
	switch (c1) 
	{ 	
		case 'а':
		case 'А':
		          printf("\nАвстралія");
				  printf("\nАлбанія");
		          break;
		case 'б': printf("\nБолгарія"); break; 
		case 'в': printf("\nВенесула"); break; 
		default: printf("\nВаріанти відсутні");
	}
}
