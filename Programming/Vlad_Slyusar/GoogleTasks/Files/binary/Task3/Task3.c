#include <math.h>			//�������� ������������ �������
#include <stdio.h>
#include <conio.h>


int main()
{
    FILE* f; 			//�������� ����������
    int i, n = 10, k, flag = 0;
    char s[] = "String";
    float r;
    f = fopen ( "file_bin", "wb" ); //��������� �������� ���� � ������ file_bin
    //	��� ������ ����� (�������� �wb�)
    for ( i = 1; i <= n; i++ )
    {
        r = pow ( i, 1.0 / 3 );		//���������� �������� ������ � ����� �
        fwrite ( s, sizeof ( s ), 1, f ); //����� ����� "String" � ����
        fwrite ( &i, sizeof ( int ), 1, f ); //����� ������ ����� (����� �����) � ����
        fwrite ( &r, sizeof ( float ), 1, f ); //����� ������� ����� (����� �������) � ����
        printf ( "\n%s %d %f", s, i, r ); //����������� ���� �� �����
    }
    fclose ( f ); 				//�������� �����
    printf ( "\n" );
    printf ( "Enter new number: " );
    scanf ( "%i", &k );
    if ( k > n )
    {
        printf ( "Too long move!!!" );
        return 0;
    }
    printf ( "\n" );
    f = fopen ( "file_bin", "rb" ); //�������� �������� ����� ��� �������
   // fseek ( f, k  * ( sizeof ( s ) + sizeof ( int ) + sizeof ( float ) ), SEEK_SET );
    for ( i = k; i > 0 && i < 11; ) //���������� ��������� �����
    {
        fseek ( f, ( i - 1 ) * ( sizeof ( s ) + sizeof ( int ) + sizeof ( float ) ), SEEK_SET );
        fread ( s, sizeof ( s ), 1, f );	//������ � ����� ����� "String"
        fread ( &n, sizeof ( int ), 1, f );		//������ ���� �����
        fread ( &r, sizeof ( float ), 1, f );	//������ ����� �����
        printf ( "\n%s %d %f", s, n, r );    	//������� ���� ����� �� �����
        if ( i == 1 )
        {
            i = k;
            flag = 1;
        }
        if ( flag == 0 )
        {
            i--;
        }
        else
        {
            i++;
        }
    }
    fclose ( f );
    getch();	//�������� - ���������� ���������� ������ Enter
    return 0;
}
