#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
}Point;

typedef struct
{
    Point AB;
    Point BC;
    Point CD;
    Point DE;
}Line;

float theLengthOfTheSegment(Line line);

int main()
{
    Line line = {{2, 2}, {-2, 2}, {-2, -2}, {-5, 1}};
    float length = theLengthOfTheSegment(line);
    printf("The length of the segment = %g", length);
    return 0;
}

float theLengthOfTheSegment(Line line){
	float a, b, c;
    a = (float) sqrt(pow((line.BC.x-line.AB.x),2) + pow((line.BC.y-line.AB.y),2));
    b = (float) sqrt(pow((line.CD.x-line.BC.x),2) + pow((line.CD.y-line.BC.y),2));
    c = (float) sqrt(pow((line.DE.x-line.CD.x),2) + pow((line.DE.y-line.CD.y),2));
    return a + b + c;
}
