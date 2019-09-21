#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int** getMem(int M, int N); // первинне виділення пам'яті
void inpMatr(int** a,int n, int m); // введення з клави
void outMatr(int** a); // виведення на екран
int** chngMem(int **a); // зміна обсягу і структури дин. пам'яті
void inpAfter(int** a,int M, int N);

int main()
{
	int i, j;			// лiчильники рядкґв і стовпчиків
	int** a;			// покажчик на двовимірний масив
    int* p, *p1;		// допоміжні покажчики на ділянки масиву з числами
    int M,N;
    
	printf("Input num of rows: M=");
	scanf("%d",&M);
	printf("Input num of cols: N=");
	scanf("%d",&N);
	
   	a=getMem(M,N); // виділення початкового масиву
	getch();
    inpMatr(a,M,N); // введеннЯ масиву
    outMatr(a); // виведення на екран
	
	for(i=M-1;i>=1;i--){ // обхід масиву з останнього за номером рядка
		p=*(a+i); // покажчик - на перший елемент і-го рядка
		p1=*(a+i-1); // другий покажчик - на перший елемент сусіднього рядка
		for(j=1; j<=N; j++){ // перебираємо елементи в рядках
			(*p++)*=*p1++; // розіменовуючи покажчики - перемножуємо сусідні елементи одного стовпчика, потім покажчики зсуваємо на комірку вперед
        }
	}
	outMatr(a); 
	a=chngMem(a); // зміна обсягу і структури пам'яті під масив
	outMatr(a);
	inpAfter(a,M,N);
	outMatr(a);
	return 0;
}	

int** chngMem(int **a)
{
	int i,N,M,M1;
	
	M1=_msize(a)/sizeof(int*); // фіксація початкового обсягу масиву покажчиків (кількості рядків)
	
	printf("New number of rows:");
 	scanf("%i",&M); // ввести нову кількість рядків
 	
 	a=(int**)realloc(a,M*sizeof(int*)); // перевиділити пам'ять під нову кількість рядків
	
 	for ( i = 0; i < M; i ++ ){ // обхід зміненої кількості рядків
 		printf("New size of row %i:",i); 
 		scanf("%i",&N); // введення нової кількості чисел у рядку
 		if(i<M1){ // якщо номер рядка в межах початкової кількості -
 			*a=(int*)realloc(*a,N*sizeof(int));	// перевиділити пам'ять під рядок
		}
		else { // інакше - виділити первинно пам'ять під рядок
			*a=(int*)calloc(N,sizeof(int));	
		}
		printf("a[%i]=%p\n",i,*a++); // показати стартову адресу рядка на екрані
		// а++ - перевести покажчик масиву рядків на наступну комірку, в якій знаходиться адреса наступного рядка
	}
	a-=M; // по завершенні обходу масиву покажчиків - повернути "головний" покажчик на масив на стартову комірку (де запис. адерса 0-го рядка)
    return a; // повернути можливо нову адресу масиву покажчиків
}

int** getMem(int M, int N )
{
	int **a;
	int i;
	
	a=(int**)malloc(M*sizeof(int*)); // виділ. пам'ять під масив покажчиків
	
 	for ( i = 0; i < M; i ++ ){
 		*a=(int*)malloc(N*sizeof(int));	 // і під кожен рядок окремо
		printf("a[%i]=%p\n",i,*a++); // стартова адреса - на екран, а++ - покажчик на наст. комірку
	} 
    a-=M; // після фіксації адрес усіх рядків - покажчик на початкову позицію
    
    return a; // повертаємо адресу в місце виклику функції
}

void outMatr(int** a)
{
	int i,j,N,M;
	
	M=_msize(a)/sizeof(int*); // розрахунок кількості комірок в масиві рядків (фактична кількість рядків)
	printf("Matrix a: \n");
	for ( i = 0; i < M; i ++ ) {
	 	N=_msize(*(a+i))/sizeof(int); // розрахунок кількості комірок в кожному стовці
		for ( j = 0; j < N; j ++ ) // обхід рядка
			printf("%d ",*(*(a+i)+j)); // покажчик розіменовується, елемент виводиться на екран, покажчик зсувається на 1 комірку вперед
		printf("          size - %i bytes\n",_msize(*(a+i))); // також виводиться розмір рядка (в байтах)
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
