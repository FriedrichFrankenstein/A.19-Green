#include <stdio.h>
#include <conio.h>
#include <math.h>


long int timeIntoSeconds (int hours, int minutes, int seconds){
    if (minutes > 61 || seconds > 61){
        printf("WRONG NUMBER!!!\n");
        return 0;
    }
    int long result;
    hours *= 60;
    minutes = (minutes + hours)* 60;
    return result = seconds + minutes;
}

int main (){
    int hours, minutes, seconds;
    printf("Enter time (hours, minutes, seconds): ");
    scanf("%i%i%i", &hours, &minutes, &seconds);
    printf("Result = %i", timeIntoSeconds(hours, minutes, seconds));
    getchar();
    return 0;
}
