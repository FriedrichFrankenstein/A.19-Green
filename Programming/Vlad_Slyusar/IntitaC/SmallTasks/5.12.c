#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX 100
int* test (char str1[10], char str2[5]);

int main()
{
    char str1[MAX] = "agfdsgsdfgdfgkgmdlfskgm ldfglk mdsflkaaszzzhaa";
    char str2[MAX] = "fdsgsdfgdfg";
    int *res;
    res = test(str1, str2);
    printf("%i %i", res[0], res[1]);
    getch();
    return 0;
}


int* test (char str1[11], char str2[6]) {
    int *pos = (int *) calloc (sizeof(int), 2);
    char *s1, *s2, *s3;
    s1 = &str1[0];
    s2 = &str2[0];
   	s3 = strstr(s1, s2);
   	if (s3 == 0){
        return pos;
   	}
   	printf("%p", s3);
    pos[0] = s3 - s1;
    printf("len = %i\n", strlen(s2));
   // pos[1] =  pos[0] + strlen(str2)  - 1;
    pos[1] = (s3 + strlen(s2)) - s1 - 1;
    return pos;
}
//
//{
//    int *pos = (int *) calloc (sizeof(int), 2);
//    char *ps1, *ps2, *s3;
//    ps1 = &str1[0];
//    ps2 = &str2[0];
//   	s3 = strstr(ps1, ps2);
//    pos[0] = s3 - ps1;
//    pos[1] =  pos[0] + sizeof(str2)  - 1;
//    return pos;
//}


