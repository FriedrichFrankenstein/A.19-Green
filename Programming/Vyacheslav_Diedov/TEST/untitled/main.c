#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int number = rand()%101;
    int temp;
    for(;;){
        scanf("%i",&temp);
        if(temp < number) {
            printf("more");
        } else if(temp > number){
            printf("less");
        }
        if(temp == number){
            printf("You won!!!");
            break;
        }
    }
    getch();
    return 0;
}
