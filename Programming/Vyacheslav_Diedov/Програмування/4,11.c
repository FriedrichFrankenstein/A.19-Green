#include <stdio.h>

int NumNum(int arr[20], int sn, int i, int count);

int main(){
	int arr[20] = {1,2,3,1,4,4,5,1,6,7,8,9,2,5,1,1,2,3,4,5};
	int sn, i = 0, count = 0;
	printf("Input search number = ");
	scanf("%i", &sn);
	count = NumNum(arr, sn, i, count);
	return 0;
}

int NumNum(int arr[20], int sn, int i, int count){
	if ( i < 20){
		if( sn == arr[i] ) count++;
		printf("%i\n", count);
		NumNum( arr, sn , i + 1, count );
	}
	return count + 1;
}
