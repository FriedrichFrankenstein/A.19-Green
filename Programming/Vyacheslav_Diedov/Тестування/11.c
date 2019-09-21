#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void DivBy3(FILE *fp);

int main(){
	FILE* input = fopen ( "recount.txt", "r" );
 	DivBy3 ( input );
}

void DivBy3(FILE *fp)
{
	FILE *re;
	int i,n,j,a=0,l,sum=0;
	char c;
	int inputError;
	int lCounts = 0;
	char ch[256][256];
	while(inputError != EOF)
	 {
    inputError = fscanf(fp, "%s", ch+lCounts);
    lCounts++;
	}
	fclose(fp);
	re = fopen("result.txt", "w");
	c='0';
	for (i=0;i<lCounts-1;i++)
	{	
		n=strlen(ch[i]);

		for (j=0;j<n;j++)
		{
			l=(-1)*(c-ch[i][j]);
			sum+=l;
		}
		printf("%i\n", sum);
		if(sum%3==0)
		{
			fprintf (re, "%i\n",1);
		}
		else
		{
			fprintf (re, "%i\n",0);
		}
		sum=0;
	}
	fclose(re);
}
    
