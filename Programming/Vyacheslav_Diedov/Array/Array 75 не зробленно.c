#include <stdio.h>
#include <conio.h>

int main()
{
    int ma[15]={5, 1, 32, 11, 24, 37, 19, 45, 9, 35, 23, 49, 50, 46, 2};
    int i, i1, MaxA=0, MinA=0, a, b;
    	for(i=0; i<15; i++){
    		if(ma[MaxA]<ma[i]){
    			MaxA=i;
			}
			if(ma[MinA]>ma[i]){
				MinA=i;
			}
		}
		i1=MaxA;
			for(i=MinA ; i<MaxA/2;i++){
				ma[i]=a;
			printf("ma[%i]=[%i]",i ,ma[i]);
				while(i1>MaxA/2){
					ma[i1]=b;
					b=ma[i];
					a=ma[i1];
					i1--;
				//	printf("%i\n%i\n", ma[i1], ma[i]);	
					break;	
				}
			}
			/*for(i=0; i<15; i++){
				printf("ma[%i]=%i;\n", i, ma[i]);
			}*/				
	return 0;
}
