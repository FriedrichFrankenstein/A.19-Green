#include <stdio.h>

main()
{
	int N; 
	int count=0; 

	printf ( "\n������ ����� N: " );
	scanf ( "%d", &N ); 
	while ( N != 0) 
	{ 	
		N /= 10;
		count ++; 
	}	
	printf ( "�� ����� �� %d ����\n", count );  
}
