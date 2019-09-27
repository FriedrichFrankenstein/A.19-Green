#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void numbersArray(){
	printf("1. Написать функцию которая сохраняет цифры числа в массив\n");
	int num, i, temp, count = 0;
	printf("\nInput number: ");
	scanf("%i", &num);
	temp = num;
	
	while( temp > 0){
		temp = temp/10;
 		count++;
	}
	
	int* p; 
	p = (int*)malloc(count*sizeof(int*));
	
	for( i = count-1; i >= 0; i--){
		*p = num%10;
		num = num/10;
		p++;
	}
	
	for(i = 0; i < count; i++){
		printf("Number Array [%i] = %i\n", i, *--p);
	}
	getch();
}

void randArray(){
	printf("\n2. Написать функцию которая создаёт массив рандомного размера (от  0 до 9)\n");
	printf("\n");
	int num, i;
	num = rand ()%10;
	int* array; 
	array = (int*)malloc(num*sizeof(int*));
	for(i = 0; i < num; i++){
	*array = rand()%50;	
	printf("Array [%i] has addres %i = %i\n", i, array++, *array);
	}
	getch();
}

void wordLetter(){
	printf("\n3. Написать функцию которая раскладывает слово в массив букв\n");
	int i;
	char word[20] = {};
	printf("Input English word: ");
	scanf("%s", &word);
	
	for(i = 0; i < 20; i++){
		if((word[i]>='a' && word[i]<='z') || (word[i] >= 'A' && word[i] <= 'Z')){
		printf("Array[%i] = %c\n", i, word[i]);
		}
	}
	getch();
}

void wholeFractional(){
	printf("\n4. Написать функцию которая разделяет вещественное число на целую и дробную часть. Результат сохранить в массив\n");
	float a; 
	int b, i, j = 0, c, array[10];
	printf("\nInput Fractional:  ");
	scanf("%f", &a);
	b = a*100000;
	
		for(i = 0; i < 5; ++i){
		c = b%10;
			if (c!=0){
			break;
			}else{
			b /= 10;
			}
		}
		
		for(; i <= 4; i++){
		c = b%10;
		array[j] = c;
		printf("Fractional [%i] = %i\n", j, array[j]);
		b /= 10;
		j++;
		}
		
		while(b>0){
		c = b % 10;
		array[j] = c;
		printf("Whole[%i]=%i\n", j, array[j]);
		b /= 10;
		j++;
		}
		getch();
}

void pairedOdd(){
	printf("\n5. Дан массив из 10 чисел. Выбрать только чётные и сохранить в новый массив\n");
	int* array;
	int num = 10, i, count;
	array = (int*)malloc(num*sizeof(int));
	
	for (i = 0; i < num; i++){
		*array = rand()%50;
		printf("Array[%i]=%i\n", i+1, *array);
		array++;
	}
	
	array = array - num;
	
	for(i = 0; i < num; i++){
		if(*array%2==0){
			count++;
		}
		array++;
	}
	
	array = array - num;
	int* paired;
	paired = (int*)malloc(count*sizeof(int));
	count = 1;
	printf("\n");
	
		for(i = 0; i < num; i++){
			if(*array%2==0){
			*paired = *array;
			printf("Paired[%i]=%i\n", count++, *paired);
			}
		array++;
		paired++;
	}
	getch();
}

void loudLetters(){
	printf("\n6. Дан массив 10 букв. Выбрать гласные и сохранить в новый массив\n");
	char string[10] = "abcdefghij";
	char loud[5] = "aeiou";
	int i, j, count = 0;
	
	for(i = 0; i < 10; i++){
		printf("Array[%i] = %c\n", i, string[i]);
		for(j = 0; j < 5; j++){
			if(loud[j]==string[i]){
				count++;
			}
		}
	}
	
	char* stloud;
	stloud = (char*)malloc(count*sizeof(char));
	printf("\n");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 5; j++){
			if(loud[j]==string[i]){
				*stloud = string[i];
				printf("Loud [%i] = %c\n", i, *stloud);
			}
		}
	}
	getch();
}


int main(){
	
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    
	int test, test1;
	printf("Hello!!!");
	do{
	for(test1 = 6; test1 > 0; test1--){
		printf("\nВыберите задание:\n1. Написать функцию которая сохраняет цифры числа в массив\n2. Написать функцию которая создаёт массив рандомного размера (от  0 до 9)\n3. Написать функцию которая раскладывает слово в массив букв\n4. Написать функцию которая разделяет вещественное число на целую и дробную часть. Результат сохранить в массив\n5. Дан массив из 10 чисел. Выбрать только чётные и сохранить в новый массив\n6. Дан массив 10 букв. Выбрать гласные и сохранить в новый массив\n7. Все задания\n8. Выйти\n\nНомер ");
		scanf("%i", &test);
			switch(test){
				case 1: numbersArray();
									break;
				case 2: randArray();
									break;	
				case 3: wordLetter();
									break;
				case 4: wholeFractional();
									break;
				case 5: pairedOdd();
									break;					
				case 6: loudLetters();
									break;
				case 7: numbersArray();
						randArray();
						wordLetter();
						wholeFractional();
						pairedOdd();
						loudLetters();
						test1=0;
									break;
				case 8: test1=0;
									break;
			}
	}
	}while(test>8);
	printf("\nGoodbye!!!");
	getch();
	return 0;
}
