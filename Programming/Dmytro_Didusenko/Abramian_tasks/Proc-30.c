#include <stdio.h>
#include <conio.h>
#include <math.h>

int digitN(int K, int N){
	int i, amountNum=0, res;
	while(K>0){
		K /= 10;
		amountNum++;
	}
	//printf("%i\n", amountNum);
	if(amountNum<N) return -1;
	for(i=1; i<=amountNum; i++){
		res = K/pow(10, amountNum-1);
		amountNum--;
	}
}
int main(){
	printf("Input your integer number and number of digit\n");
	int K, N;
	scanf("%i%i", &K, &N);
	
	int result = digitN(K, N);
	printf("Your digit - %i", result);
	
	getch();
	return 0;
}
