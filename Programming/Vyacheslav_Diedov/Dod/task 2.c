#include <stdio.h>
#include <conio.h>

int main()
{
	int masiv[]={1, 2, 3, 4, 5};
	int i, n;
	for (i=4;i>0;i--){
		masiv[i]-=masiv[i-1];
		printf("Masiv[n]=%i\nMasiv[i]=%i\n", masiv[n],masiv[i]);
		}
    return 0;
}
