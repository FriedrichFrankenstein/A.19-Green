#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int prost(int N)
{int i, j;


    for ( i=7; i<N; i++)
    {
        for ( j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                return i;
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N, i, j, k;
    while(1)
    {
        scanf("%i",&N);
        if(N<1)
            printf("Число N має бути > 0.Спробуйте ще раз!\n\n");
        else
            break;
    }

 for(i = 0; i< N; i++)
      {
          if((i%2==0 || i%5==0 || i%3==0) && i%prost(N)!=0 )
          {
              printf("%i ", i);
          }

      }
    return 0;
}
