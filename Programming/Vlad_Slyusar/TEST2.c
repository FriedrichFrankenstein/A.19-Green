#include <stdio.h> // підключаємо бібліотеку стандартних функцій вводу-виводу
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

float* test (float arr [20]);

int main()

{
    srand(time(NULL));
    int i;
    float arr[20], *newArr;
    for (i =0; i < 20; i ++){
        arr[i] = 15 - rand() % 30;
        printf("%i ", arr[i]);
    }
    printf("\n\n\n\n");
    newArr = test(arr);
    for (i = 0; i < 20; i ++){
        printf("%i ", newArr[i]);
    }
    getch();
    return 0;
}


float* test (int arr [20]) {
    int i, N = 0, k = 0, z = 0;
    int averageMinus = 0, averagePlus = 0, min = 10000;
    for ( i = 0; i < 20; i++){
        if ( arr[i] < 0){
            N++;
        }
    }
    int *arrMinus = (int*) calloc (sizeof(int), N);
 	  int *arrPlus = (int*) calloc (sizeof(int), 20-N);
    for ( i = 0; i < 20; i++){
        if ( arr[i] < 0){
            arrMinus [k] = arr[i];
            averageMinus += arrMinus[k];
            k++;
        } else {
            arrPlus [z] = arr[i];
            averagePlus += arrPlus [z];
            z++;
        }
    }
    printf("\norigin + = %i\n", averagePlus);
    printf("\norigin - = %i\n", averageMinus);
    averageMinus /= N;
    averagePlus /= 20 - N;
    printf("\nnew + = %i\n", averagePlus);
    printf("\nnew - = %i\n", averageMinus);
    printf("\nN = %i\n", N);
    for (i = 0; i < 20; i++){
        arr[i] = 0;
    }
    if ( abs(averageMinus) > averagePlus){
        for (i = 0; i < N; i++){
            if (abs(arrMinus[i] - averageMinus) < min){
                min = abs(arrMinus[i] - averageMinus);
            }
        }
        printf("\nminus min = %i\n", min);
         for (i = 0; i < N; i++){
            if (abs(arrMinus[i] - averageMinus) == min){
                arrMinus [i] = averageMinus;
            }
             arr[i] = arrMinus[i];
        }
    } else {
        for (i = 0; i <  20 - N; i++){
            if (abs(arrPlus[i] - averagePlus) < min){
                min = abs(arrPlus[i] - averagePlus);
            }
        }
        printf("\nplus min = %i\n", min);
         for (i = 0; i <  20 - N; i++){
            if (abs(arrPlus[i] - averagePlus) == min){
                arrPlus [i] = averagePlus;
            }
             arr[i] = arrPlus[i];
        }


    free(arrMinus);
    free(arrPlus);
    return arr;
}
}
































//    if ( abs(averageMinus) < averagePlus){
//        for (i = 0; i <  20 - N; i++){
//            if (abs(arrPlus[i] - averagePlus) < min){
//                min = abs(arrPlus[i] - averagePlus);
//            }
//        }
//        printf("\nplus min = %i\n", min);
//         for (i = 0; i <  20 - N; i++){
//            if (abs(arrPlus[i] - averagePlus) == min){
//                arrPlus [i] = averagePlus;
//            }
//             arr[i] = arrPlus[i];
//        }
//    } else {
//        for (i = 0; i < N; i++){
//            if (abs(arrMinus[i] - averageMinus) < min){
//                min = abs(arrMinus[i] - averageMinus);
//            }
//        }
//        printf("\nminus min = %i\n", min);
//         for (i = 0; i < N; i++){
//            if (abs(arrMinus[i] - averageMinus) == min){
//                arrMinus [i] = averageMinus;
//            }
//             arr[i] = arrMinus[i];
//        }
//    }
