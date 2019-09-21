#include <stdio.h>

void numInt( int i );

void numSum( int sum );

void numFloat( float f );

void numSumF( float sum );

void numFloatOnInt( int i );

void numFloatOnIntSum( int sum );

int main()
{
	int i, sumi;
	sumi = 0;
	float f, sumf;
	sumf = 0;
	FILE *myfileint = fopen("outputInt.txt", "w");
	FILE *myfilefloat = fopen("outputFloat.txt", "w");
	FILE *myfile = fopen("input.txt", "r");
    while (fscanf(myfile, "%f", &f)!=EOF){
    	i = f;
    	if( i == f){
    		numInt( i );
    		sumi += i;
		}else{
			numFloat( f );
			sumf += f;
		}
    }
    numSum( sumi );
    numSumF( sumf );
    close(myfile);
    close(myfileint);
    close(myfilefloat);
    myfile = fopen("input.txt", "r");
    sumi = 0;
    while (fscanf(myfile, "%f", &f)!=EOF){
    	i = f;
    	if( i != f){
    		numFloatOnInt( i );
    		sumi += i;
    	}
	}
    numFloatOnIntSum( sumi );
    close(myfile);
    printf("You need to see the file");
    return 0;
}

void numInt( int i ){
	FILE *myfileint = fopen("outputInt.txt", "a");
	fprintf(myfileint, "%i\n", i);
	close(myfileint);
}

void numSum( int sum ){
	FILE *myfileint = fopen("outputInt.txt", "a");
	fprintf(myfileint, "S = %i\n", sum);	
	close(myfileint);
}

void numFloat( float f ){
	FILE *myfilefloat = fopen("outputFloat.txt", "a");
	fprintf(myfilefloat, "%g\n", f);	
	close(myfilefloat);
}

void numSumF( float sum ){
	FILE *myfilefloat = fopen("outputFloat.txt", "a");
	fprintf(myfilefloat, "S = %g\nInteger parts: ", sum);
	close(myfilefloat);
}

void numFloatOnInt( int i ){
	FILE *myfilefloat = fopen("outputFloat.txt", "a");
	fprintf(myfilefloat, " %i ", i);
	close(myfilefloat);
}

void numFloatOnIntSum( int sum ){
	FILE *myfilefloat = fopen("outputFloat.txt", "a");
	fprintf(myfilefloat, "\nSc = %i ", sum);
	close(myfilefloat);
}
