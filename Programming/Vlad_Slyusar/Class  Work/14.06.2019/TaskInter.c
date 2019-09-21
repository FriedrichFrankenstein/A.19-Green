#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main (){
int i, number = 0, j, sum, counter = 0;
for (i = 1000; i < 9999; i++){
     number  = i;
     for ( j = 0; number > 0; j ++){
        sum += number % 10;
        number /= 10;
     }
     if ( sum == 15){
        printf("%i\n", i);
        counter++;
     }
     sum = 0;
}
printf("\n%i\n", counter);
getchar();
return 0;
}
