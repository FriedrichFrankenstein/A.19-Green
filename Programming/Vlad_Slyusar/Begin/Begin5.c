#include <stdio.h>
#include <math.h>
main ()
{
	//������� ���'��� ��� �������, �������, �������� �����
	float side, S, V;
	//������ ����� ���
	printf ("Enter side: ");
	scanf ("%f", &side);
	//������� �����	
	S=6*pow(side, 2);
	V=pow(side, 3);
	//��������� ����������
	printf ("S=%g\nV=%g", S, V);
	getch();

}
