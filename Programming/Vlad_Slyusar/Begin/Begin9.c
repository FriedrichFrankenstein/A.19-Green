#include <stdio.h>
#include <math.h>
main ()
{
	//������� ���'��� ��� �������, �������, �������� �����
	float  sideA, sideB, average_value;
	//������ ����� ���
	printf ("Enter 2 sides(not negative numbers): ");
	scanf ("%f%f", &sideA, &sideB);
		if (sideA<0 || sideB<0){
		printf ("Negative number");
	}
	else {
	//������� �����
	average_value=sqrt(sideA*sideB);
	//��������� ����������
	printf ("Average value=%g", average_value);
	
}
	getch();
}
