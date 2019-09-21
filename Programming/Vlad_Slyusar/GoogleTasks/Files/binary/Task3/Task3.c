#include <math.h>			//бібліотека математичних функцій
#include <stdio.h>
#include <conio.h>


int main()
{
    FILE* f; 			//файловий дескриптор
    int i, n = 10, k, flag = 0;
    char s[] = "String";
    float r;
    f = fopen ( "file_bin", "wb" ); //створюємо двійковий файл з назвою file_bin
    //	для запису даних (параметр “wb”)
    for ( i = 1; i <= n; i++ )
    {
        r = pow ( i, 1.0 / 3 );		//розрахунок кубічного кореня з числа і
        fwrite ( s, sizeof ( s ), 1, f ); //запис слова "String" у файл
        fwrite ( &i, sizeof ( int ), 1, f ); //запис цілого числа (номер рядка) у файл
        fwrite ( &r, sizeof ( float ), 1, f ); //запис дійсного числа (корінь кубічний) у файл
        printf ( "\n%s %d %f", s, i, r ); //контрольний вивід на екран
    }
    fclose ( f ); 				//закриття файлу
    printf ( "\n" );
    printf ( "Enter new number: " );
    scanf ( "%i", &k );
    if ( k > n )
    {
        printf ( "Too long move!!!" );
        return 0;
    }
    printf ( "\n" );
    f = fopen ( "file_bin", "rb" ); //відкриття двійковго файлу для читання
   // fseek ( f, k  * ( sizeof ( s ) + sizeof ( int ) + sizeof ( float ) ), SEEK_SET );
    for ( i = k; i > 0 && i < 11; ) //переміщення покажчика файлу
    {
        fseek ( f, ( i - 1 ) * ( sizeof ( s ) + sizeof ( int ) + sizeof ( float ) ), SEEK_SET );
        fread ( s, sizeof ( s ), 1, f );	//читати з файлу слово "String"
        fread ( &n, sizeof ( int ), 1, f );		//читати ціле число
        fread ( &r, sizeof ( float ), 1, f );	//читати дійсне число
        printf ( "\n%s %d %f", s, n, r );    	//вивести вміст файлу на екран
        if ( i == 1 )
        {
            i = k;
            flag = 1;
        }
        if ( flag == 0 )
        {
            i--;
        }
        else
        {
            i++;
        }
    }
    fclose ( f );
    getch();	//затримка - очікування натиснення клавіші Enter
    return 0;
}
