#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("¬вед≥ть в≥к в д≥апазон≥ 20-69 ≥ натисн≥ть клав≥шу Enter \n");
    int age;
	scanf("%i", &age);
	int firstNum = age / 10;
	int secondNum = age % 10;
	switch(firstNum)
	{
		case 2: printf("ƒвадц€ть "); break;
		case 3: printf("“ридц€ть "); break;
		case 4: printf("—орок "); break;
		case 5: printf("ѕ'€тдес€т "); break;
		case 6: printf("Ў≥стдес€т "); break;
	}
		switch(secondNum)
	{
		case 0: printf("рок≥в"); break;
		case 1: printf("один р≥к"); break;
		case 2: printf("два роки"); break;
		case 3: printf("три роки"); break;
		case 4: printf("чотири роки"); break;
		case 5: printf("п'€ть рок≥в"); break;
		case 6: printf("ш≥сть рок≥в"); break;
		case 7: printf("с≥м рок≥в"); break;
		case 8: printf("в≥с≥м рок≥в"); break;
		case 9: printf("дев'€ть рок≥в"); break;
	}
	getch();	
}
