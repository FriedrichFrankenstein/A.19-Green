#include <stdio.h>
#include <conio.h>
#include <math.h>

int Calc ( int A, int B, char oper){
    switch(oper){
    case '1': {
    return A - B;
    break;
    }
    case '2':{
    return A*B;
    }
    case '3':{
    return A/B;
    }
    default: {
    return A + B;
    }
    }

}
int main()
{
    int A, B;
    char Op;
    printf("Choose operation ( 1 - '-'; 2 - '*'; 3 - '/'; 4 - '+')\n");
    Op = getch();
    printf ("Enter 2 numbers: ");
    scanf("%i%i", &A, &B);
    printf("Result: %i",Calc (A, B, Op) );
    getch ();
    return 0;
}
