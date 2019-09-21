#include <stdio.h>
int main(void)
{
   float p, s;
   printf("p:");
   scanf ("%f", &p);
   float vk=1100;
   p=p/100;
   int count=0;
   while (s<=vk){
   	s+=vk*p;
   	count++;
   	printf("Sum=%.2f\nMonth=%i\n", s, count);
   }
 return 0;
}
