#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define new '\n'

void allFunctions();

void languageRus();

void inLowerCase();

void startWithSome();

void changeFirstAndLastLetter ();

void beginWithVowel();

void removeAllVowels();

void fromSmallToUppercase();

void removeCharactersAndNumbers();

void plusFiveASCI();

void reversString();

void addBeforeTheWord();

void changeSomeAny();

void frequencyOfrepetitionsOfLetters();

int main(){
	printf("Hello!!!%c", new);
	int i;
	do{
		printf("Please prove you are not robot:%c", new);
		printf("5 * 5 = ");
		scanf("%i", &i);
			if(i != 25){
				while(1){
					printf("%cYoy are robot!!!", new);
				}
			}
	}while(i!=25);
	allFunctions();
	printf("%cThank you for viewing!%cGoodbye!!!", new, new);
	
	return 0;
}

void allFunctions(){
	languageRus();
	inLowerCase();
    startWithSome();
    changeFirstAndLastLetter ();
    beginWithVowel();
    removeAllVowels();
	fromSmallToUppercase();
    removeCharactersAndNumbers();
    plusFiveASCI();
    reversString();
	addBeforeTheWord();
	changeSomeAny();
	frequencyOfrepetitionsOfLetters();
}

void languageRus(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

void inLowerCase(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	printf("%cTask 1. Дана строка. Вывести только латинские литеры в нижнем регистре%c", new, new);
	char word[] = "asdASDzxcZXCqwertQWERT,.!-";
    printf("Data - in - %s%c", word, new);
	int len, i;
	len = strlen(word);
	printf("Data - out - ");
	for(i = 0; i <= len; i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
			printf("%c", word[i]);
		}
	}
	printf("%c", new);
	getch();
}

void startWithSome(){
	printf("%cTask 2. Дан массив строк. Вывести строки начинающиеся на <<some>> %c", new, new);
	char string[5][11] = {"something", "soup", "sometime", "somber", "somehow"};
	printf("Data - in - %s, %s, %s, %s, %s %c", string[0], string[1],string[2],string[3],string[4], new);
	int i;
	printf("Data - out - %c", new);
	for(i = 0; i < 5; i++){
		if(strncmp("some", string[i], 4) == 0){
			printf("string[%i][] - %s %c", i+1, string[i], new);
		}
	}
	getch();
}

void changeFirstAndLastLetter(){
	printf("%cTask 3. Дана строка. Заменить первую и последнюю литеру на цифру 5 %c", new, new);
    char string[] = "Hello";
    printf("Data - in - %s%c", string, new);
    int len, i;
    char five[]={"5"};
    len = strlen(string);
    strncpy(string, five, 1 );
	strcpy (string+len-1, five);
	printf("Data - out - %s%c", string, new);
	getch();
}

void beginWithVowel(){
	printf("%cTask 4. Дан массив строк. Вывести строки начинающиеся на гласную %c", new, new);
	char string[5][10] = {"animal", "load", "reason", "early", "dream"};
	printf("Data - in - %s, %s, %s, %s, %s %c", string[0], string[1],string[2],string[3],string[4], new);
	char vowel[5][1]= {"a","i","o","e","y"};
	int i, j;
	printf("Data - out - %c", new);
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			strncmp(string[i], vowel[j], 1);
			if(strncmp(string[i], vowel[j], 1) == 0){
				printf("%s%c", string[i], new);
			}
		}
	}
	getch();
}

void removeAllVowels(){
	printf("%cTask 5. Дана строка. Убрать все гласные буквы%c", new, new);
	char string[] = "competition";
	printf("Data - in - %s%c", string, new);
	char vowel[]= {'a','e','i','o'};
	int i, j, len, count = 0;
	len = strlen(string);
	printf("Data - out - ");
	for(i = 0; i < len; i++){
		for(j = 0; j < 4; j++){
			if(string[i] == vowel[j]){
				count++;
			}
		}		
	}
	char* notvowel;
	notvowel = (char*) malloc (count*sizeof(char*));
		for(i = 0; i < len; i++){
			for(j = 0, count = 0; j < 4; j++){
				if(string[i] == vowel[j]){
					count = 1;
				}
			}
			if(count == 0){
				strncpy(notvowel, string + i, 1);
				printf("%c", *notvowel);
				notvowel++;
			}
		}
	printf("%c", new);
	getch();
}

void fromSmallToUppercase(){
	printf("%cTask 6. Дана строка в нижнем регистре. Перевести в верхний регистр %c", new, new);
	char string[] = "sorry for interrupting";
	printf("Data - in - %s%c", string, new);
	int i;
	printf("Data - out - ");
	for(i = 0; i < strlen(string); i++){
		printf("%c", string[i]-32);
	}
	printf("%c", new);
	getch();
}

void removeCharactersAndNumbers(){
	printf("%cTask 7. Дана строка. Убрать все знаки и цифры %c", new, new);
	char string[] = "I,- will= do/* my4 be~st!";
	printf("Data - in - I,- will= do/* my4 be~st! %c", new);
	int i, len;
	len = strlen(string);
	char* p;
	p = (char*)malloc(len*sizeof(char*));
	printf("Data - out - ");
	for(i = 0; i < len; i ++){
		if(string[i] == ' ' || string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z'){
			strncpy(p, string + i, 1);
			printf("%c", *p);
			p++;
		}
	}
	getch();
}

void plusFiveASCI(){
	printf("%c%cTask 8. Дана строка. Вернуть строку все символы ASCI код символов которой отличаются от данной на 5 %c", new, new, new);
	char string[] = "Query";
	printf("Data - in - %s%c", string, new);
	int i;
	printf("Data - in - ");
	for(i = 0; i < strlen(string); i++){
		printf("%c", string[i]+5);	
	}
	getch();
}

void reversString(){
	printf("%c%cTask 9. Дана строка. Написать функцию revers для разворота строки %c", new, new, new);
	char string[] = "STOP";
	printf("Data - in - %s%c", string, new);
	int len;
	len = strlen(string);
	char* p;
	p = (char*)malloc(len*sizeof(char*));
	printf("Data - out - ");
	for(; len >= 0; len--){
		strncpy(p, string+len, 1);
		printf("%c", *p);
		p++;
	}
	getch();
}

void addBeforeTheWord(){
	printf("%c%cTask 10. Дан массив строк. Добавить перед каждым словом <<use>> %cData - in - ", new, new, new);
	char string[10][10] = {"pen", "cup", "brains"};
	char add[] = {"use"};
	char as[10];
	int j;
	for(j = 0; j < 10; j++){
		printf("%s", string[j]);
		for( ; j < strlen(string) - 1; ){
			printf(", ");
			break;
		}
	}
	printf("%cDate - out - %c", new, new);
	for(j = 0; j < 10; j++){
		sprintf(as, "%s %s%c",add, string+j, new);
		printf("%s", as);
	}
	getch();
}

void changeSomeAny(){
	printf("%c%cTask 11 Дана строка. Заменить в строке <<some>> на <<any>>%c", new, new, new);
	char string[] = "something someone cool awesome";
	printf("Data - in - %s%c", string, new);
	int i, len;
	len = strlen(string);
	char* chang;
	chang = (char*) malloc (len * sizeof(char*));
	strcpy(chang, string);	
	for(i = 0; i < len-1; i++){
		if(strncmp("some", string+i, 4) == 0){
			if(string[i+4] >= 'a' && string[i+4] <= 'z'){
				strncpy(chang+i, " any", 4);
			}else{
				strncpy(chang+i, "any\0", 4);
			}	
		}	
	}
	printf("data - out - ");
	for(i = 0; i < len-1; i++){
			printf("%c", chang[i]);
	}
	getch();
}

void frequencyOfrepetitionsOfLetters(){
	printf("%c%cTask 12. Дана строка. Определить частоту повторяемости букв в строке%c", new, new, new);
	char string[] = "communication";
	printf("Data - in - %s%cData - out - %c", string, new, new);
	int i, j, count;
	for(i = 0; i < 'z' - 'a'; i++){
		count = 0;
		for(j = 0; j < strlen(string); j++){
			if(string[j] == 'a'+ i){
				count++;
			}
		}
		if(count > 0){
			printf("%c - %i%c", 'a' + i, count, new);
		}
	}
	getch();
}
