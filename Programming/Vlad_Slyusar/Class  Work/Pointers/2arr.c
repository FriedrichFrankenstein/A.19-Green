#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int** getMem ( int M, int N ); // первинне виділення пам'яті
void inpMatr ( int** a, int n, int m ); // введення з клави
void outMatr ( int** a, int M1, int N ); // виведення на екран
int** chngMem ( int **a, int M, int originN ); // зміна обсягу і структури дин. пам'яті

int main()
{
    int i, j;			// лiчильники рядків і стовпчиків
    int** a;			// покажчик на двовимірний масив
    int* p, *p1;		// допоміжні покажчики на ділянки масиву з числами
    int M, N;
    printf ( "Input num of rows: M=" );
    scanf ( "%d", &M );
    printf ( "Input num of cols: N=" );
    scanf ( "%d", &N );
    a = getMem ( M, N ); // виділення початкового масиву
   // getch();
    inpMatr ( a, M, N ); // введення масиву
    outMatr ( a, M, N ); // виведення на екран
    for ( i = M - 1; i >= 1; i-- ) // обхід масиву з останнього за номером рядка
    {
        p = * ( a + i ); // покажчик - на перший елемент і-го рядка
        p1 = * ( a + i - 1 ); // другий покажчик - на перший елемент сусіднього рядка
        for ( j = 1; j <= N; j++ ) // перебираємо елементи в рядках
        {
            ( *p++ ) *= *p1++; // розіменовуючи покажчики - перемножуємо сусідні елементи одного стовпчика, потім покажчики зсуваємо на комірку вперед
        }
    }
    outMatr ( a, M, N );
    a = chngMem ( a, M, N ); // зміна обсягу і структури пам'яті під масив
}

int** chngMem ( int **a, int M1, int originN )
{
    int i, N, M, j;
    printf ( "New number of rows:" );
    scanf ( "%i", &M ); // ввести нову кількість рядків
    a = ( int** ) realloc ( a, M * sizeof ( int* ) ); // перевиділити пам'ять під нову кількість рядків
    int *lengthArray = calloc(M, sizeof(int));
    for ( i = 0; i < M; i ++ )  // обхід зміненої кількості рядків
    {
        printf ( "New size of row %i:", i );
        scanf ( "%i", &N ); // введення нової кількості чисел у рядку
        *(lengthArray + i) = N;
        if ( i < M1 ) // якщо номер рядка в межах початкової кількості -
        {
            *(a + i) = ( int* ) realloc ( *(a + i), N * sizeof ( int ) );	// перевиділити пам'ять під рядок ЗМІНИ
        }
        else   // інакше - виділити первинно пам'ять під рядок
        {
            *(a + i) = ( int* ) calloc ( N , sizeof ( int ) );
        }
      //  printf ( "a[%i]=%p\n", i, *a++ ); // показати стартову адресу рядка на екрані
        // а++ - перевести покажчик масиву рядків на наступну комірку, в якій знаходиться адреса наступного рядка
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

  //  a -= M; // по завершенні обходу масиву покажчиків - повернути "головний" покажчик на масив на стартову комірку (де запис. адерса 0-го рядка)
    return a; // повернути можливо нову адресу масиву покажчиків
}

int** getMem ( int M, int N )
{
    int **a;
    int i;
    a = ( int** ) malloc ( M * sizeof ( int* ) ); // виділ. пам'ять під масив покажчиків
    for ( i = 0; i < M; i ++ )
    {
        *(a + i) = ( int* ) malloc ( N * sizeof ( int ) );	 // і під кожен рядок окремо
        //printf ( "a[%i]=%p\n", i, *a++ ); // стартова адреса - на екран, а++ - покажчик на наст. комірку
    }
    //a -= M; // після фіксації адрес усіх рядків - покажчик на початкову позицію
    return a; // повертаємо адресу в місце виклику функції
}

void outMatr ( int** a, int M, int N )
{
    int i, j;
    printf ( "Matrix a: \n" );
    for ( i = 0; i < M; i ++ )
    {
        for ( j = 0; j < N; j ++ ){ // обхід рядка
            printf ( "%d ", * ( * ( a + i ) + j ) ); // покажчик розіменовується, елемент виводиться на екран, покажчик зсувається на 1 комірку вперед
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
