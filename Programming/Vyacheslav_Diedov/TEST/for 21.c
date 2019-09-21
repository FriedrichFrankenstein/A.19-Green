#include <stdio.h>
#include <conio.h>

int main(){
  
  int cena;
  int i;
do{
  scanf("%i", &cena);
}while(cena<=0);

  for(i=1;i<=10;i++) {
  
 printf("%i \n",i*cena );
}
  
  return 0;
  }
