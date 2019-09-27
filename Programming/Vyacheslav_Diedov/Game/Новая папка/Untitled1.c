#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>


int IsSq(int** a, int i, int j, int b)
{
    int di = i/3,
        dj = j/3;
        int _b, __b;
    for ((di*3), di = _b; di < _b+3; ++di)
    
        for ((dj*3), dj = __b; dj < __b+3; ++dj)
            if (a[di][dj] == b) return 1;
    return 0;
}
 
int IsVer(int** a, int i, int b)
{
	int dj;
    for ( dj = 0; dj < 9; ++dj)
        if (a[i][dj] == b) return 1;
    return 0;
}
 
int IsHor(int** a, int j, int b)
{
	int di;
    for ( di = 0; di < 9; ++di)
        if (a[di][j] == b) return 1;
    return 0;
}
 
void InitMas(int** a)
{
	int i, j;
    for ( i = 0; i < 9; ++i)
        for ( j = 0; j < 9; ++j)
            a[i][j] = -1;
}
 
void Sudoku(int** a)
{
	int i,j,h;
    for ( i = 0; i < 9; ++i)
    {
        for (j = 0; j < 9; ++j)
        {
            int c = 9;
            for ( h = 1; h < 10; ++h)
                if (IsSq(a,i,j,h) || IsHor(a,j,h) || IsVer(a,i,h) )
                    --c;
            if (!c)
            {
                InitMas(a);
                Sudoku(a);
                return;
            }
            int b;
            srand(time(NULL));
			b = rand()%9+1;
            while (IsSq(a,i,j,b) || IsHor(a,j,b) || IsVer(a,i,b) )
                b = rand()%9+1;
            a[i][j] = b;
        }
    }
}
 
void ShowMas(int** a)
{
	int i, j;
    for ( i = 0; i < 9; ++i)
    {
        for ( j = 0; j < 9; ++j)
            printf("%3d",a[i][j]);
        printf("\n\n");
    }
}
 
int main()
{
	int i;
    int** a = (int **) calloc(9, sizeof(int *));
    for ( i = 0; i < 9; ++i)
        a[i] = (int *) calloc (9, sizeof(int));
    InitMas(a);
    Sudoku(a);
    ShowMas(a);
    getchar();
    return 0;
}
