#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("������� ����������-");
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
				case 40: printf("�����");
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
			case 32 ... 40: printf(" ������� �������");
										break;
			case 21:
			case 31: printf(" ������� �������");
										break;
		}

	getch();
	return 0;
}
