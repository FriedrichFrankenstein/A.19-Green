#include <stdio.h>
#include <math.h>
main ()
{
	//������� ���'��� ��� �������, �������, �������� �����
	float side, S;
	//������ ����� ���
	printf ("Side ");
	scanf ("%f", &side);
	//������� �����
	S = pow (side, 2);
	//��������� ����������
	printf ("S = %g", S);
	getch();
}
