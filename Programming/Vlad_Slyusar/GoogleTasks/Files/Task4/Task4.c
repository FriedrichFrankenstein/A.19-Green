#include <stdio.h>

#define M 5		// кількість рядків
#define N 4 	// кількість стовпців

int main()
{
	int i, j, a[M][N];
	FILE *fp;
	fp = fopen("input.txt", "r");
	for ( i = 0; i < M; i ++ ) 	// цикл по рядкам
		for ( j = 0; j < N; j ++ ) 	// цикл по стовпцям
			if ( EOF == fscanf(fp,"%d",&a[i][j]) ) {// читаємо дані в масив а[i][j], одночасно перевіряємо, чи не натрапили на кінець файлу або на некоректні дані
				puts("Даних у файлі не вистачає");
				fclose ( fp ); // закриваємо файл через помилку
				getchar();
				return 0; 	// вихід з програми через помилку
			}
	fclose ( fp ); // закрити файл після успішного зчитування даних
    fp = fopen("output.txt", "w");
    for ( i = 0; i < M; i ++ ){
        for ( j = 0; j < N; j ++ ){
            fprintf(fp, "%2i ", a[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}
