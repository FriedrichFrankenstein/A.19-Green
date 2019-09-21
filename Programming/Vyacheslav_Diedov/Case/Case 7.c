#include <stdio.h>
#include <conio.h>

int main()
{
    float num2, mass;
    int num1;
    printf("Enter unit= ");
    scanf("%i", &num1);
    printf("Enter mass= ");
    scanf("%f", &num2);
    switch(num1){
        case 1: mass=num2;
                    break;
        case 2: mass=num2*1000000;
                        break;
        case 3: mass=num2*1000;
                        break;
        case 4: mass=num2*0.001;
                        break;
        case 5: mass=num2*0.01;
                        break;
        default : printf("incorrect");
    }
	printf("%f", mass);
    getch();
    return 0;
}
