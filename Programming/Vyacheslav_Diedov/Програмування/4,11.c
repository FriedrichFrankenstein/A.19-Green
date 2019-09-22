#include <stdio.h>

int NumNum(int arr[20], int sn, int i );

int main(){
	
	int arr[20] = {1,2,3,1,4,4,5,1,6,7,8,9,2,5,1,1,2,3,4,5};
	int sn, i = 0, count = 0;
	printf("Input search number = ");
	scanf("%i", &sn);
	count = NumNum(arr, sn, i);
		printf("Count = %i\n", count);
	return 0;
}

int NumNum(int arr[20], int sn, int i){
	if ( i == 20) return 0;
		if( sn == arr[i] ){
		return 1 + NumNum( arr, sn , i + 1 );
		}
	return NumNum( arr, sn , i + 1 );
}
