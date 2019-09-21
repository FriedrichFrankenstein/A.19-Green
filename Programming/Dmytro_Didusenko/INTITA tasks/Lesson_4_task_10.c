#include <stdio.h>

void Natural(int n);

int main(){
	
	int n = 1;
	
	Natural(n);
	
	return 0;
}

void Natural(int n){
	
	printf("%i\n", n);
	
	n++;
	
	if(n <= 10){  	// 10 - граничне значення
		Natural(n);
	}
	else return;
}
