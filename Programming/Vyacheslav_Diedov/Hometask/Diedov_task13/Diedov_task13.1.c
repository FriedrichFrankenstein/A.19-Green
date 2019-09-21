#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct
{
    int length;
    int width;
}Rectangle;

typedef struct
{
    int radius;
}Circle;

typedef struct
{
    float a;
    float b;
    float c;
}Triangle;

int getRectangleSquare(Rectangle rectangle);

float getCircleSquare(Circle circle);

float getTriangleSquare(Triangle triangle);

int main()
{
    Rectangle rectangle = {10, 20};
    Circle circle = {5};
    Triangle triangle = {3.2, 5.1, 7.9};

    int square = getRectangleSquare(rectangle);
    float circleSquare = getCircleSquare(circle);
    float triangleSquare = getTriangleSquare(triangle);
    

    printf("Trigle square = %i\n", square);
    printf("Circle square = %g\n", circleSquare);
    printf("Triangle square = %g\n", triangleSquare);

    return 0;
}
int getRectangleSquare(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}
float getCircleSquare(Circle circle){
    return PI * circle.radius * circle.radius;
}

float getTriangleSquare(Triangle triangle){
	float p;
	p = (triangle.a + triangle.b + triangle.c) / 2;
	return sqrt((p) * (p - triangle.a) * (p - triangle.b) * (p - triangle.c));
	
}


