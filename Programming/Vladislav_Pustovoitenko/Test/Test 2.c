#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int* merge( int n1, int* a1, int n2, int* a2);
int isAnagram( int n1, char* s1, int n2, char* s2 );
char* sortChar( char* array, int size);
void sortInt( int* array, int direction, int size);

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // For checking function int* merge:
    int size1 = 10, size2 = 7, i;
    int* array1 = (int*) calloc(sizeof(int), size1);
    int* array2 = (int*) calloc(sizeof(int), size2);
    for ( i = 0; i < size1; i++)
    {
        *(array1 + i) = i;
    }
    for ( i = 0; i < size2; i++)
    {
        *(array2 + i) = i;
    }
    merge(size1, array1, size2, array2);
    for( i = 0; i < size1+size2; i++)
    {
        printf("%i\n",*(merge(size1, array1, size2, array2)+i));

    }
    //----------------------------------------------------------
printf("\n");
    // For checking function int isAnagram:
    int size3 = 4, size4 = 5;
    char* string1 = (char*) calloc(sizeof(char), size3);
    char* string2 = (char*) calloc(sizeof(char), size4);
    strcpy(string1, "abcd");
    strcpy(string2, "badc");

    isAnagram( size3, string1, size4, string2);
    printf("%i\n\n",isAnagram( size3, string1, size4, string2) );
    //----------------------------------------------------------

    free(array1);
    free(array2);
    free(string1);
    free(string2);
    getch();
    return 0;
}
void sortInt(int* array, int direction, int size)
{
    int i, j;
    if( direction == -1)
    {
        for(i = 0; i < size-1; i++)
        {
            int maxIndex = i;
            for(j = i+1; j < size; j++)
            {
                if(*(array + j) > *(array + maxIndex))
                {
                    maxIndex = j;
                }
            }
            int temp = *(array + i);
            *(array + i) = *(array + maxIndex);
            *(array + maxIndex) = temp;
        }
    }
    else if ( direction == 1)
    {
        for(i = 0; i < size-1; i++)
        {
            int minIndex = i;
            for(j = i+1; j < size; j++)
            {
                if(*(array + j) < *(array + minIndex))
                {
                    minIndex = j;
                }
            }
            int temp = *(array + i);
            *(array + i) = *(array + minIndex);
            *(array + minIndex) = temp;
        }
    }
}

char* sortChar( char* array, int size)
{
    int i, j, maxIndex, minIndex ;
    for(i = 0; i < size-1; i++)
    {
        int maxIndex = i;
        for(j = i+1; j < size; j++)
        {
            if(*(array + j) > *(array + maxIndex))
            {
                maxIndex = j;
            }
        }
        char temp = *(array + i);
        *(array + i) = *(array + maxIndex);
        *(array + maxIndex) = temp;
    }
}

int isAnagram( int n1, char* s1, int n2, char* s2 )
{
    if( strlen(s1) != strlen(s2))
        return 0;
    int i = 0, size = strlen(s1);
    sortChar( s1, size);
    sortChar( s2, size);
    if( strcmp(s1,s2) == 0)
        return 1;
    else
        return 0;
}

int* merge(int n1, int* a1, int n2, int* a2)
{
    if( n1 == 0 && n2 == 0)
        return NULL;
    int size, i = 0, j = 0, direction;
    size = n1 + n2;
    int* array = (int*) calloc(sizeof(int), size);
    for( i = 0, j = 0; i < size; i++ )
    {
        if( i < n1)
            *(array + i) = *(a1 + i);
        else
        {
            *(array + i) = *(a2 + j);
            j++;
        }
    }
    if( *(a1 + 0) > *(a1 + n1-1 ) || *(a2 + 0) > *(a2 + n2-1 ))
        direction = -1;

    else
        direction = 1;
    sortInt(array,direction,size);

    return array;
}
