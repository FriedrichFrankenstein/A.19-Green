#include <stdio.h>
int main()
{
   int n, i;
   printf("Imput number-");
   scanf("%i", &n);
   while (n>0){
   	i=n%10;
   	n=n/10;
   	printf ("%i\n", i);
   }
 return 0;
}
