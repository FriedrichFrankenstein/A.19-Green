#include <stdio.h>
#include <math.h>
int main (){
	int segmentA, segmentB, numberOfSegments;
	printf ("Enter 2 integer numbers: ");
	scanf ("%i%i", &segmentA, &segmentB);
	if (segmentA > segmentB && (segmentA % segmentB == 0) && segmentB != 0 )
	{
		numberOfSegments = segmentA / segmentB;
		printf ("Result: %i", numberOfSegments);
	}
	else {
		printf ("Wrong numbers!");
	}
	getchar;
	return 0;
	
	
	
}
