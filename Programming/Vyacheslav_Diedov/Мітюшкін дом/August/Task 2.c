//Task 2
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cif3 ( int min, int max ) ;

int main(){
	int min, max, count;
	printf ( "Imput min - " );
	scanf ( "%i", &min );
	printf ( "Imput max - " );
	scanf ( "%i", &max );
	count = cif3 ( min, max );
	printf ( "\nCount = %i", count );
	return 0;
}

int cif3 ( int min, int max ) {
	int i, j, n, count, count2, count3 = 0, count4 = 0;
	for( i = 100, count = 100; i < 1000; i = i + 100 ){
		count++;
		count2 = i;
		count3 +=110;
		for( j = 0 ; j < 100; j = j + 10 ){
			for( n = 0; n < 10 ; n++ ){
				if(( i + j ) == count3 ) break;
					if( (i + j + n) != count && (i + j + n) != count2 ){
						if( (i + j + n) >= min && (i + j + n) <= max ){
							printf ( "%i ", i + j + n );
							count4++;
					}
				}
			}
			count += 10;
			count2 += 11;
		}
	}
	if ( count4 == 0 ){
		return count4 - 1;
	}else{
		return count4;
	}
}

