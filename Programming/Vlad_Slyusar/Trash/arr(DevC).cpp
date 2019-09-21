#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int** getMem(int M, int N); // �������� �������� ���'��
void inpMatr(int** a,int n, int m); // �������� � �����
void outMatr(int** a); // ��������� �� �����
int** chngMem(int **a); // ���� ������ � ��������� ���. ���'��
void inpAfter(int** a,int M, int N);

int main()
{
	int i, j;			// �i�������� ����� � ���������
	int** a;			// �������� �� ���������� �����
    int* p, *p1;		// ������� ��������� �� ������ ������ � �������
    int M,N;
    
	printf("Input num of rows: M=");
	scanf("%d",&M);
	printf("Input num of cols: N=");
	scanf("%d",&N);
	
   	a=getMem(M,N); // �������� ����������� ������
	getch();
    inpMatr(a,M,N); // �������� ������
    outMatr(a); // ��������� �� �����
	
	for(i=M-1;i>=1;i--){ // ����� ������ � ���������� �� ������� �����
		p=*(a+i); // �������� - �� ������ ������� �-�� �����
		p1=*(a+i-1); // ������ �������� - �� ������ ������� ��������� �����
		for(j=1; j<=N; j++){ // ���������� �������� � ������
			(*p++)*=*p1++; // ������������ ��������� - ����������� ����� �������� ������ ���������, ���� ��������� ������� �� ������ ������
        }
	}
	outMatr(a); 
	a=chngMem(a); // ���� ������ � ��������� ���'�� �� �����
	outMatr(a);
	inpAfter(a,M,N);
	outMatr(a);
	return 0;
}	

int** chngMem(int **a)
{
	int i,N,M,M1;
	
	M1=_msize(a)/sizeof(int*); // �������� ����������� ������ ������ ��������� (������� �����)
	
	printf("New number of rows:");
 	scanf("%i",&M); // ������ ���� ������� �����
 	
 	a=(int**)realloc(a,M*sizeof(int*)); // ����������� ���'��� �� ���� ������� �����
	
 	for ( i = 0; i < M; i ++ ){ // ����� ������ ������� �����
 		printf("New size of row %i:",i); 
 		scanf("%i",&N); // �������� ���� ������� ����� � �����
 		if(i<M1){ // ���� ����� ����� � ����� ��������� ������� -
 			*a=(int*)realloc(*a,N*sizeof(int));	// ����������� ���'��� �� �����
		}
		else { // ������ - ������� �������� ���'��� �� �����
			*a=(int*)calloc(N,sizeof(int));	
		}
		printf("a[%i]=%p\n",i,*a++); // �������� �������� ������ ����� �� �����
		// �++ - ��������� �������� ������ ����� �� �������� ������, � ��� ����������� ������ ���������� �����
	}
	a-=M; // �� ��������� ������ ������ ��������� - ��������� "��������" �������� �� ����� �� �������� ������ (�� �����. ������ 0-�� �����)
    return a; // ��������� ������� ���� ������ ������ ���������
}

int** getMem(int M, int N )
{
	int **a;
	int i;
	
	a=(int**)malloc(M*sizeof(int*)); // ����. ���'��� �� ����� ���������
	
 	for ( i = 0; i < M; i ++ ){
 		*a=(int*)malloc(N*sizeof(int));	 // � �� ����� ����� ������
		printf("a[%i]=%p\n",i,*a++); // �������� ������ - �� �����, �++ - �������� �� ����. ������
	} 
    a-=M; // ���� �������� ����� ��� ����� - �������� �� ��������� �������
    
    return a; // ��������� ������ � ���� ������� �������
}

void outMatr(int** a)
{
	int i,j,N,M;
	
	M=_msize(a)/sizeof(int*); // ���������� ������� ������ � ����� ����� (�������� ������� �����)
	printf("Matrix a: \n");
	for ( i = 0; i < M; i ++ ) {
	 	N=_msize(*(a+i))/sizeof(int); // ���������� ������� ������ � ������� ������
		for ( j = 0; j < N; j ++ ) // ����� �����
			printf("%d ",*(*(a+i)+j)); // �������� �������������, ������� ���������� �� �����, �������� ��������� �� 1 ������ ������
		printf("          size - %i bytes\n",_msize(*(a+i))); // ����� ���������� ����� ����� (� ������)
	}
}

void inpAfter(int** a,int M, int N)
{
	int i,j,Mnew,Nnew;
	
	Mnew=_msize(a)/sizeof(int*);
	
	for ( i = 0; i < Mnew; i ++ ){
		Nnew=_msize(*(a+i))/sizeof(int);
		if(i<M){
			if(Nnew>N) j=N;
			else j=Nnew;
		}
		else j=0;
		printf("Additional numbers in the row %i:\n",i);
		for ( ; j < Nnew; j ++ ) {
			printf("a[%d][%d]=",i,j);
			scanf("%d",*(a+i)+j);
		}
    }
}

void inpMatr(int** a,int n, int m)
{
	int i,j;
	
	for ( i = 0; i < n; i ++ ){
		for ( j = 0; j < m; j ++ ) {
			printf("a[%d][%d]=",i,j);
			scanf("%d",*(a+i)+j);
		}
    }
}
