#include <stdio.h>

#include <string.h>

main()

{

char str1[50], str2[5]; 

char symb;

char* p; 

 

printf("Input main string: ");

gets(str1);

printf("Input sub-string: ");

gets(str2);

printf("Input target symbol: ");

scanf("%c",&symb);

p = strchr(str1,symb);

if (p!=NULL) { 

printf("First symbol %c: number %d \n", symb, p - str1);


p = strrchr(str1, symb); 


printf("Last symbol %c: number %d \n", symb, p - str1);

}

else printf("There is not symbol %c in our main string", symb);

p = strstr(str1,str2); 

if (p!=NULL) 

printf("There is substring %s in our main string", str2);

else printf("There is not substring %s in our main string", str2);

}
