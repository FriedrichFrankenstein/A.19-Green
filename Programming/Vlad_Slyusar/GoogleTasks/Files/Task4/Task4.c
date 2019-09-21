#include <stdio.h>

#define M 5		// ������� �����
#define N 4 	// ������� ��������

int main()
{
	int i, j, a[M][N];
	FILE *fp;
	fp = fopen("input.txt", "r");
	for ( i = 0; i < M; i ++ ) 	// ���� �� ������
		for ( j = 0; j < N; j ++ ) 	// ���� �� ��������
			if ( EOF == fscanf(fp,"%d",&a[i][j]) ) {// ������ ��� � ����� �[i][j], ��������� ����������, �� �� ��������� �� ����� ����� ��� �� ��������� ���
				puts("����� � ���� �� �������");
				fclose ( fp ); // ��������� ���� ����� �������
				getchar();
				return 0; 	// ����� � �������� ����� �������
			}
	fclose ( fp ); // ������� ���� ���� �������� ���������� �����
    fp = fopen("output.txt", "w");
    for ( i = 0; i < M; i ++ ){
        for ( j = 0; j < N; j ++ ){
            fprintf(fp, "%2i ", a[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}
