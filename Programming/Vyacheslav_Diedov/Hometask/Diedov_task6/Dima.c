#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <string.h>

void floatPointedNumbersIntoArray(){
  int i, j, numAmountFul=0, sizeIntArr;
  char str[10];
  printf("Input float pointed number and press \"Enter\" button \n");
  scanf("%s", str); 
  int numSize =strlen(str);
  for(i=0; i<numSize; i++){
    if(str[i] != '.'){
      numAmountFul++;
      sizeIntArr = 1;
    } 
    else{
      sizeIntArr = 2;
      break;  
    } 
  }
  int* intArr = (int*)calloc(sizeIntArr, sizeof(int));
  j = numAmountFul - 1;
  for(i=0; i<numAmountFul; i++){
    intArr[0] += (str[i]-48) * pow(10, j);
    j--;
  }
  j = (numSize - 1) - numAmountFul - 1;
  for(i=numAmountFul+1; i<numSize; i++){
    intArr[1] += (str[i]-48) * pow(10, j);
    j--;
  }
  printf("Array of devided integers: ");
	}

int main(){
	floatPointedNumbersIntoArray();
	return 0;
}
