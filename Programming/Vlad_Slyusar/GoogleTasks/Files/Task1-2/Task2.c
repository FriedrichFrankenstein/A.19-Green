#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define N 10		// ��������� ������ (������� ����� � ����)

int main()
{
    int i;
    int *a = malloc (4);
    FILE *fp; 		// �������� �� ����
    fp = fopen ( "input.dat", "r" ); // ��������� ���� � ����� �������
    if ( fp == NULL )   		// ���� ���� �� ���� -
    {
        printf ( "File doesn't exist" );
        getchar();
        return 0; 		// ����� � �������� (������� main())
    }
    for ( i = 0; ; i ++ ){	// ���� ���� �������� ������ -
         a = realloc(a, _msize(a) + 4);
        if ( EOF == fscanf ( fp, "%d", &a[i] ) ) // �� ���� ������ � ����� ����� � �������� � �����, ���� ����������� �� EOF (����� �����) ��� �������� ��� (�� ���������� ������� %d, �������� ������� fscanf() ������� ������� ����� �������� ����� 0) -
        {
            //printf ( "Date is not enough" );
            break;	// �������� � ����� (��������� �������)
        }

    }
    int M = i, b[i/2], j = 0;
    fclose ( fp ); 			// ��������� ����
    for ( i = 0; i < M; i += 2, j++ )	// ����������� ��� ������
        b[j] = a[i] + a[i+1] ;
    fp = fopen ( "output.dat", "w" ); // ��������� �����  ���� � ����� ������
    for ( i = 0; i < j; i ++ ) 		// �� ���� �������� � ����� �� �������� ������
        fprintf ( fp, "%d\n", b[i] ); // � �������� (�� ��������� \n)
    fclose ( fp );			// ��������� �������� ����
    free(a);
    return 0;
}
