#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>


void powerAndSum(int p, float a){
	float i;
	printf("For17. Дано вещественное число a и целое число p (> 0). \nИспользуя один цикл, найти сумму \n1+a+a^2+a^3^p+ . . . +a^p\n");
    printf("\nImpute power- ");
    scanf("%i", &p);
    printf("Impute a- ");
    scanf("%f", &a);
    	for (i=1+1; p>0; p--){
    	i+=pow(a, p);
		}
	printf("Sum=%.2f\n", i);
	}


void showNumber(int a, int b){
    int c;
    printf("\nFor39. Даны целые положительные числа A и B (A < B). Вывести все целые\nчисла от A до B включительно; при этом каждое число должно выводиться\nстолько раз, каково его значение.\n");
    printf("\nEnter a= ");
    scanf("%i", &a);
    printf("Enter b=  ");
    scanf("%i", &b);
    	if(a<b){
			for(a=a+1;a<b;++a){
				for(c=1;c<=a;++c){
    			printf("%i", a);
				}
			printf("\n");
			}
    	}else{
    		printf("Incorrect\n");
		}
	}


void sumDivision(int num){
	printf("\nFor10. Дано целое число N (> 0). Найти сумму 1 + 1/2 + 1/3 + . . . + 1/N (вещественное число).\n");
    int a;
    printf("\nEnter number-  ");
    scanf("%i", &num);
    float sum =0;
    	for(a=1;a<=num;a++)
    	{
    	sum +=1/(float)a;
    	}
    printf("Sum=%.2f\n", sum);
}


void maxNumber(int N){
	printf("\nWhile8. Дано целое число N (> 0). Найти наибольшее целое число K, квадрат которого не превосходит N: \nK^2<=N. Функцию извлечения квадратного корня не использовать.\n");
    int k;
    printf("\nEnter N-  ");
    scanf("%i", &N);
    k=1;
		while ((k*k)<=N){
		++k;	
		}
	printf("Max number=%i\n",k-1);
}


void sumPercent(float p){
	printf("\nWhile15. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P \nпроцентов от имеющейся суммы (P -вещественное число, 0 < P < 25). По данному P определить, через \nсколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое \nчисло) и итоговый размер вклада S (вещественное число).\n");
   float s=1000;
   printf("\nRer cent:");
   scanf ("%f", &p);
   float vk=1100;
   p=p/100;
   int count=0;
   		while (s<=vk){
  	 	s+=vk*p;
  	 	count++;
  		}
  			if(count==1){
  			printf("Amount of deposit %.2f rub. after %i month\n", s, count);
 			}else{
  			printf("Amount of deposit %.2f rub. after %i months\n", s, count);
  			}	
  }

  
  void turnOverNumber(int n){
  	printf("\nWhile19. Дано целое число N (> 0). Используя операции деления нацело и взятия остатка от деления, найти число, \nполученное при прочтении числа N справа налево.\n");
   int i;
   printf("\nImput number:");
   scanf("%i", &n);
   printf("Turn Over Number ");
   		while (n>0){
   		i=n%10;
   		n=n/10;
   		printf("%i",i);
   		}
   		printf("\n");
	}


void stepperNoirThree(int num){
	printf("\nDoWhile4. Дано целое число N (> 0). Если оно является степенью числа 3, то вывести TRUE, если не является - вывести \nFALSE.\n");
    do{
		printf("\nEnter number:  ");
    	scanf("%i", &num);
	}while(num<=0);
		while ((num/3) %3==0){
			printf("True\n");
					break;
		}
			while ((num/3) %3!=0){
				printf("False\n");
						break;
			}
}


void countAndSum (int n){
   	int i, count=0;
   	printf("\nDoWhile18. Дано целое число N (> 0). Используя операции деления нацело и взятия остатка от деления, найти\n количество и сумму его цифр.\n");
   	do{
   		printf("\nImput number-");
   		scanf("%i", &n);
	}while(n<=0);
   		while (n>0){
   			i+=n%10;
   			n=n/10;
   			count++;
   		}
    printf("Sum=%i\nNumber of digits=%i\n", i, count);
}


void oddTrueFolse(int n){
    int i, a;
    printf("\nDoWhile21. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, \nимеются ли в записи числа N нечетные цифры. Если имеются, то вывести TRUE, если нет - вывести FALSE.\n");
    	do{
    		printf("\nEnter  the number:");
    		scanf("%i", &n);
		}while(n<0);
    		while(n>0){
    		i=n%10;
				if (i%2!=0){
					a=1;break;
				}else{
				a=2;
				}
			n=n/10;
			}
				if (a==1){
					printf("TRUE");
				}else{
					printf("FALSE");
				}
}


int main ()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	int p, num, num1, num2, num3, num4, num5, N, number, i;
	float a, per;
	
	printf("Какой цикл Вы хотите видеть первим\n1-For.\n2-While\n3-Do_While");

	powerAndSum(p, a);
	
	showNumber(num1, num2);
	
	sumDivision(num);
		
	maxNumber(N);
	
	sumPercent(per);
	
	turnOverNumber(number);
	
	stepperNoirThree(num3);
	
	countAndSum(num4);
	
	oddTrueFolse(num5);
	
	return 0;
}
