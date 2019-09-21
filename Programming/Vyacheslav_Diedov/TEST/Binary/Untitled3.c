#include <math.h>			//бібліотека математичних функцій
#include <stdio.h>
#include <conio.h>

int main() {
	FILE* f; 			//файловий дескриптор
	int i,n=10,n1,n2,n3;
	char s[]="String",s1[10]={},c;
	float r;

	f=fopen("file_bin","wb");  //створюємо двійковий файл з назвою file_bin
	//	для запису даних (параметр “wb”)
	for(i=1;i<=n;i++){ 
    	r=pow(i,1.0/3);		//розрахунок кубічного кореня з числа і
    	fwrite(s,sizeof(s),1,f);    //запис слова "String" у файл
    	fwrite(&i,sizeof(int),1,f); //запис цілого числа (номер рядка) у файл
    	fwrite(&r,sizeof(float),1,f); //запис дійсного числа (корінь кубічний) у файл
    	printf("\n%s %d %f",s,i,r); //контрольний вивід на екран
  	}
  	fclose(f); 				//закриття файлу
  	printf("\n");
  	f=fopen("file_bin","rb"); //відкриття двійковго файлу для читання
  	for(;;) {    //переміщення покажчика файлу
   		printf("\nInput number:");
   		scanf("%i",&i);
		fseek(f,(i-1)*(sizeof(s)+sizeof(int)+sizeof(float)),SEEK_SET);
    	printf("byte - %i ",ftell(f));
		n1=fread(s1,sizeof(s),1,f);	//читати з файлу слово "String"
    	n2=fread(&n,sizeof(int),1,f);		//читати ціле число
    	n3=fread(&r,sizeof(float),1,f);	//читати дійсне число
    	printf("%i %i %i %s %d %f ",n1,n2,n3,s1,n,r);    	//вивести вміст файлу на екран
  		printf("Next?");
  		c=getch();
  		if(c==27) break;
	  }
  	getch();	//затримка - очікування натиснення клавіші Enter
	return 0;
}
