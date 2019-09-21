#include <stdio.h>
#include <conio.h>


int main()
{
    int n, i, a;
    printf("N:");
    scanf("%i", &n);
    while(n>0){
    	i=n%10;
	if (i%2!=0){
		a=1;break;
	}else{
		a=2;
	}
	n=n/10;
}
if (a==1){
	printf("TRUE");
}else{
	printf("FALSE");
}
    getch();
    return 0;
}
