#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{    SetConsoleCP(1251);
      SetConsoleOutputCP(1251);
    int year;
    printf("Enter year ");
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
           	case 4 ... 5:printf(" �������");
        					break;
           	case 6 ... 7:printf(" �������");
        					break;
        	case 8 ... 9:printf(" ������");
        					break;
        	case 0 ... 1:printf(" ����");
        					break;
           	case 2 ... 3:printf(" ������");
        					break;
		}
    getch();
    return 0;
}	
