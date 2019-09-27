#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define new '\n'

void allFunctions();

void languageRus();

void inLowerCase();

int oneRepeate();

void theShortestWord();

void stringPalindrome();

void theMostVowel();

void turnWord(char string[]);

void print(char string[]);

char* oneRepeateFale(FILE* str);

int main(){
	printf("Hello!!!%c", new);
/*	int i;
	do{
		printf("Please prove you are not robot:%c", new);
		printf("5 * 5 = ");
		scanf("%i", &i);
			if(i != 25){
				while(1){
					printf("%cYou are robot!!!", new);
				}
			}
	}while(i != 25);
*/	
	allFunctions();
	printf("%cThank you for viewing!%cGoodbye!!!", new, new);	
	return 0;
}

void allFunctions(){
	FILE *input6 = fopen ("resource6.txt", "r" );
	char task1[] = " one, two, one hundred, twenty one, one thousand";
	languageRus();
	oneRepeate(task1);
/*	theShortestWord();
	stringPalindrome();
	theMostVowel();
	char string[] = "HTML is the standard markup language for Web pages.";
	turnWord(string);
	print(string);
	*/
	oneRepeateFale(input6);

	}

void languageRus(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

int oneRepeate(char string[]){
	printf("%cTask 1. Дана строка. Вывести количество повторений подстроки «one». Если подстрока не встретилась вернуть -1%c", new, new);
	printf("Data - in - %s%c", string, new);
	int count, i;
	for(i = 0, count = 0; i < strlen(string); i++){
		if(strncmp("one", string+i, 3) == 0){
			count++;
			i = i + 3;
		}
	}
	if(count > 0){
		printf("Data out - %i%c", count, new);
		return count;
	}else{
		printf("Data out - %i%c", strncmp(string+i, "one", 3), new);
		count = strncmp(string + i, "one", 3);
		return count;
	}
}

void theShortestWord(){
	printf("%cTask2. Дан массив строк. Вывести самое короткое слово%cData in - ", new, new);
	char string[4][20] = {"responsibility", "charge", "liability", "amenability"};
	int i = 0, j = 0;
	while(i < strlen(string[i])){
		printf("%s", string[i]);
			if(strlen(string[j]) >= strlen(string[i])){
				j = i;
			}
			i++;
				while(i < strlen(string[i])){
					printf(", ");
					break;
				}
	}
	printf("%cData out - %s%c", new, string[j], new);
}

void stringPalindrome(){
	printf("%cTask 3. Ввести с консоли строку. Проверить является ли строка палиндромом. Пробелы не учитывать. %cЕсли да вернуть 1, если нет 0%c", new, new, new);
	char string[] = "Live not on evil";
	printf("Data in - %s%c", string, new);
	int i, j, count = 0;
	for(i = 0; i < strlen(string); i++){
		if(string[i] >= 'A' && string[i] <= 'Z'){
			string[i] -= 'A' - 'a';
		}
	}
	i = 0;
	while(i < strlen(string)){
		for(j = strlen(string)-1; j > 0;i++, j-- ){
			if(string[i] == ' ' || string[j] == ' '){
				if(string[i] == ' '){
					i++;
				}
					if(string[j] == ' '){
						j--;
					}
			}
				if(strncmp(string + i, string + j, 1) == 0){
					count++;
				}else{
					count = 0;
				}
					if(count == 0 || i == j || i == j + 1)break;
		}
	break;
	}
	if(count != 0){
		printf("Data out - 1%c", new);
	}else{
		printf("Data out - 0%c", new);
	}
}

void theMostVowel(){
	printf("%cTask 4. Дан массив слов. Вывести слово в котором больше всего гласных букв. Если таких слов несколько вывести их %cв алфавитном порядке%cData in - ",new, new, new);
	char string[5][10] = {"animal", "load", "reason", "early", "dream"};
	char voley[6][1] = {"a", "e", "i", "o", "u", "y"};
	char rezult[5][10];
	int i, j, k, m, max = 0, count;
	for( i = 0; i < 5; i++){
		printf("%s", string[i]);
		count = 0;
			if(i != 4){
			printf(", ");
			}
		for(j = 0; j < strlen(string[i]); j++){
			for(k = 0; k < 6; k++){
				if(strncmp(string[i]+j, voley[k], 1) == 0){
					count++;
					if( count >= max){
						max = count;
					}
				}
			}
			
		}
	}
	for( i = 0; i < 5; i++){
		count = 0;
		for(j = 0; j < strlen(string[i]); j++){
			for(k = 0; k < 6; k++){
				if(strncmp(string[i]+j, voley[k], 1) == 0){
					count++;
					if( count == max){
						strcpy (rezult[m], string[i]);
						m++;
					}
				}
			}		
		}
	}

	printf("%cData out -", new);
	for(i = 0; i < 'z' - 'a'; i++){
		char abc[] = "a";
		abc[0] = 'a' + i;
		for(j = 0; j < m; j++){
			if(strncmp(rezult[j], abc, 1) == 0){
				printf("%s%c", rezult[j], new);
			}
		}
	}
}

void turnWord(char string[]){
	printf("%cTask 5. Развернуть каждое слово в строке и вывести в верхнем регистре. (Использовать 1- 3 своих вспомогалельных функций - optional)%c", new, new);
	printf("Data in - %s%c", string, new);
	char temp[20];
	int i = 0, j, n = 0;
	while(i < strlen(string)){
		while(i < strlen(string)){
			if(string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z' ){
				temp[n] = string[i];
				i++;
				n++;
			}else
			break;
		}
	for(j = n-1; j >= 0; j--){
		string[i-j-1] = temp[j];
		}
	n=0;
	i++;
	}
	return string;
}

void print(char string[]){
	int i;
	printf("Deta out - ");
	for(i = 0; i < strlen(string); i++){
		if(string[i] >= 'a' && string[i] <= 'z'){
			printf("%c", string[i] + 'A' - 'a');
		}else{
			printf("%c", string[i]);
		}
	}
	printf("%c", new);
}

char* oneRepeateFale(FILE* str){
	char string[100];
	int i = 0;
	FILE *output= fopen ("result6.txt", "w" );
	while(1){
	if(fscanf(str,"%c", string+i)==EOF)break;
	i++;
	}
	fprintf (output, "%i", oneRepeate(string));
	fclose ( str );
	fclose ( output );
}

