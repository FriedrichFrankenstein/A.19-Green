#include <stdio.h>
#include <conio.h>

int mul (int *newA, int *newB);

int main()
{
    int A, B, C;
    printf("Enter two number: ");
    scanf("%i %i", &A, &B);
    C = mul(&A, &B);
    printf("%i * %i = %i", A, B, C);
    getch();
	return 0;
}

int mul (int *newA, int *newB){
	
    return ++*newA*++*newB;

}
