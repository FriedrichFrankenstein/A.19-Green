#include <stdio.h>

#include <string.h>

main()

{

char str1[50] = {"qwertyuiopasdfghjklzxcvbnm"};
char str2[5] = {"sdfgh"}; 
char *ps1, *ps2;
ps1 = &str1[0];
ps2 = &str2[0];
int **pos;
int num1, num2;
pos = (int**) malloc (2 * sizeof(int**));
num1 = strstr(ps1, ps2)-ps1;
*pos = &num1;
pos++;
num2 = num1 + strlen(ps2);
*pos = &num2;
pos;
printf("%d",  **pos);



/*
char* p; 

 

printf("Input main string: ");

gets(str1);

printf("Input sub-string: ");

gets(str2);

printf("Input target symbol: ");

scanf("%c",&symb);

p = strchr(str1,str2);

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
*//*
char *ps1, *ps2;
ps1 = &str1[0];
ps2 = &str2[0];
int **pos;
int num1, num2;
pos = (int**) malloc (2 * sizeof(int**));
num1 = strstr(ps1, ps2)-ps1;
*pos = &num1;
pos++;
num2 = num1 + strlen(ps2);
*pos = &num2;
return *pos;*/

}
