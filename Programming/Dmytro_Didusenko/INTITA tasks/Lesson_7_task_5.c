#include <stdio.h>
#include <string.h>
#define N 10

int main(){
	char name[25], tempName1[25], tempName2[25];
	float age, tempAge1, tempAge2;
	int phoneNum, tempPhoneNum1, tempPhoneNum2, counter=0, i;
	
	FILE *f = fopen("contacts.dat", "ab");
	
	for(i=0; i<N; i++){
		printf("Input name and surname: ");
		gets(name);
		fwrite(name, sizeof(name), 1, f);
		printf("Input age: ");
		scanf("%f", &age);
		fwrite(&age, sizeof(age), 1, f);
		printf("Input phone number: ");
		scanf("%i", &phoneNum);
		fwrite(&phoneNum, sizeof(phoneNum), 1, f);
		fflush(stdin);	
		system("cls");
	}
	fclose(f);
	
	f = fopen("contacts.dat", "rb");
	puts("Your contacts:");
	rewind(f);
	for(i=0; i<N; i++){
	 	fseek(f, (i)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
    		fread(name, sizeof(name), 1, f);	
    		fread(&age, sizeof(age), 1, f);		
    		fread(&phoneNum, sizeof(phoneNum), 1, f);	
    		printf("%s \t%g \t%i\n", name, age, phoneNum);
	}
	fclose(f);
	
	freopen("contacts.dat", "rb+", f);
	
	for(i=0; i<(10/2); i++){
		rewind(f);
		
		fseek(f, (i)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
		fread(tempName1, sizeof(name), 1, f);
		fread(&tempAge1, sizeof(age), 1, f);		
    	fread(&tempPhoneNum1, sizeof(phoneNum), 1, f);
    	
    	fseek(f, (N - i - 1)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
		fread(tempName2, sizeof(name), 1, f);
		fread(&tempAge2, sizeof(age), 1, f);		
    	fread(&tempPhoneNum2, sizeof(phoneNum), 1, f);
    	
    	fseek(f, (i)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
    	fwrite(tempName2, sizeof(name), 1, f);
		fwrite(&tempAge2, sizeof(age), 1, f);
		fwrite(&tempPhoneNum2, sizeof(phoneNum), 1, f);

    	fseek(f, (N - i - 1)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
    	fwrite(tempName1, sizeof(name), 1, f);
		fwrite(&tempAge1, sizeof(age), 1, f);
		fwrite(&tempPhoneNum1, sizeof(phoneNum), 1, f);
    }
	fclose(f);
	
	puts("");
	f = fopen("contacts.dat", "rb");
	puts("Changed contact list:");
	rewind(f);
	for(i=0; i<N; i++){
	 	fseek(f, (i)*(sizeof(name)+sizeof(age)+sizeof(phoneNum)), SEEK_SET);
    	fread(name, sizeof(name), 1, f);	
    	fread(&age, sizeof(age), 1, f);		
    	fread(&phoneNum, sizeof(phoneNum), 1, f);	
    	printf("%s \t%g \t%i\n", name, age, phoneNum);
	}
	fclose(f);
		
	return 0;
}
