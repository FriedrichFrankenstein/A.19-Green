#include <iostream>

int IsSq(int** a, int i, int j, int b)
{
    int di = i/3,
        dj = j/3;
    for (int _b(di*3), ddi = _b; ddi < _b+3; ++ddi)
        for (int __b(dj*3), ddj = __b; ddj < __b+3; ++ddj)
            if (a[ddi][ddj] == b) return 1;
    return 0;
}

int IsVer(int** a, int i, int b)
{
    for (int dj = 0; dj < 9; ++dj)
        if (a[i][dj] == b) return 1;
    return 0;
}

int IsHor(int** a, int j, int b)
{
    for (int di = 0; di < 9; ++di)
        if (a[di][j] == b) return 1;
    return 0;
}

void InitMas(int** a)
{
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            a[i][j] = -1;
}

void Sudoku(int** a)
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            int c = 9;
            for (int h = 1; h < 10; ++h)
                if (IsSq(a,i,j,h) || IsHor(a,j,h) || IsVer(a,i,h) )
                    --c;
            if (!c)
            {
                InitMas(a);
                Sudoku(a);
                return;
            }
            int b = rand()%9+1;
            while (IsSq(a,i,j,b) || IsHor(a,j,b) || IsVer(a,i,b) )
                b = rand()%9+1;
            a[i][j] = b;
        }
    }
}

void ShowMas(int** a)
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
            printf("%3d",a[i][j]);
        printf("\n\n");
    }
}

int main()
{
    int** a = (int **) calloc(9, sizeof(int *));
    for (int i = 0; i < 9; ++i)
        a[i] = (int *) calloc (9, sizeof(int));
    InitMas(a);
    Sudoku(a);
    ShowMas(a);
    getchar();
    return 0;
}
