#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

void difficultySelection();
char **reserveBoard();
void createBoard(char **board);
void printBoard(char **board);
void placesMines(char **board);
void countMines(char **board);
void game(char **boardFalse, char **boardReal);
char passNumbers(int bomb);
void expands(char **boardFalse, char **boardReal, int i, int j);
void checkCell(char **board);
void freeBoard(char **board);

int nRow, nCol, mines;

int main()
{
//We select difficulty of the game
	difficultySelection();
    
//We reserve enough memory for two boards
	char **boardFalse, **boardReal;
    boardReal = reserveBoard();
    boardFalse = reserveBoard();

//We create a board that will not be shown on the screen and another that will be, being in the first the true data of the game
    createBoard(boardReal);
    createBoard(boardFalse);

//We show a board without any data on the screen
    printBoard(boardFalse);
    
//We put the mines on the board and assign values to the Celles that do not have mines
    placesMines(boardReal);
    countMines(boardReal);
//Game
	game(boardFalse, boardReal);

//We free memory allocation
    freeBoard(boardReal);
    freeBoard(boardFalse);

    getch ();
    return 0;
}

/*-------------------------------------------------------------------
Role: ask the user about the difficulty in which he wants to play 
and according to the option chosen we adjust the necessary parameters
---------------------------------------------------------------------*/
void difficultySelection()
{
    int difficulty;
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
}
/*----------------------------------------------------------------
Role: reserve enough memory to create a board
----------------------------------------------------------------*/
char **reserveBoard()
{
    int i, j;
    char **board;

//We reserve the board's memory
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
void createBoard(char **board)
{
    int i, j;

    for(i=0; i<nRow; i++)
        for(j=0; j<nCol; j++)
            board[i][j] = ' ';
}
/*--------------------------------------------
Role: show one board per screen
--------------------------------------------*/
void printBoard(char **board)
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
            {
            	printf(" |");
			}
            else
            {
            	printf("|");
			}
        }
        printf("\n");
    }
}

/*-----------------------------------------------------------
Role: Place mines on the board randomly
-----------------------------------------------------------*/
void placesMines(char **board)
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
void countMines(char **board)
{
    int i, j, bomb;
    char minesChar;

//We count the mines around each square that does not have a mine
    for(i=0; i<nRow; i++)
    {
        for(j=0; j<nCol; j++)
        {
            bomb=0;
            if(board[i][j] != 'M')
            {
//Top left corner
                if(i==0 && j==0)
                {
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Top right corner
                if(i==0 && j==nCol-1)
                {
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Bottom left corner
                if(i==nRow-1 && j==0)
                {
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Bottom right corner
                if(i==nRow-1 && j==nCol-1)
                {
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Top side (not counting the corners)
                if(i==0 && j!=0 && j!=nCol-1)
                {
                    if(board[i+1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Left side (not counting the corners)
                if(j==0 && i!=0 && i!=nRow-1)
                {
                    if(board[i-1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Bottom side (not counting the corners)
                if(i==nRow-1 && j!=0 && j!=nCol-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Right side (not counting the corners)
                if(j==nCol-1 && i!=0 && i!=nRow-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
//Board rest
                if(i!=0 && j!=0 && i!=nRow-1 && j!=nCol-1)
                {
                    if(board[i-1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i-1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i][j+1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j-1] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j] == 'M')
                    {
                        bomb++;
                    }
                    if(board[i+1][j+1] == 'M')
                    {
                        bomb++;
                    }
                    minesChar = passNumbers(bomb);
                    board[i][j] = minesChar;
                }
            }
        }
    }
}
/*----------------------------------
Role: main gameplay
------------------------------------*/
void game(char **boardFalse, char **boardReal)
{
	int x, y, victoria=0, i, j, k, marking, count;
	
	do
    {
//We ask the user if he wants to check a Cell until a valid answer is given
        do
        {
            printf("Do you want to check some Cell? (yes = 1, no = 0, exit = 7):");
            scanf("%d", &marking);
            if(marking!=1 && marking!=0 && marking!=7)
            {
                printf("Error: Invalid response\n\n");
            }
        }
        while(marking!=1 && marking!=0 && marking!=7);

//If the user wishes to check a Cell, we mark the selected Cell and show the result on the screen
        if(marking == 7)
        {
        	printf("\n\nReally? Sad, real sappers just don't give up!\n\n");
			return;
		}
		if(marking == 1)
        {
            checkCell(boardFalse);
            system("cls");
            printBoard(boardFalse);
        }
        if(marking == 0)
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
                        expands(boardFalse, boardReal, i, j);
                    }
                }
			}
//We remove the previous results from the screen so that they do not bother the user
            system("cls");
            
//We show current results by screen
            printBoard(boardFalse);
            
//If the Cell selected by the user had a mine, the game is over
            if(boardFalse[x-1][y-1] == 'M')
            {
                victoria=1;
                printf("\nB O O O M M M M M !\n\n");
                printBoard(boardReal);
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
                printf("\nCongratulations, you have won\n\n");
            }
        }
    }
    while(victoria==0);	
}

/*-------------------------------------------------------------------------
Output: 0, 1, 2, 3, 4, 5, 6, 7 or 8 in char format
Role: convert an integer data into a character data
-------------------------------------------------------------------------*/
char passNumbers(int bomb)
{
//We convert the integer data into character data
	switch (bomb)
	{
		case 0: return '0';
		case 1: return '1';
		case 2: return '2';
		case 3: return '3';
		case 4: return '4';
		case 5: return '5';
		case 6: return '6';
		case 7: return '7';
		case 8: return '8';
	}
}

/*-----------------------------------------------------------------------------------------------------------------------------
Commitment: assigns to the false board the Celles around the Cell selected by the user so that they are shown later,
taking into account that the squares that do not have any nearby mine also automatically unlock the squares around them
--------------------------------------------------------------------------------------------------------------------------------*/
void expands(char **boardFalse, char **boardReal, int i, int j)
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
void checkCell(char **board)
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
void freeBoard(char **board)
{
    int i;

    for(i=0; i<nRow; i++)
        free(board[i]);

    free(board);
    board = NULL;
}
