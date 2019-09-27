#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("n:");
    scanf("%i",&n);
    int mn[n], i, count=0;
	for(i=0;i<=n;i++){
		mn[i]=i;
		if (mn[i]%2!=0){
			printf("odd:%i\n", mn[i]);
			count ++;
		}
	}
	printf("Count=%i", count);
    getch();
    return 0;
}
