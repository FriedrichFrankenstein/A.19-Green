#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("Enter age-");
	scanf("%i", &num);
	switch(num/10){
		case 2: printf("��������");
							break;
		case 3: printf("��������");
							break;
		case 4: printf("�����");
							break;
		case 5: printf("��������'");
							break;
		case 6: printf("���������");
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
		case 7: printf(" ����");
						break;				
		case 8: printf(" �����");
						break;				
		case 9: printf(" ������");
						break;				
		}
		switch(num%10)
		{
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf(" ���");
						break;
			case 1: printf(" ���");
						break;
			case 2:
			case 3:
			case 4:printf(" ����");
						break;
		}
	getch();
	return 0;
}
