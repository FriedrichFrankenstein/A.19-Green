#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>





int main ()
{
    int i = 0, length = 0, goal = 0, j = 0, k = 0;
    int arr1 [] = {2, 4, 6, 8, 10, 12};
    int arr2 [] = {3, 6, 9, 12};
    int arr3 [] = {4, 6, 8, 10, 12};
//    if (arr1 < arr2 && arr1 < arr3){
//        length = sizeof(arr1)/4;
//    } else if (arr2 < arr3) {
//        length = sizeof(arr2)/4;
//    } else {
//        length = sizeof(arr3)/4;
//    }
//    for ( i = 0; i < length; i++){
//        if ( arr1[i] == arr2 [i] && arr2[i] == arr3[i]){
//
//                goal = arr1 [i];
//
//        }
//    }w
    while ( 1 )
    {
        if ( arr1[i] == arr2 [j] && arr2[j] == arr3[k] )
        {
            goal = arr1 [i];
           break;
        }
        else if ( arr1 [i] <= arr2 [j] && arr1[i] <= arr3 [k] )
        {
            i++;
            printf("i = %i\n",i );
        }
        else if ( arr2 [j] <= arr1 [i] && arr2[j] <= arr3 [k] )
        {
            j++;
        }
        else if ( arr3 [k] <= arr1 [i] && arr3[k] <= arr2 [j] )
        {
            k++;
        }
    }
//    printf("i = %i; j = %i; k = %i", i, j , k);
    printf ( "result = %i", goal );
    getchar();
    return 0;
}
