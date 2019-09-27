#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


void masivNew(){
	printf("\nArray52. ��� ������ A ������� N. ������������ ����� ������ B ���� �� �������, �������� �������� \n������������ ��������� �������: BK = 2�AK, ���� AK < 5, AK/2 � ��������� ������.\n");
	int n, i, a;
    n = rand()%5+10;
    int ma[n] ;
    for(i=0; i<n; i++ ){
    	a = rand()%10;
    	ma[i] = a;
    	printf("ma[%i]=%i\n", i, ma[i]);
	}
	float mb[n], b;
	for(i=0; i<n; i++){
		if (ma[i]<5){
			b = 2 * ma[i];
			mb[i] = b;
		}else{
			b = (float) ma[i] / 2;
			mb[i]= b;
		}
		printf("mb[%i]=%.2f\n", i, mb[i]);
	}
	}


void multipleOfThree (int n){
    printf("\nArray56. ��� ������������� ������ A ������� N (?15). ���������� � ����� ������������� ������ B ��� \n�������� � ����������� ��������, �������� ���� (3, 6, ...), � ������� ������ ����������� \n������� B � ��� ����������. �������� �������� �� ������������.\n");
	int a, i, i1=0, b;
    srand(time(NULL));
    printf("\nInput n-");
    scanf("%i", &n);
    i = n;
    int ma[i], mb[i];
    	for( i=0 ; i<n ; i++ ){
    		a = rand()%100;
    		ma[i] = a;
    		printf("ma-%i\n", ma[i]);
		}
		for( i=0 ; i<n ; i++ ){
			for( ; ma[i] % 3 == 0; ){
				mb[i1] = ma[i];
				printf("Multiple of three=%i\n", mb[i1]);
				++i1;
				break;
			}
		}
		printf("The size of the array= %i\n", i1);
	}


void sumArray(int n){
	printf("\nArray58. ��� ������ A ������� N. ������������ ����� ������ B ���� �� ������� �� ���������� \n�������: ������� BK ����� ����� ��������� ������� A � �������� �� 1 �� K.\n");
	int a, i, sum = 0 ;
    	srand(time(NULL));
    	printf("\nInput n-");
    	scanf("%i", &n);
    	i = n ;
    int ma[i], mb[i];
    	for( i = 0 ; i < n ; i++ ){
    		a = rand()%100;
    		ma[i] = a;
    		printf("ma-%i\n", ma[i]);
		}
		for( i = 0 ; i < n ; i++ ){
			sum += ma[i];
			mb[i] = sum;
			printf("mb[%i]=%i\n", i, mb[i]);
		}
	}

void multiplicationMatrix (int m, int n){
	printf("Matrix2. ���� ����� ������������� ����� M � N. ������������ ������������� ������� ������� M * N, � ������� ��� \n�������� J-�� ������� ����� �������� 5�J (J = 1,...,N).\n");
	int i, j;
	printf("\nM:");
	scanf("%i",&m);
	printf("N:");
	scanf("%i", &n);
	int masiv[m][n];
		for(i=1; i<=m; i++){
			for(j=0; j<n; j++){
				masiv[i][j]=5*j;
				printf("%i ", masiv[i][j]);
			}
		printf("\n");
		}
}

void rowColumn (int m, int n){
	printf("\nMatrix3. ���� ����� ������������� ����� M, N � ����� �� M �����. ������������ ������� \n������� M * N, � ������� � ������ ������� ���������� ��� ����� �� ��������� ������ (� ��� �� �������).\n ");
int i, j, a, b;
	printf("\nM:");
	scanf("%i",&m);
	printf("N:");
	scanf("%i", &n);
int masiv[m][n];
for( i = 0 ; i == 0 ; i++ ){
	for( j = 1 ; j <= n; j++ ){
		masiv[i][j] = j;
		printf("%i ", masiv[i][j]);
	}
	printf("\n");
}
for( i = 2 ; i <= m ; i++ ){
	a = i;
	b = 1;
	for(j = 1 ; j <= n; j++ ){
		if(a<=n){
			masiv[i][j] = a++;
		}else{
		masiv[i][j] = b++;	
		}
		printf("%i ", masiv[i][j]);
	}
	printf("\n");
}
}

  
  void matrixSumma (int m, int n, int d){
  	printf("\nMatrix5. ���� ����� ������������� ����� M, N, ����� D � ����� �� M �����. ������������ ������� ������� M * N, \n� ������� ������ ������� ��������� � �������� ������� �����, � �������� ������� ���������� ������� \n����� ����� ���������������� �������� ����������� ������� � ����� D (� ���������� ������ ������ ������� ����� \n��������� �������� �������������� ����������).\n");
	int i, j, s;
	printf("\nN:");
	scanf("%i", &n);
	printf("M:");
	scanf("%i", &m);
	printf("D:");
	scanf("%i", &d);
	int matrix[m][n];
	
	for( i = 0 ; i < m ; i++ ){
		for( j = 0 ; j <= 0; j++ ){
			matrix[i][j] = i + 1;
			}
	}
	
	for( i = 0 ; i < m ; i++ ){
		for( j = 1 ; j < n ; j++ ){
			matrix[i][j] = matrix[i][j-1] + d;
		}
	}
	
	for( i = 0 ; i < m ; i++ ){
		for( j = 0 ; j < n ; j++ ){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
}


int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    printf("Hello!!!");
	int test, test1, test2, c1, num, num1, num2, num3, num4, num5, num6, num7, num8;
	do{
	for(test1=3;test1>0;test1--){
		printf("\n����� ����� �� ������ ������ ������\n1-Array.\n2-Matrix\n3-��� ��������\n4-�����\nVersion - ");
		scanf("%i", &test);
			switch(test){
				case 1: 
					printf("\n�������� Array. \n");
						for(test2=3; test2>0;test2--){
							printf("\n���� Array 52, �� ������� 1 \n���� Array 56, �� ������� 2 \n���� Array 58, �� ������� 3 \n���� ��� ���, �� ������� 4\nVersion - ");
							scanf("%i", &c1);
							switch(c1){
								case 1: masivNew();
													break;
								case 2: multipleOfThree(num);
													break;
								case 3: sumArray(num1);
													break;
								case 4: masivNew();
										multipleOfThree(num);
										sumArray(num1);
										test2=0;
													break;
								default: printf("incorect");
							}
					}
													break;
				case 2: 
					printf("\n�������� while. \n");
						for(test2=3; test2>0;test2--){
							printf("\n���� Matrix 1, �� ������� 1 \n���� Matrix 3, �� ������� 2 \n���� Matrix 5, �� ������� 3 \n���� ��� ���, �� ������� 4\nVersion - ");
							scanf("%i", &c1);
							switch(c1){
								case 1: multiplicationMatrix(num2, num3);
													break;
								case 2: rowColumn(num4, num5);
													break;
								case 3: matrixSumma(num6, num7, num8);
													break;
								case 4: multiplicationMatrix(num2, num3);
										rowColumn(num4, num5);
										matrixSumma(num6, num7, num8);
										test2=0;
													break;
								default: printf("incorect");
							}
					}
													break;						
				case 3: masivNew();
						multipleOfThree(num);
						sumArray(num1);
						multiplicationMatrix(num2, num3);
						rowColumn(num4, num5);
						matrixSumma(num6, num7, num8);
						test1=0;
													break;
				case 4:test1=0;
													break;
			}
	}
	}while(test>4);
	printf("\nGoodbye!!!");
	getch();
	return 0;
	}
