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
	}
	
	for (n; n>0; n--){
	mn[n]-=	mn[n-1];
	printf("%i\n", mn[i]);
	}
    getch();
    return 0;
}
