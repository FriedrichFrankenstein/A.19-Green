#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    printf("¬вед≥ть р≥к \n");
    int year;
    scanf("%i", &year);
    int animal = (year - 4) % 12;
	printf("–≥к ");
	switch(animal)
	{
		case 0: printf("пацюка"); break;
		case 1: printf("корови"); break;
		case 2: printf("тигра"); break;
		case 3: printf("зайц€"); break;
		case 4: printf("дракона"); break;
		case 5: printf("зм≥€"); break;
		case 6: printf("кон€"); break;
		case 7: printf("в≥вц≥"); break;
		case 8: printf("мавпи"); break;
		case 9: printf("курки"); break;
		case 10: printf("собаки"); break;
		case 11: printf("свин≥"); break;
	}
	getch();
	return 0;
}
