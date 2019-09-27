//Дано довжина ребра куба a. Знайти обєм куба V=a*a*a і площу поверхні S=6*a*a.
#include <conio.h>
#include <stdio.h>
#include <math.h>

float sideCube(float a,float cube)
{
float summa=pow(a,cube);
return summa;
}

float sqeareCube(float a,float sqeare)
{
float summa=6*(pow(a,sqeare));
return summa;
}

float main ()
{
	float a, cube,sqeare;
	printf("Enter the length-");
	scanf("%f",&a);
	cube=3;
	float V;
	V=sideCube(a,cube);
	sqeare=2;
	float S;
	S=sqeareCube(a,sqeare);
	printf("Side cube-%.2f\nSqear cube-%.2f",V,S);
	return 0;
	getch();
}
