#include <math.h>			//�������� ������������ �������
#include <stdio.h>
#include <conio.h>

int main() {
	FILE* f; 			//�������� ����������
	int i,n=10,n1,n2,n3;
	char s[]="String",s1[10]={},c;
	float r;

	f=fopen("file_bin","wb");  //��������� �������� ���� � ������ file_bin
	//	��� ������ ����� (�������� �wb�)
	for(i=1;i<=n;i++){ 
    	r=pow(i,1.0/3);		//���������� �������� ������ � ����� �
    	fwrite(s,sizeof(s),1,f);    //����� ����� "String" � ����
    	fwrite(&i,sizeof(int),1,f); //����� ������ ����� (����� �����) � ����
    	fwrite(&r,sizeof(float),1,f); //����� ������� ����� (����� �������) � ����
    	printf("\n%s %d %f",s,i,r); //����������� ���� �� �����
  	}
  	fclose(f); 				//�������� �����
  	printf("\n");
  	f=fopen("file_bin","rb"); //�������� �������� ����� ��� �������
  	for(;;) {    //���������� ��������� �����
   		printf("\nInput number:");
   		scanf("%i",&i);
		fseek(f,(i-1)*(sizeof(s)+sizeof(int)+sizeof(float)),SEEK_SET);
    	printf("byte - %i ",ftell(f));
		n1=fread(s1,sizeof(s),1,f);	//������ � ����� ����� "String"
    	n2=fread(&n,sizeof(int),1,f);		//������ ���� �����
    	n3=fread(&r,sizeof(float),1,f);	//������ ����� �����
    	printf("%i %i %i %s %d %f ",n1,n2,n3,s1,n,r);    	//������� ���� ����� �� �����
  		printf("Next?");
  		c=getch();
  		if(c==27) break;
	  }
  	getch();	//�������� - ���������� ���������� ������ Enter
	return 0;
}
