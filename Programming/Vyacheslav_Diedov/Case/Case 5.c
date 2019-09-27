#include <stdio.h>
#include <conio.h>

int actionNumbars(int action, int num1, int num2, int s)
{
	 switch(action){
        case 1: s=num1+num2;
                        break;
        case 2: s=num1-num2;
                        break;
        case 3: s=num1*num2;
                        break;
        case 4: s=num1/num2;
                        break;
        default : printf("incorrect");
        
		return s;
    }
}

int main()
{
    int N, a, b, x, s;
    printf("Enter action= ");
    scanf("%i", &N);
     printf("Enter a= ");
    scanf("%i", &a);
     printf("Enter b= ");
    scanf("%i", &b);
    if (b==0){
   	printf("B != zero");
	}
	else{
	x=actionNumbars(N, a, b, s);
	printf("%i", x);
	}
    getch();
    return 0;
}
