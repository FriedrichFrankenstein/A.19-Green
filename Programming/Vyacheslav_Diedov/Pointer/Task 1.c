#include <stdio.h>
#include <time.h>

int main(){
	char cr;
	do{
	srand(time(NULL));
	int m, i;
	int *p;
	printf("Imput m=");
	scanf("%i", &m);
	p = (int*)malloc(m*sizeof(int));
	
	for(i = 0; i < m; i++ ){
	printf("a[%i]=%p\n",i,p++);
	}
	
	p = p - m;
	
	for(i = 0; i < m; i++){
	*p = rand()%50;
	printf("Pointer %i = %i\n", i+1, *p);
	p++;
	}
	
	p = p - m;
	
	for(i = 0; i < m; i++){
	*p+=i;
	printf("Pointer %i = %i\n", i+1, *p);
	p++;
	}
	printf("To repeat, press 1 \nTo finish, type any second digit\n");
	scanf("%c", &cr);
	}while(cr=='q');
	
	return 0;
}
