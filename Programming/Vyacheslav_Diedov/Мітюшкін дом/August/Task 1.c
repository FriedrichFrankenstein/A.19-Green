//Task 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void ta90(int el, float val, float* a, float* b, float* h, float* S);

void knownCatheter(float val, float* a, float* b, float* h, float* S);

void knownHypotenuse(float val, float* a, float* b, float* h, float* S);

void knownHeight(float val, float* a, float* b, float* h, float* S);

void knownArea(float val, float* a, float* b, float* h, float* S);

void invalidData(float val, float* a, float* b, float* h, float* S);

int main(){
	int el;
	float val, a, b, h, S;
	printf("Input element - ");
	scanf("%i", &el);
	printf("Input value - ");
	scanf("%f", &val);
	ta90 ( el, val, &a, &b, &h, &S );
	printf("\nCatheter a = %g\nHypotenuse b = %g\nHeight h = %g\nArea S = %g", a, b, h, S);	
	return 0;
}

void ta90(int el, float val, float* a, float* b, float* h, float* S){
	if(val <= 0){
		invalidData(val, a,b, h, S);
	}else{
		switch(el){
			case 1: knownCatheter(val, a, b, h, S);
				break; 
			case 2: knownHypotenuse(val, a, b, h, S);
				break;
			case 3: knownHeight(val, a, b, h, S);
				break;
			case 4: knownArea(val, a, b, h, S);
				break;
			default: invalidData(val, a,b, h, S);
	}
}
}

void knownCatheter(float val, float* a, float* b, float* h, float* S){
	*a = val;
	*S = pow ( val , 2 ) / 2;
	*b = *a * sqrt ( 2 );
	*h = (*a * sqrt ( 2 )) / 2;
}

void knownHypotenuse(float val, float* a, float* b, float* h, float* S){
	*b = val;
	*a = *b * sqrt ( 2 ) / 2;
	*h = *b / 2;
	*S = pow ( *b, 2 ) / 4;
}

void knownHeight(float val, float* a, float* b, float* h, float* S){
	*h = val;
	*b = 2 * ( *h );
	*a = *h * sqrt ( 2 );
	*S = pow ( *h,2 );
}

void knownArea(float val, float* a, float* b, float* h, float* S){
	*S = val;
	*a = sqrt (2 * ( *S ));
	*b = 2 * sqrt ( *S );
	*h = sqrt (*S);
}

void invalidData(float val, float* a, float* b, float* h, float* S){
	*a = *b = *h = *S = -1;
}

