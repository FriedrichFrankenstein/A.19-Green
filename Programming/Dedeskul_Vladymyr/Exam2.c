#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define n1 15
#define n2 15

int isAnagram(int N1, char *s1, int N2, char *s2);


int main (){
	char s1[n1];
	char s2[n2];
	printf ("Input your text:");
	gets (s1);
	printf ("Input text to compire: ");
	gets (s2);
	
	int result = isAnagram(n1, s1, n2, s2);
	printf ("%i", result);
	return 0;
}


 int isAnagram(int N1, char *s1, int N2, char *s2){
 	int size = N1;
 	int cout[size];
 	int cout1[size];
 	int i=0, j=0, y=0;
 	int count=0, count1=0;
 	int flag;
 	char save;
	 	
	 	
 	if (strlen(s1)==strlen(s2)){
 		for (i=0;i<strlen(s1);i++){
 			flag=0;
 			count=0;
 			count1=0;
 			for (j=0;j<strlen(s2);j++){
 				if (s1[i]==s2[j]){
 					flag=1;
 					break;
			 	}
			 }
				if (flag==0){
					return 0;
				} 
			save = s1[i];
			for (y=0;y<strlen(s1);y++){
				if (s1[y]==save){
		 			count++;
				}
			}
			
			for (y=0;y<strlen(s2);y++){
				if (s2[y]==save){
		 			count1++;
				}
			}
			if (count!=count1){
				return 0;
			}
	 }
	 return 1;
 }
 return 0;
}
