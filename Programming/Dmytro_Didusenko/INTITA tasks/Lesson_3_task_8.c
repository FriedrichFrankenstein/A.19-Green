#include <stdio.h>

main(){

	int i, mas[5] = {24, 34, 86, 33, 90};
	int* p;     
	p = mas; 
	for (i=0; i<5; i++){
		printf ("%d ", *++p);
	}
	
}
