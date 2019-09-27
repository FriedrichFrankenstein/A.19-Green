#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int myStrcat(char *str1, char *str2);

int main(){
	char *str1 = "Vlad";
	char *str2 = "Max";
	myStrcat(str1, str2);
	printf("%s", *str1);
    return 0;
}	

int myStrcat(char *str1, char *str2){
	int len1, len2;
	len1=myStrlen(str1);
	len2=myStrlen(str2);
	char *str = (char*)malloc(len1+len2 + 1);
	int i, j;
	
	for( i = 0; i < len1; i++){
		str1[i]= str[i];
	}
	
	for( j = 0; j < len2; j++, i++){
		str2[j]= str[i++];
	}
	
	str[i]='\0';
	str1=str;
	
	return 0;	
	}

		
