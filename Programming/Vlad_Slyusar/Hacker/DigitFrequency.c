#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input [1000] = {};
    int array [10] = {}, i, h;
    scanf("%s", &input);
    for ( i = 0; i < 1000; i++){
            h = input [i];
        if ( h == 0){
            break;
        }
        switch (input[i]){
            case '0': {
                array [0] ++;
                break;
            }
            case '1': {
                array [1] ++;
                break;
            }
            case '2': {
                array [2] ++;
                break;
            }
            case '3': {
                array [3] ++;
                break;
            }
            case '4': {
                array [4] ++;
                break;
            }
            case '5': {
                array [5] ++;
                break;
            }
            case '6': {
                array [6] ++;
                break;
            }
            case '7': {
                array [7] ++;
                break;
            }
            case '8': {
                array [8] ++;
                break;
            }
            case '9': {
                array [9] ++;
                break;
            }
        }
    }

    for ( i = 0; i < 10; i++){
       printf("%i ", array[i]) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
