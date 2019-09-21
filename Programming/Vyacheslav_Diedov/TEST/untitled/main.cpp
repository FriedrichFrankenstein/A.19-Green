#include <stdio.h>
#include <conio.h>
void checkEvenOrOdd(int num){
    if(num == 0){
        printf("ZERO");
    } else if(num%2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }
}

int main()
{
    int number;
    scanf("%i", &number);
    checkEvenOrOdd(number);

    getch();
    return 0;
}
