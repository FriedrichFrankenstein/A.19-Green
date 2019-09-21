#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int i, wrong, counter = 0;
    int arr [17] = {1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7};
    for ( i = 0; i < 17; i++ )
    {
        if ( arr[i] == arr[i+1]+1 && arr[i] != arr[i+2]+1){

        }

    }
    printf("%i", wrong);
    getch();
    return 0;
}


