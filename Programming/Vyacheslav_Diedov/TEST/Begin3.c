#include <stdio.h>

main()
{
	// ������� ���'��� ��� �������, ��������  � �������� �����
	int side, Perim;
	// ������ ����� ���
	//side=12;
	printf("input side (integer!!!)");
	scanf("%i",&side);
	// ������� �����
	Perim=4*side;
	// ��������� ����������
	printf("A=%i\nP=4*A=4*%i=%i", side,side,Perim);
	getchar();
	
}
