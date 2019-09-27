#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	int i;
	char arr[] = {'s', 'g', 'k', 'y', 'h'};
    int len = sizeof(arr)/sizeof(char);
    int flag = 0;
    for( i = 0; i < len-1; ){
        if(arr[i] > arr[i+1]){
            char temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            flag = 1;
        }
        i++;
        if(flag == 0 && i == len-1) break;
        if(i == len-1)  {
            i = 0;
            flag = 0;
        }
    }
    for( i = 0; i < len; i++){
        printf("%c", arr[i]);
    }
	return 0;
}
