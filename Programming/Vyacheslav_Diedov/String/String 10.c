#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main(){
	char ch[20] = {}; 
	printf("Input English word - ");
	scanf("%s", &ch);
	int i, j=0;
	char bch[20] = {};
	for(i = 19; i >= 0; i--){
		if( ch[i] >= 'a' && ch[i] <= 'z'){
			bch[j] = ch[i];
			j++;
		}
	}
	for(i = 0; i < 20; i++){
		if(bch[i] >= 'a' || bch[i] <= 'z'){
			printf("%c\n", bch[i]);
		}
	}
	return 0;
}

