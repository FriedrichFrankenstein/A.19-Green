#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define n1 5
#define n2 7

int *marge (int N1, int *a1, int N2, int *a2);

int main (){
    srand(time(NULL));

    int i=0;
   	int  a1[n1];
   	int  a2[n2];
    int flag=0, temp;
   	
    for (i=0; i<n1;i++){
        a1[i]=rand()%20;
    }
    for (i=0; i<n1;i++){
        printf ("%i ", a1[i]);
    }

    for (i=0; i<n2;i++){
        a2[i]=rand()%20;
    }
    printf ("\n");
    for (i=0; i<n2;i++){
        printf ("%i ", a2[i]);
    }
	
	for (i=0;i<n1-1;){                          // Sort 1
		
		if (a1[i]>a1[i+1]){
			temp = a1[i];
			a1[i] = a1[i+1];
			a1[i+1] = temp;
			flag=1;
		}
		i++;
		if (!flag && i==n1-1){
			break;
		}
		if (i==n1-1){
			i=0;
			flag=0;
		}
	}
	printf ("\n");
	printf ("Sorted Array a1 - ");
	for (i=0;i<n1;i++){
		printf("%i ", a1[i]);
	}

    for (i=0;i<n2-1;){                          // Sort 2 
		
		if (a2[i]>a2[i+1]){
			temp = a2[i];
			a2[i] = a2[i+1];
			a2[i+1] = temp;
			flag=1;
		}
		i++;
		if (!flag && i==n2-1){
			break;
		}
		if (i==n2-1){
			i=0;
			flag=0;
		}
	}
	printf ("\n");
	printf ("Sorted Array a2 - ");
	for (i=0;i<n2;i++){
		printf("%i ", a2[i]);
	}

	int* result = marge (n1, a1, n2, a2);
	for (i=0;i<n1+n2;i++){
		printf ("%i ", result[i]);
	}
	

}





int *marge (int N1, int *a1, int N2, int *a2)
{
	int temprary, flag=0;
	int i=0, j=0;
    int size = N1+N2;
    
    if (sizeof(a1)==0 && sizeof(a2)==0){
    	return NULL;
	}
	
    int *array=(int*)calloc(size, sizeof(int));
 
 	printf ("\n");
// 	if (sizeof(a1)==0)
//	 	{
// 			for (i=0;i<N2;i++){                             
//            	array[i]=a2[i];
//        	}
//		}else if(sizeof(a2)==0)
//		{
//    		for (i=0;i<N1;i++){                             
//         	   array[i]=a1[i];
//        	}
//		}else{
//        
    for (i=0;i<size;i++){                             // filling out of array 
    	
        if (i<N1){
            array[i]=a1[i];
        }
		if (i >= N1){
            array[i]=a2[j];
            j++;
        }
        
    }
    for (i = 0; i < size; i++)
    {
        printf ("%i ", array[i]);
    }
    
    printf ("\n");
    for (i=0;i<size-1;){                                  // Sort array        
		
		if (array[i]>array[i+1]){
			temprary = array[i];
			array[i] = array[i+1];
			array[i+1] = temprary;
			flag=1;
		}
		i++;
		if (!flag && i==size-1){
			break;
		}
		if (i==size-1){
			i=0;
			flag=0;
		}
	}
//	printf ("\n");
////	printf ("Sorted Array - ");
////	for (i=0;i<size;i++){
////		printf("%i ", array[i]);
//	//}
//    
	

	return array;
}



