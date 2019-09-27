#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *myb = fopen ( "output.dat", "wb" );
	int a, i;
	a = 1;
	for ( i = 1; i < 100; i++){
		a = i;
		fwrite ( &a, sizeof(int), 1, myb);
	}
	freopen ( "output.dat", "rb", myb );
	fread ( &a, sizeof ( int ), 1, myb );
	printf ( "%i\n", a );
	fseek(myb, (int)sizeof(a) * sizeof(a) , SEEK_CUR);
	fread ( &a, sizeof ( int ), 1, myb );
	printf ( "%i\n", a );
	fseek(myb, (int)sizeof(a) * sizeof(a) , SEEK_SET);
	fread ( &a, sizeof ( int ), 1, myb );
    printf ( "%i\n", a );
    fseek(myb, -(int)sizeof(a) * (int)sizeof(a) , SEEK_CUR);
	fread ( &a, sizeof ( int ), 1, myb );
	printf ( "%i\n", a );
	fclose(myb);
    return 0;
}
