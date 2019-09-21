#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10 // 

int main()
{
	int i=0,j, n,n1=0, *A;
	char c;
	FILE* fp; // 
    
    A=(int*)malloc(sizeof(int));
    fp = fopen( "input.dat", "wb+");
    do{
       printf("\nInput number: ");
       scanf("%d",A);
       i++;
       fwrite (A, sizeof(int), 1, fp );
       printf("Next? ESC - no, any key - yes");
       c=getch();
    }while(c!=27);
    printf("\n");   
    A=(int*)realloc(A,i*sizeof(int));
	fseek(fp,0,SEEK_SET);
 // rewind(fp);
	j=fread (A, sizeof(int),i, fp ); // 
    for(n=0;n<j;n++)
      printf("%d ",*(A+n));
    printf("\n");
	fclose (fp); // 
    //A=(int*)calloc(i,sizeof(int));
    //fread ( A, sizeof(int), i, fp ); // ???????? ????? ? ????
    //for(n=0;n<i;n++)
    //  printf("%d ",*(A+n));
	//
    //getchar();
	for ( n = 0; n < j; n ++ )
		A[n] = A[n] * 2;
    //fseek(fp,-sizeof(int)*j,SEEK_CUR);
 // ???????? ????????? ???? ?? ???????
	fp = fopen( "output.dat", "wb+" ); // відкрити двійковий файл на запис
	fwrite (A, sizeof(int), j, fp );
    rewind(fp);
    //fseek(fp,0,SEEK_SET);
    free(A);
    A=(int*)calloc(i+j,sizeof(int));
	n1=fread (A, sizeof(int),j+i,fp );
    printf("%d\n",n1);	 //
    for(n=0;n<j+i;n++)
      printf("%i ",*(A+n));
    printf("\nSize of file=%d",ftell(fp));
    printf("\nSizeof(A)=%d",_msize(A));
    fclose(fp);
    return 0;
}
