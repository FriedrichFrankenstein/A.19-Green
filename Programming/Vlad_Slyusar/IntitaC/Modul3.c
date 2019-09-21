#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define Z 50

void divNum (int N, int counter, int numbers [Z]);

int NSymbol (int counter, int K, int numbers [Z]);

int main()
{
    int N, temp, counter = 0, numbers [Z], K;
    do{
    printf("Enter N number: ");
    scanf("%i", &N);
    if ( N < 0) {
            printf("Error! Number have to be positive");
            continue;
    }
    temp = N;
    do{
        temp /= 10;
        counter++;
    }  while (temp != 0);
    divNum(N, counter, numbers);
    printf("Enter number K:");
    scanf("%i", &K);
    if ( K <= counter){
        printf("Result: %i", NSymbol (counter, K, numbers));

    } else{
        printf("K is too long");
    }
    break;
    }while(1);
    getch();
    return 0;
}

void divNum (int N, int counter, int numbers [Z]){
    int i;
    for (i = 0; i < counter; i ++ ){
        numbers[i] = N % 10;
        N /= 10;
    }

}

int NSymbol (int counter, int K, int numbers [Z]){
    int i;
    for (i = 0; i < counter; i++){
            if ( counter - K == i)
            {
                return numbers[i];
            }
}

}
