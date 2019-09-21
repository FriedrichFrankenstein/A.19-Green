#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*��� ����� ������ � ����� ����� � ��������� 1�12 (1 � ������, 2 � ��-
����� � �. �.). ������� �������� ���������������� ������� ���� (�����,
������, �����, �������)*/

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

/*���� ����� ����� � ��������� 20�69, ������������ ������� (� �����).
������� ������-�������� ���������� ��������, ��������� ���������� ��-
���������� ����� �� ������ ����, ��������: 20 � ��������� ���, 32 �
��������� ��� ����, 41 � ������ ���� ���.*/

void definitionAgo(int number)
{
	printf("\nEnter age(20-69)-");
	scanf("%i", &number);
	switch(number/10){
		case 2: printf("��������");
							break;
		case 3: printf("��������");
							break;
		case 4: printf("�����");
							break;
		case 5: printf("��������");
							break;
		case 6: printf("���������");
							break;
		default: printf("incorect");
		}
		switch(number%10)
		{
		case 1: printf(" ����");
						break;
		case 2: printf(" ���");
						break;
		case 3: printf(" ���");
						break;				
		case 4: printf(" ������");
						break;				
		case 5: printf(" ����");
						break;				
		case 6: printf(" �����");
						break;				
		case 7: printf(" ����");
						break;				
		case 8: printf(" �����");
						break;				
		case 9: printf(" ������");
						break;				
		}
		switch(number%10)
		{
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf(" ���\n");
						break;
			case 1: printf(" ���\n");
						break;
			case 2:
			case 3:
			case 4:printf(" ����\n");
						break;
		}
		return 0;
}

/*� ��������� ��������� ������ 60-������ ����, ��������� �� 12-
������ ���������, ������������ ���������� �����: �������, �������,
������, ����� � ������. � ������ �������� ���� ����� �������� �����-
���: �����, ������, �����, �����, �������, ����, ������, ����, ��������,
������, ������ � ������. �� ������ ���� ���������� ��� ��������, ����
1984 ��� � ������ �����: ���� ������� ������*/

void calendarChinese (int year)
{
    printf("\nEnter year ");
    scanf("%i", &year);
    printf("�i�  ");
    switch(year%12){
        case 4: printf("�����");
                            break;
        case 5: printf("������");
                            break;
        case 6: printf("�����");
                            break;
        case 7: printf("�����");
                            break;
        case 8: printf("�������");
                    break;
        case 9: printf("��i�");
                            break;
        case 10: printf("����");
                            break;
        case 11: printf("�i���");
                            break;
        case 12: printf("�����");
                            break;
        case 1: printf("�����");
                            break;
        case 2: printf("������");
                    break;
        case 3: printf("����");
        			break;
        }
        switch(year%10){
           	case 4 ... 5:printf(" �������\n");
        					break;
           	case 6 ... 7:printf(" �������\n");
        					break;
        	case 8 ... 9:printf(" ������\n");
        					break;
        	case 0 ... 1:printf(" ����\n");
        					break;
           	case 2 ... 3:printf(" ������\n");
        					break;
		}
    return 0;
}

/*���� ����� ����� � ��������� 10-40, ������������ ���������� ������� ������� �� ��������� ����. 
������� ������-�������� �������������������� �������, ��������� ���������� ������������ ����� 
�� ������� "������� �������", ��������: 18 - "������������ ������� �������",23 - "�������� ��� 
������� �������", 31 - "�������� ���� ������� �������"*/

void numberInstitutions(int num)
{
	printf("\n������ �������(10-40)-");
	scanf("%i", &num);
		if(num>=10 && num<20)
		{
			switch(num)
			{
				case 10: printf("������");
								break;
				case 11: printf("����������");
								break;
				case 12: printf("����������");
								break;
				case 13: printf("����������");
								break;
				case 14: printf("������������");
								break;
				case 15: printf("����������");
								break;
				case 16: printf("�����������");
								break;
				case 17: printf("����������");
								break;
				case 18: printf("������������");
								break;
				case 19: printf("������������");
								break;							
			}
		}
		else{
		switch(num/10)
		{
		case 2: printf("��������");
							break;
		case 3: printf("��������");
							break;
		case 4: printf("�����");
							break;
		default: printf("incorect");
		
		}	
		switch(num%10)
		{
		case 1: printf(" ����");
						break;
		case 2: printf(" ���");
						break;
		case 3: printf(" ���");
						break;				
		case 4: printf(" ������");
						break;				
		case 5: printf(" ����");
						break;				
		case 6: printf(" �����");
						break;				
		case 7: printf(" ���");
						break;				
		case 8: printf(" �����");
						break;				
		case 9: printf(" ������");
						break;				
		}
	}
		switch(num)
		{
			case 10 ... 20:
			case 22 ... 30:
			case 32 ... 40: printf(" ������� �������\n");
										break;
			case 21:
			case 31: printf(" ������� �������\n");
										break;
		}
	return 0;
}

/*������� ������������ �� ���� �� ������ ����� ("�" - �����, "�" - �����, "�" - ��, "�" - ������)
� ����� ��������� ��� �������� ������� ��������: 1 - ������� ������, -1 - ������� �������, 2 - ������� �� 180. 
��� ������ C - �������� ���������� �������� � ����� ����� N1 � N2 - ��� ��������� �������. ������� ���������� �������� ����� ���������� ���� ������*/

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
