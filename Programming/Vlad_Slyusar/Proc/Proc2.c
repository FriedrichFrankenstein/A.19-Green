#include <stdio.h>
#include <conio.h>
#include <math.h>

void PowerA3 ( float a, float *pa, float *pb, float *pc){
    *pa = pow (a, 2);
    *pb = pow(a, 3);
    *pc = pow (a, 4);


}
int main()
{
    float a, b, c, d, i;
    float *pa = &a, *pb = &b, *pc = &c ;
    for ( i = 0; i < 5; i++){
        printf("Enter number for power: ");
        scanf("%f", &a);
        PowerA3(a, pa, pb, pc);
        printf("Result: to 2 = %g; to 3 = %g; to 4 = %g\n", *pa, *pb, *pc );
    }

    getch ();
    return 0;
}
