#include <stdio.h>

main()
{
	int N; 
	int count=0; 

	printf ( "\n¬вед≥ть число N: " );
	scanf ( "%d", &N ); 
	while ( N != 0) 
	{ 	
		N /= 10;
		count ++; 
	}	
	printf ( "÷е число маЇ %d цифр\n", count );  
}
