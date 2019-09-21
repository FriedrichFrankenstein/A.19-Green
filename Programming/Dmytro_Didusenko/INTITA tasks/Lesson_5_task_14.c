#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void functionOne(char str1[], char str2[], int num1, int num2);
void functionTwo(char str1[], char str2[], int num1, int num2);

int main(){
	char str1[40], str2[40];
	int n1, n2;
	puts("Input the first string");
	gets(str1);
	puts("Input the second string");
	gets(str2);
	puts("Input the first number");
	scanf("%i", &n1);
	puts("Input the second number");
	scanf("%i", &n2);
	
	functionOne(str1, str2, n1, n2);
	functionTwo(str1, str2, n1, n2);	
	
	return 0;
}

void functionOne(char str1[], char str2[], int num1, int num2){
	char* s1 = &str1[0];
	char* s2 = &str2[0];
	char* string = (char*)malloc(80*sizeof(char));
	strncpy(string, s1, num1);
	s2 += strlen(s2) - num2;
	strcat(string, s2);
	puts(string);
}
void functionTwo(char str1[], char str2[], int num1, int num2){
	int i;
	char* s1 = &str1[0];
	char* s2 = &str2[0];
	char* string = (char*)malloc(80*sizeof(char));
	for(i=0; i<num1; i++){
		string[i] = s1[i];
	}
	s2 += strlen(s2) - num2;
	for(i=num1; i<(num1+num2); i++){
		string[i] = *(s2++);
	}
	string[num1+num2] = '\0';
	puts(string);
}
