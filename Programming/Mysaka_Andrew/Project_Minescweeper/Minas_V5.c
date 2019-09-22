#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

char **reserveBoard(int nRow, int nCol);
void createBoard(char **board, int nRow, int nCol);
void printBoard(char **board, int nRow, int nCol);
void placesMines(char **board, int nRow, int nCol, int mines);
void countMines(char **board, int nRow, int nCol);
char passNumbers(int mines);
void expands(char **boardFalse, char **boardReal, int nRow, int nCol, int i, int j);
void checkCell(char **board, int nRow, int nCol);
void freeBoard(char **board, int nRow);

int main()
{
    char **boardFalse, **boardReal;
    int nRow, nCol, mines, x, y, victoria=0, i, j, k, marking, count, difficulty;

//We ask the user about the difficulty in which he wants to play and according to the option chosen we adjust the necessary parameters
    do
    {
        printf("Select the difficulty level: \n\t1 = beginner; \n\t2 = intermediate; \n\t3 = expert;\nChoise: ");
        scanf("%d", &difficulty);
        if(difficulty<1 || difficulty>3)
        {
            printf("Error: Invalid response\n\n");
        }
    }
    while(difficulty<1 || difficulty>3);

    switch (difficulty)
    {
    case 1:
        nRow=8, nCol=8, mines=10;
        break;
    case 2:
        nRow=16, nCol=16, mines=40;
        break;
    case 3:
        nRow=16, nCol=30, mines=99;
        break;
    }

//let's reserve enough memory for two boards
    boardReal = reserveBoard(nRow, nCol);
    boardFalse = reserveBoard(nRow, nCol);

//We create a board that will not be shown on the screen and another that will be, being in the first the true data of the game
    createBoard(boardReal, nRow, nCol);
    createBoard(boardFalse, nRow, nCol);

//We show a board without any data on the screen
    printBoard(boardFalse, nRow, nCol);

//We put the mines on the board and assign values to the Celles that do not have mines
    placesMines(boardReal, nRow, nCol, mines);
    countMines(boardReal, nRow, nCol);

//Game loop
    do
    {
//We ask the user if he wants to check a Cell until a valid answer is given
        do
        {
            printf("Do you want to check some Cell? (yes = 1 no = 0):");
            scanf("%d", &marking);
            if(marking!=1 && marking!=0)
            {
                printf("Error: Invalid response\n\n");
            }
        }
        while(marking!=1 && marking!=0);

//If the user wishes to check a Cell, we mark the selected Cell and show the result on the screen
        if(marking == 1)
        {
            checkCell(boardFalse, nRow, nCol);
            system("cls");
            printBoard(boardFalse, nRow, nCol);
        }

        else
        {
//We ask the user to select a Cell
            do
            {
                printf("Select a Cell\n");
                printf("Row: ");
                scanf("%d", &x);
                printf("Column: ");
                scanf("%d", &y);
                if(x>nRow || y>nCol)
                {
                    printf("There is no such position, try again\n\n");
                }
            }
            while(x>nRow || y>nCol);
//If the selected Cell does not have any mine around, we show the values around the screen, until you find Celles that have mines around
            boardFalse[x-1][y-1] = boardReal[x-1][y-1];
            for(k=0; k<10; k++)
            {
                for(i=0; i<nRow; i++)
                {
                    for(j=0; j<nCol; j++)
                    {
                        expands(boardFalse, boardReal, nRow, nCol, i, j);
                    }
                }
            }

//We remove the previous results from the screen so that they do not bother the user
            system("cls");

//We show current results by screen
            printBoard(boardFalse, nRow, nCol);

//If the Cell selected by the user had a mine, the game is over
            if(boardFalse[x-1][y-1] == 'M')
            {
                victoria=1;
                printf("B O O O M M M M M !\n");
            }

            count=0;
            for(i=0; i<nRow; i++)
            {
                for(j=0; j<nCol; j++)
                {
                    if(boardFalse[i][j] == boardReal[i][j])
                    {
                        count++;
                    }
                }
            }

//If all the Celles on both boards are equal, except for the mines, the game is over
            if(count == (nRow*nCol)-mines)
            {
                victoria=1;
                printf("Congratulations, you have won\n");
            }
        }
    }
    while(victoria==0);

    freeBoard(boardReal, nRow);
    freeBoard(boardFalse, nRow);

    getch ();
    return 0;
}

/*----------------------------------------------------------------
Role: reserve enough memory to create a board
----------------------------------------------------------------*/
char **reserveBoard(int nRow, int nCol)
{
    int i, j;
    char **board;

//let's reserve the board's memory
    board=(char**)malloc(nRow*sizeof(char*));
    if(board == NULL)
        printf("Could not reserve memory\n");

    else
    {
        for(i=0; i<nRow; i++)
        {
            board[i]=(char*)malloc(nCol*sizeof(char));
            if(board[i] == NULL)
                printf("Could not reserve memory\n");
        }
    }
    return (board);
}

/*------------------------------------------
Role: create a board for the game
------------------------------------------*/
void createBoard(char **board, int nRow, int nCol)
{
    int i, j;

    for(i=0; i<nRow; i++)
        for(j=0; j<nCol; j++)
            board[i][j] = ' ';
}
/*--------------------------------------------
Role: show one board per screen
--------------------------------------------*/
void printBoard(char **board, int nRow, int nCol)
{
    int i, j;

//We show the board by screen, attaching to it a set of coordinates for a simpler view of this
    printf("  ");
    for(i=0; i<nRow; i++)
        printf(" %d", i+1);

    printf("\n");

    for(i=0; i<nRow; i++)
    {
        if(i<9)
        {
            printf(" %d", i+1);
            printf("|");
        }
        else
        {
            printf("%d", i+1);
            printf("|");
        }
        for(j=0; j<nCol; j++)
        {
            printf("%c", board[i][j]);
            if(j>=9)
                printf(" |");

            else
                printf("|");

        }
        printf("\n");
    }
}

/*-----------------------------------------------------------
Role: Place mines on the board randomly
-----------------------------------------------------------*/
void placesMines(char **board, int nRow, int nCol, int mines)
{
    int i, j, placesBomb, count=0;
    srand(time(NULL));

//We assign mines to random squares on the board, until there are 10 mines
    do
    {
        for(i=0; i<nRow; i++)
        {
            for(j=0; j<nCol; j++)
            {
                placesBomb=((rand()%999)+1);
                if(placesBomb>=1 && placesBomb<=10)
                {
                    if(count <= mines)
                    {
                        board[i][j]= 'M';
                        count++;
                    }
                }
            }
        }
    }
    while(count<mines);
}

/*--------------------------------------------------------------
Commitment: count the mines around each Cell
--------------------------------------------------------------*/
void countMines(char **board, int nRow, int nCol)
{
    int i, j, mines;
    char minesChar;

//We count the mines around each square that does not have a mine
    for(i=0; i<nRow; i++)
    {
        for(j=0; j<nCol; j++)
        {
            mines=0;
            if(board[i][j] != 'M')
            {

//Top left corner
                if(i==0 && j==0)
                {
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Top right corner
                if(i==0 && j==nCol-1)
                {
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Bottom left corner
                if(i==nRow-1 && j==0)
                {
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Bottom right corner
                if(i==nRow-1 && j==nCol-1)
                {
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j-1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Top side (not counting the corners)
                if(i==0 && j!=0 && j!=nCol-1)
                {
                    if(board[i+1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Left side (not counting the corners)
                if(j==0 && i!=0 && i!=nRow-1)
                {
                    if(board[i-1][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Bottom side (not counting the corners)
                if(i==nRow-1 && j!=0 && j!=nCol-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Right side (not counting the corners)
                if(j==nCol-1 && i!=0 && i!=nRow-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }

//Board rest
                if(i!=0 && j!=0 && i!=nRow-1 && j!=nCol-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        mines++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        mines++;
                    }
                    minesChar = passNumbers(mines);
                    board[i][j] = minesChar;
                }
            }
        }
    }
}

/*-------------------------------------------------------------------------
Output: 0, 1, 2, 3, 4, 5, 6, 7 or 8 in char format
Role: convert an integer data into a character data
-------------------------------------------------------------------------*/
char passNumbers(int mines)
{
//We convert the integer data into character data
    if(mines == 0)
    {
        return '0';
    }
    if(mines == 1)
    {
        return '1';
    }
    if(mines == 2)
    {
        return '2';
    }
    if(mines == 3)
    {
        return '3';
    }
    if(mines == 4)
    {
        return '4';
    }
    if(mines == 5)
    {
        return '5';
    }
    if(mines == 6)
    {
        return '6';
    }
    if(mines == 7)
    {
        return '7';
    }
    if(mines == 8)
    {
        return '8';
    }
}

/*-----------------------------------------------------------------------------------------------------------------------------
Commitment: assigns to the false board the Celles around the Cell selected by the user so that they are shown later,
taking into account that the squares that do not have any nearby mine also automatically unlock the squares around them
--------------------------------------------------------------------------------------------------------------------------------*/
void expands(char **boardFalse, char **boardReal, int nRow, int nCol, int i, int j)
{
    int x, y;

//We assign the Celles around the selected Cell on the real board to the same Celles on the board false
    for(x=0; x<nRow; x++)
    {
        for(y=0; y<nCol; y++)
        {
            if(boardFalse[i][j] == '0')
            {

//Top left corner
                if(i==0 && j==0)
                {
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                    boardFalse[i+1][j+1] = boardReal[i+1][j+1];
                }

//Top right corner
                if(i==0 && j==nCol-1)
                {
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i+1][j-1] = boardReal[i+1][j-1];
                }

//Bottom left corner
                if(i==nRow-1 && j==0)
                {
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                }

//Bottom right corner
                if(i==nRow-1 && j==nCol-1)
                {
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i-1][j-1] = boardReal[i-1][j-1];
                }

//Top side (not counting the corners)
                if(i==0 && j!=0 && j!=nCol-1)
                {
                    boardFalse[i+1][j-1] = boardReal[i+1][j-1];
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                    boardFalse[i+1][j+1] = boardReal[i+1][j+1];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                }

//Left side (not counting the corners)
                if(j==0 && i!=0 && i!=nRow-1)
                {
                    boardFalse[i-1][j+1] = boardReal[i-1][j+1];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                    boardFalse[i+1][j+1] = boardReal[i+1][j+1];
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                }

//Bottom side (not counting the corners)
                if(i==nRow-1 && j!=0 && j!=nCol-1)
                {
                    boardFalse[i-1][j-1] = boardReal[i-1][j-1];
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i-1][j+1] = boardReal[i-1][j+1];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                }

//Right side (not counting the corners)
                if(j==nCol-1 && i!=0 && i!=nRow-1)
                {
                    boardFalse[i-1][j-1] = boardReal[i-1][j-1];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i+1][j-1] = boardReal[i+1][j-1];
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                }

//Board rest
                if(i!=0 && j!=0 && i!=nRow-1 && j!=nCol-1)
                {
                    boardFalse[i-1][j-1] = boardReal[i-1][j-1];
                    boardFalse[i-1][j]   = boardReal[i-1][j];
                    boardFalse[i-1][j+1] = boardReal[i-1][j+1];
                    boardFalse[i][j-1]   = boardReal[i][j-1];
                    boardFalse[i][j+1]   = boardReal[i][j+1];
                    boardFalse[i+1][j-1] = boardReal[i+1][j-1];
                    boardFalse[i+1][j]   = boardReal[i+1][j];
                    boardFalse[i+1][j+1] = boardReal[i+1][j+1];
                }
            }
        }
    }
}

/*---------------------------------------------------------
Commitment: check the Cell selected by the user
---------------------------------------------------------*/
void checkCell(char **board, int nRow, int nCol)
{
    int x, y;
//We mark with an X the Cell selected by the user
    do
    {
        printf("Check one Cell\n");
        printf("Row: ");
        scanf("%d",&x);
        printf("Column: ");
        scanf("%d",&y);
        if(x>nRow || y>nCol)
        {
            printf("There is no such position, try again\n\n");
        }
    }
    while(x>nRow || y>nCol);
    board[x-1][y-1] = 'X';
}

/*--------------------------------------------------------
Role: free the memory reserved for a board
--------------------------------------------------------*/
void freeBoard(char **board, int nRow)
{
    int i;

    for(i=0; i<nRow; i++)
        free(board[i]);

    free(board);
    board = NULL;
}
