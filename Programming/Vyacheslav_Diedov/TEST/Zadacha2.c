#include <stdio.h>

main()
{
	// ������� ���'��� ��� �������, ��������  � �������� �����
	//int- ��� ����;
	//float- ������ �����;
	float side, Perim;
	// ������ ����� ���
	//side=12;
	//printf-������� �� �����
	printf("����i�� ���i");
	//scanf("%i",&side);
	scanf("%f",&side);
	// ������� �����
	Perim=side*side;
	// ��������� ����������
	//printf("A=%i\nP=4*A=4*%i=%i", side,side,Perim);
	//printf("A=%f\nP=4*A=4*%f=%f", side,side,Perim);
	printf("A=%g\nP=A*A=%g*%g=%g", side,side,Perim);
	/* %g ��� ����� ��� ���� ���� ���� */
	getch();
	
}
