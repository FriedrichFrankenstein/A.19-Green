#include <stdio.h>

main(){
int a, b, c, i; 
printf ( "Input \n" ); 
for( i = 0; i < 2; i++){
       switch(i){
              case 0: scanf("%i", &a); 
			  						break;
              case 1: scanf("%i", &b); 
			  						break;
    }
}
c = a + b; 
printf ( "Result: %d + %d = %d \n", a, b, c ); 
getchar(); 
}
