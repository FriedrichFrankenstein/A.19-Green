#include <stdio.h>

int main(){
	int d1, d2, i , j, r;
	float p;
	i = 0;
	while ( i < 1 ){
		printf("Input d1 = ");
		scanf("%i", &d1);
		printf("Input d2 = ");
		scanf("%i", &d2);
			if ( d2 == 0 || ( d1 == 0 && d2 == 0 ) ){
				printf( "Error d1 = 0 or d2 = 0\n");
				continue;
			}	
		p = ( float ) d1 / d2;
		r = d1 % d2;
		switch ( r ){
			case 1 :
				for ( i = 0; i < d2; i++){
					printf ( "privacy = %g\n", p);
				}
				printf( "the remainder of their division = %i" , r);
				break;
			case 2 : 
				while ( i < d2 ){
					printf ( "privacy = %g\n", p);
					i++;
				}
				printf( "the remainder of their division = %i" , r);
				break;
			case 3 :
				do{
					printf ( "privacy = %g\n", p);
					i++;
				}while( i < d2 );
				printf( "the remainder of their division = %i" , r);
				break;
			default:
				i = 0 ;
				break;
		}
	}	
	return 0;
}
