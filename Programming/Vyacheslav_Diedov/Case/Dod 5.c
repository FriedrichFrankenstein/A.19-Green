#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Enter number ");
    scanf("%i", &number);
    if(number==0){
    	printf("����");
	}else
	{
		switch(number)
		{
			case 10 ... 19: 
				switch(number)
				{
				case 10:printf("������");
								break;
				case 11:printf("����������");
								break;
				case 12:printf("����������");
								break;
				case 13:printf("����������");
								break;
				case 14:printf("������������");
								break;
				case 15:printf("����������");
								break;
				case 16:printf("�����������");
								break;
				case 17:printf("���������");
								break;
				case 18:printf("����������");
								break;							
				case 19:printf("������������");
								break;
			}	
		}
		switch(number/10)
		{
			case 2: printf("�������� ");
								break;
			case 3: printf("�������� ");
								break;
			case 4: printf("����� ");
								break;
			case 5: printf("�'������� ");
								break;
			case 6: printf("��������� ");
								break;
			case 7: printf("�������� ");
								break;			
			case 8: printf("�������� ");
								break;
			case 9: printf("���'������ ");
								break;
		}
		switch(number%10)
		{
			case 1: printf("����");
							break;
			case 2: printf("���");
							break;					
			case 3: printf("���");
							break;					
			case 4: printf("������");
							break;	
			case 5: printf("�'���");
							break;	
			case 6: printf("�����");
							break;	
			case 7: printf("��");
							break;	
			case 8: printf("���");
							break;	
			case 9: printf("���'���");
							break;							
		}
	}
    getch();
    return 0;
}
