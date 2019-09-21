#include <stdio.h>
#include <conio.h>


int main()

{
    float num1, num2;
    int temp1, temp2;
    printf("Enter two float number: ");
    scanf("%f %f", &num1, &num2);
    temp1 = num1;
    temp2 = num2;
    char str [20];
    sprintf(str, "%d %d", temp1, temp2);
    puts(str);
    num1 = num2 = 0;
    sscanf(str, "%g %g", &num1, &num2);
    printf("num1 = %g, num2 = %g", num1, num2);
    getch();
    return 0;
}
