#include <stdio.h>
#include <conio.h>

int main(void)
{
   float a,b,c;
   scanf("%f%f%f", &a, &b, &c);
   int count=0, k=0;
   while(a>=c){
   	a-=c;
   	printf("a=%.2f\n",a);
   	++count;
   	while(b>=c){
   		b-=c;
   		printf("b=%.2f\n", b);
   		k++;
	   while(count>=0){
	   	
	   }
	   }
	
   }
   printf("count=%i\n", count);
   return 0;
}
