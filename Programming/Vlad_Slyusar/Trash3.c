#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>

int func (int i){
    if (i == 10){
        return i;
    }
    else
    {
        func(++i);
       if (i == 10)
        return 5;
    }
}

int main()

{
    printf("Result = %i", func(1));
    getch();
    return 0;
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
