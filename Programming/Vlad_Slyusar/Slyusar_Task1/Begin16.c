// ���� ���������� �1 � �2 �� �������� ���. ����� ����� ���������� ����� ���� �� ������.
#include <stdio.h>
#include <conio.h>
#include <math.h>
 int main (){
 	
 	
 	float x1, x2, range;
 	printf ("Enter 2 coordinates: ");
 	scanf ("%f%f", &x1, &x2);
 	range = fabs (x2 - x1);
 	printf ("Distance between x1 and x2: %g", range);
 	getchar ();
 	return 0; 	
 	
 	
 }
