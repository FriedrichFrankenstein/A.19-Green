#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

int const n=9;

void init(int a[n][n])//inicializacia tablici(prisvaivaem 0)
{
int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        a[i][j]=0;
}

int unic(int a[n][n],int ci,int cj,int k)//unicalnost v stroke,stolbze i diagonali
{
int i,j,f=0;
    for(i=1;i<=n;i++)
        if(a[i][cj]==k) f++;
            for(j=1;j<=n;j++)
                if(a[ci][j]==k) f++;
    if(ci==cj)
    {
        for(i=1;i<=n;i++)//glavnaia diagonal
            if(a[i][i]==k) f++;
    }
        else
            if(cj==n-ci+1)
            {
                for(i=1;i<=n;i++)//pobochnaia diagonal
                    if(a[i][n-i+1]==k) f++;
            }
return f;
}

void rec(int a[n][n],int i,int j)//recursia dlia zapolnenia tablici
{
int it,jt,fl,num;
    for(it=i;it<=n;it++)
    {
        for(jt=j;jt<=n;jt++)
        {
        num=random(9)+1;
        fl=unic(a,it,jt,num);
                if(fl==0)//esli sovpadenii net
                {
                a[it][jt]=num;
                printf("%i", a[it][jt]);
                if(jt==9) printf("\n");
                }
                    else//ecli est sovpadenia, to vozvrashemsia k
                                                        //predidushei iacheike
                    {
                        if(jt==1&&it>1)
                            rec(a,it-1,jt+8);
                                else
                                rec(a,it,jt-1);
                    }

        }
    }
}

int main()
{

clrscr();
randomize();
int s[n][n];
int i,j;
init(s);
srand(time(NULL));
s[1][1]=random(9)+1;
rec(s,1,2);
getch();
return 0;
}
