#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


void PositiveNegative (int num){
	int result = num * num;
}
int main(){
	srand (time(NULL)); // �������� ��, �� ����� ������ �������� ���������� � �������� �����
	int number;
	printf ("Enter number: ");
	number =  rand ()%100;// ����� ������� ������ ���� ������� ��� ���� ���������
	// ��� ���������� ��������� 1000 - number%1001 ( ������ ����� � 2 ���� ����� �� �������)
	PositiveNegative (number);
	getchar ();
	return 0;
}
