#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int** getMem ( int M, int N ); // �������� �������� ���'��
void inpMatr ( int** a, int n, int m ); // �������� � �����
void outMatr ( int** a, int M1, int N ); // ��������� �� �����
int** chngMem ( int **a, int M, int originN ); // ���� ������ � ��������� ���. ���'��

int main()
{
    int i, j;			// �i�������� ����� � ���������
    int** a;			// �������� �� ���������� �����
    int* p, *p1;		// ������� ��������� �� ������ ������ � �������
    int M, N;
    printf ( "Input num of rows: M=" );
    scanf ( "%d", &M );
    printf ( "Input num of cols: N=" );
    scanf ( "%d", &N );
    a = getMem ( M, N ); // �������� ����������� ������
   // getch();
    inpMatr ( a, M, N ); // �������� ������
    outMatr ( a, M, N ); // ��������� �� �����
    for ( i = M - 1; i >= 1; i-- ) // ����� ������ � ���������� �� ������� �����
    {
        p = * ( a + i ); // �������� - �� ������ ������� �-�� �����
        p1 = * ( a + i - 1 ); // ������ �������� - �� ������ ������� ��������� �����
        for ( j = 1; j <= N; j++ ) // ���������� �������� � ������
        {
            ( *p++ ) *= *p1++; // ������������ ��������� - ����������� ����� �������� ������ ���������, ���� ��������� ������� �� ������ ������
        }
    }
    outMatr ( a, M, N );
    a = chngMem ( a, M, N ); // ���� ������ � ��������� ���'�� �� �����
}

int** chngMem ( int **a, int M1, int originN )
{
    int i, N, M, j;
    printf ( "New number of rows:" );
    scanf ( "%i", &M ); // ������ ���� ������� �����
    a = ( int** ) realloc ( a, M * sizeof ( int* ) ); // ����������� ���'��� �� ���� ������� �����
    int *lengthArray = calloc(M, sizeof(int));
    for ( i = 0; i < M; i ++ )  // ����� ������ ������� �����
    {
        printf ( "New size of row %i:", i );
        scanf ( "%i", &N ); // �������� ���� ������� ����� � �����
        *(lengthArray + i) = N;
        if ( i < M1 ) // ���� ����� ����� � ����� ��������� ������� -
        {
            *(a + i) = ( int* ) realloc ( *(a + i), N * sizeof ( int ) );	// ����������� ���'��� �� ����� �̲��
        }
        else   // ������ - ������� �������� ���'��� �� �����
        {
            *(a + i) = ( int* ) calloc ( N , sizeof ( int ) );
        }
      //  printf ( "a[%i]=%p\n", i, *a++ ); // �������� �������� ������ ����� �� �����
        // �++ - ��������� �������� ������ ����� �� �������� ������, � ��� ����������� ������ ���������� �����
    }
    for ( i = 0; i < M; i ++ ){
            if (i + 1 > M1){
                originN = 0;
            }
        for (j = originN; j < *(lengthArray +i); j ++ ){
            printf ( "a[%d][%d]=", i, j );
            scanf ( "%d", * ( a + i ) + j );
        }
    }
     printf ( "Matrix a: \n" );
    for ( i = 0; i < M; i ++ ){
        for (j = 0; j < *(lengthArray +i); j ++ ){
            printf ( "%d ", * ( * ( a + i ) + j ) );
        }
        printf("\n");
    }

  //  a -= M; // �� ��������� ������ ������ ��������� - ��������� "��������" �������� �� ����� �� �������� ������ (�� �����. ������ 0-�� �����)
    return a; // ��������� ������� ���� ������ ������ ���������
}

int** getMem ( int M, int N )
{
    int **a;
    int i;
    a = ( int** ) malloc ( M * sizeof ( int* ) ); // ����. ���'��� �� ����� ���������
    for ( i = 0; i < M; i ++ )
    {
        *(a + i) = ( int* ) malloc ( N * sizeof ( int ) );	 // � �� ����� ����� ������
        //printf ( "a[%i]=%p\n", i, *a++ ); // �������� ������ - �� �����, �++ - �������� �� ����. ������
    }
    //a -= M; // ���� �������� ����� ��� ����� - �������� �� ��������� �������
    return a; // ��������� ������ � ���� ������� �������
}

void outMatr ( int** a, int M, int N )
{
    int i, j;
    printf ( "Matrix a: \n" );
    for ( i = 0; i < M; i ++ )
    {
        for ( j = 0; j < N; j ++ ){ // ����� �����
            printf ( "%d ", * ( * ( a + i ) + j ) ); // �������� �������������, ������� ���������� �� �����, �������� ��������� �� 1 ������ ������
        }
            printf("\n");
    }
    printf("\n");
}

void inpMatr ( int** a, int n, int m )
{
    int i, j;
    for ( i = 0; i < n; i ++ )
    {
        for ( j = 0; j < m; j ++ )
        {
            printf ( "a[%d][%d]=", i, j );
            scanf ( "%d", * ( a + i ) + j );
        }
    }
}
