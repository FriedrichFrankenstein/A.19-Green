#include <stdio.h>
#include <conio.h>
//#include <windows.h>

int main()
{
	//SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    
    unsigned char c;
    int n;
    
    printf("Input direction: \nN - north; \nW - west; \nS - south; \nE - east. \n");
    scanf("%c", &c);
    //c = getch();
    printf("Input command: \n0 - keep going; \n1 - turn left; \n2 - turn right \n");
    scanf("%i", &n);
    //n = getch();
    switch (c)
    {
    	case 'n': printf("Move north and "); break;
    	case 'w': printf("Move west and "); break;
    	case 's': printf("Move south and "); break;
    	case 'e': printf("Move east and "); break;
    	default: printf("Wrong direction");
	}
	switch (n)
	{
		case 0: printf("keep going!"); break;
		case 1: printf("turn left!"); break;
		case 2: printf("turn left!"); break;
		default: printf("Wrong action");
	}
    getch();
    return 0;
}
