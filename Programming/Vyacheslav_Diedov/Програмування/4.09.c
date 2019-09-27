#include <stdio.h>
#include <stdlib.h>

int main(){
float arr[20] = {1,-1,100,1,-1,-1,-1,-1,100,1,100,1,-1,100,1,-1,100,-1,-100,51};
int N, i, j;
float p, n, min, temp;
N = 0;
for ( i = 0; i < 20; i++){
    if ( arr[i] < 0 ){
        N++;
    }
}
float *pos, *neg;
pos = (float*)malloc((20 - N) * sizeof(float*));
neg = (float*)malloc( N * sizeof(float*));
for ( i = 0; i < 20; i++){
    if ( arr[i] < 0 ){
        *neg = arr[i];
        n -= *neg;
        neg++;
    }else{
        *pos = arr[i];
        p += *pos;
        pos++;
	}
}
n = n / N;
p = p / (20 - N);

neg = neg - N;
pos = pos - (20 - N);
if ( ( n ) < p ){
    min = *pos - p;
    if ( min < 0){
	min *= (-1);
	}
        for ( i = 0; i < (20 - N); i++){
            temp = *pos - p; 
            if ( temp < 0) {
                temp *= (-1);
             }
          	  if ( temp < min){
         	   min = temp;
          	  }
            pos++;
        }
pos = pos - (20 - N);
	for ( i = 0; i < (20 - N); i++){
            temp = *pos - p; 
            if ( temp < 0) temp *= (-1);
          	  if ( temp == min){
         	   *pos = p;
         	  }
            arr[i] = *pos;
            pos++;
	}
	for( i = (20 - N) ; i < 20; i++){
		arr[i] = 0;
	}
}else{
min = *neg + n;
    if ( min < 0)min *= (-1);
        for ( i = 0; i < N; i++){
            temp = *neg + n; 
            if ( temp < 0) temp *= (-1);
    	        if ( temp < min){
        	    min = temp;
            	}
            neg++;
        }
neg = neg - N;
     for ( i = 0; i < N; i++){
            temp = *neg + n; 
            if ( temp < 0) temp *= (-1);
    	        if ( temp == min ){
        	    *neg = ( n *(-1));
            	}
            arr[i] = *neg;
            neg++;
        }
		for( i = N ; i < 20; i++){
		arr[i] = 0;
	}              
}
for ( i = 0; i < 20; i++){
	printf("%g\n", arr[i]);
}
return 0;
}    
