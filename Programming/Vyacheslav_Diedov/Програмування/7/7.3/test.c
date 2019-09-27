#include <math.h> 

#include <stdio.h>
 

main() {

FILE* f; 
int i,n=10;

char s[]="String";

float r;

 

f=fopen("file_bin","wb"); 

for(i=1;i<=n;i++){

r=pow(i,1.0/3); 

fwrite(s,sizeof(s),1,f); 

fwrite(&i,sizeof(int),1,f); 

fwrite(&r,sizeof(float),1,f); 

printf("\n%s %d %f",s,i,r); 

}

fclose(f); 

printf("\n");

f=fopen("file_bin","rb"); 

for(i=n; i>0; i--) { 

fseek(f,(i-1)*(sizeof(s)+sizeof(int)+sizeof(float)),SEEK_SET);

fread(&s,sizeof(s),1,f); 

fread(&n,sizeof(int),1,f); 

fread(&r,sizeof(float),1,f); 

printf("\n%s %d %f",s,n,r); 

}

getchar(); 

}
