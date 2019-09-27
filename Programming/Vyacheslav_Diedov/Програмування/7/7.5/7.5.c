#include <stdio.h>

int main(){
	char str[12][50] = {"Diedov Vyacheclav 29.9 0971850044", "Vyshnivskyy Vladyslav 22.2 0631526478", "Vovnenko Andriy 45.5 0879654756", "Dedeskul Volodymyr 19.6 0978874561", "Didusenko Dmytro 27.5 0674512561", "Karpinskyy Oleksandr 25.2 0631546547", "Kuznyetsov Vadym 35.12 0972587631", "Mysaka Andriy 30.10 0678314697", "Nykytyuk Maksym 28.5 0633216647", "Pustovoytenko Vladyslav 27.6 0989875412", "Stepanova Tetyana 26.5 0631634406" };
	FILE* mybinar = fopen ("contacts.dat", "wb");
	int i, j;
	char temp[50];
	for( i = 0; i < 11; i++){	
	fwrite ( &str[i], sizeof(str[i]), 1, mybinar );
	}
	freopen ("contacts.dat", "rb", mybinar);
	for( i = 0; i < 11; i++){	
	fread ( &temp, sizeof(str[i]), 1, mybinar );
	printf("#%i - %s\n", i, temp);
	}
	fclose ( mybinar ) ;
	printf("Mirror permutation of records\n");
	fopen("contacts.dat", "r+b");
	i = 0, j = 10;
	while( i < 5 ){
		while( j > 5){
		fseek ( mybinar, sizeof( str[i] ) * i , SEEK_SET );
		fread ( &temp, sizeof(str[i]), 1, mybinar );
		fseek ( mybinar, sizeof( str[i] ) * i , SEEK_SET );
		fwrite ( &str[j], sizeof(str[j]), 1, mybinar );
		fseek ( mybinar, sizeof ( str[j] ) * j, SEEK_SET );
		fwrite ( &temp, sizeof(str[i]), 1, mybinar );
		i++;
		j--;
		}
	}
	freopen ("contacts.dat", "rb", mybinar);
	for( i = 0; i < 11; i++){	
		fread ( &temp, sizeof(str[i]), 1, mybinar );
		printf("#%i - %s\n", i, temp);
	}
	fclose(mybinar);
	return 0;
}
