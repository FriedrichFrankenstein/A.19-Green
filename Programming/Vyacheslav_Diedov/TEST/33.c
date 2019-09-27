#include <stdio.h>

main()
{
	int N, sum;

	sum = 0;
	do {
		printf ( "\n¬вед≥ть натуральне число" ); 
		scanf ( "%d", &N ); 
	}
	while ( N <= 0 ); 
	while ( N > 0 ) {
		sum += N % 10; 
		N /= 10; 
	}
	printf ( "—ума цифр цього числа дор≥внюЇ %d\n", sum ); 

}
