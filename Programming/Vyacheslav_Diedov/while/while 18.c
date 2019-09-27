#include <stdio.h>
int main()
{
   int n, i, count;
   printf("Imput number-");
   scanf("%i", &n);
   while (n>0){
   	i+=n%10;
   	n=n/10;
   	printf("Sum=%i\nK=%i\n", i, count++);
   }
 return 0;
}
