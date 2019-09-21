#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — фе-
враль и т. д.). Вывести название соответствующего времени года («зима»,
«весна», «лето», «осень»)*/

void definitionSeasons(int manth)
{
    printf("\nEnter manth(1-12) ");
    scanf("%i", &manth);
    printf("It is ");
    switch(manth){
        case 12: printf("winter\n");
                            break;
        case 1: printf("winter\n");
                            break;
        case 2: printf("winter\n");
                            break;
        case 3 ... 5: printf("spring\n");
                            break;
        case 6 ... 8: printf("summer\n");
                    break;
        case 9 ... 11: printf("autumn\n");
                            break;
        default : printf("incorrect");
        return 0;
    }
}

/*Дано целое число в диапазоне 20–69, определяющее возраст (в годах).
Вывести строку-описание указанного возраста, обеспечив правильное со-
гласование числа со словом «год», например: 20 — «двадцать лет», 32 —
«тридцать два года», 41 — «сорок один год».*/

void definitionAgo(int number)
{
	printf("\nEnter age(20-69)-");
	scanf("%i", &number);
	switch(number/10){
		case 2: printf("двадцять");
							break;
		case 3: printf("тридцять");
							break;
		case 4: printf("сорок");
							break;
		case 5: printf("пятдесят");
							break;
		case 6: printf("шистдесят");
							break;
		default: printf("incorect");
		}
		switch(number%10)
		{
		case 1: printf(" один");
						break;
		case 2: printf(" два");
						break;
		case 3: printf(" три");
						break;				
		case 4: printf(" чотири");
						break;				
		case 5: printf(" пять");
						break;				
		case 6: printf(" шесть");
						break;				
		case 7: printf(" семь");
						break;				
		case 8: printf(" восем");
						break;				
		case 9: printf(" девять");
						break;				
		}
		switch(number%10)
		{
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf(" лет\n");
						break;
			case 1: printf(" год\n");
						break;
			case 2:
			case 3:
			case 4:printf(" года\n");
						break;
		}
		return 0;
}

/*В восточном календаре принят 60-летний цикл, состоящий из 12-
летних подциклов, обозначаемых названиями цвета: зеленый, красный,
желтый, белый и черный. В каждом подцикле годы носят названия живот-
ных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны,
курицы, собаки и свиньи. По номеру года определить его название, если
1984 год — начало цикла: «год зеленой крысы»*/

void calendarChinese (int year)
{
    printf("\nEnter year ");
    scanf("%i", &year);
    printf("Рiк  ");
    switch(year%12){
        case 4: printf("пацюк");
                            break;
        case 5: printf("корови");
                            break;
        case 6: printf("тигра");
                            break;
        case 7: printf("зайця");
                            break;
        case 8: printf("дракона");
                    break;
        case 9: printf("змiї");
                            break;
        case 10: printf("коня");
                            break;
        case 11: printf("вiвці");
                            break;
        case 12: printf("мавпи");
                            break;
        case 1: printf("курки");
                            break;
        case 2: printf("собаки");
                    break;
        case 3: printf("свині");
        			break;
        }
        switch(year%10){
           	case 4 ... 5:printf(" зелений\n");
        					break;
           	case 6 ... 7:printf(" красний\n");
        					break;
        	case 8 ... 9:printf(" жовтий\n");
        					break;
        	case 0 ... 1:printf(" білий\n");
        					break;
           	case 2 ... 3:printf(" чорний\n");
        					break;
		}
    return 0;
}

/*Дано целое число в диапазоне 10-40, определяющее количество учебных заданий по некоторой теме. 
Вывести строку-описание указанногоколичества заданий, обеспечив правильное согласование числа 
со словами "учебное задание", например: 18 - "восемнадцать учебных заданий",23 - "двадцать три 
учебных задания", 31 - "тридцать одно учебное задание"*/

void numberInstitutions(int num)
{
	printf("\nВведіть кількість(10-40)-");
	scanf("%i", &num);
		if(num>=10 && num<20)
		{
			switch(num)
			{
				case 10: printf("десять");
								break;
				case 11: printf("одинадцать");
								break;
				case 12: printf("дванадцать");
								break;
				case 13: printf("тринадцать");
								break;
				case 14: printf("чотирнадцать");
								break;
				case 15: printf("пятнадцать");
								break;
				case 16: printf("шестнадцать");
								break;
				case 17: printf("семнадцать");
								break;
				case 18: printf("восемнадцать");
								break;
				case 19: printf("девятнадцать");
								break;							
			}
		}
		else{
		switch(num/10)
		{
		case 2: printf("двадцять");
							break;
		case 3: printf("тридцять");
							break;
		case 4: printf("сорок");
							break;
		default: printf("incorect");
		
		}	
		switch(num%10)
		{
		case 1: printf(" одно");
						break;
		case 2: printf(" два");
						break;
		case 3: printf(" три");
						break;				
		case 4: printf(" четири");
						break;				
		case 5: printf(" пять");
						break;				
		case 6: printf(" шесть");
						break;				
		case 7: printf(" сем");
						break;				
		case 8: printf(" восем");
						break;				
		case 9: printf(" девять");
						break;				
		}
	}
		switch(num)
		{
			case 10 ... 20:
			case 22 ... 30:
			case 32 ... 40: printf(" учебных заданий\n");
										break;
			case 21:
			case 31: printf(" учебное задание\n");
										break;
		}
	return 0;
}

/*Локатор ориентирован на одну из сторон света ("С" - север, "З" - запад, "Ю" - юг, "В" - восток)
и может принимать три цифровые команды поворота: 1 - поворот налево, -1 - поворот направо, 2 - поворот на 180. 
Дан символ C - исходная ориентация локатора и целые числа N1 и N2 - две посланные команды. Вывести ориентацию локатора после выполнения этих команд*/

int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char ch;
	printf("Direction(n,e,w,s)-");
	scanf("%c",&ch);
	int num1, num2;
	printf("Comand 1(-1,0,1) = ");
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
printf("Comand 2(-1,1,0) = \n");
scanf("%i", &num2);
printf("The locator is pointing to the side-");
	switch(ch){
		case 'n':
			switch(num2){
				case -1: printf("east\n");
								break;
				case  1: printf("west\n");
								break;
				case  0: printf("south\n");
								break;
				default: printf("incorrect");
			}
		break;
		case 'e':
			switch(num2){
				case -1: printf("south\n");
								break;
				case  1: printf("north\n");
								break;
				case  0: printf("west\n");
								break;
				default: printf("incorrect");
			}
		break;
		case 's':
			switch(num2){
				case -1: printf("west\n");
								break;
				case  1: printf("east\n");
								break;
				case  0: printf("north\n");
								break;
				default: printf("incorrect");
			}
		break;
		case 'w':
			switch(num2){
				case -1: printf("north\n");
								break;
				case  1: printf("south\n");
								break;
				case  0: printf("eath\n");
								break;
				default:printf("incorrect");
			}
		break;
	}
    
	int manth;
	definitionSeasons(manth);
	int number;
	definitionAgo(number);
	int year;
	calendarChinese (year);
	int num;
	numberInstitutions(num);
	return 0;
}
