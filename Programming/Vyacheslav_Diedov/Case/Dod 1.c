#include <stdio.h>
#include <conio.h>

int main()
{
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
        case 10: printf("�i��");
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
    getch();
    return 0;
}	
