#include <conio.h>
#include <stdio.h>
#include <math.h>

void math();

int main ()
{
	math();
}

void math(){
	float y;
	int i;
	for ( i = 0; i < 10; i++){
		if((pow(2, i) * i - 4 * i )==0){
			printf("ERROR\n");
		}else{
			y = (pow(2, fabs(4*i-6))-pow(4, fabs(3*i-4))+pow(2, i)*i-4*i)/(pow(2, i) * i - 4 * i );
			printf("%.2f\n", y);	
		}
		
		
		
	}
}
