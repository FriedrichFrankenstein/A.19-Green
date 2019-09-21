#include <stdio.h>
#include <conio.h>
#include <math.h>

void sumOfFactorials ()
{
    /* For20. Вводим число. Нужно найти суму всех факториалов
    от 1 до этого числа*/
    int N, i, factorial = 1, sum = 0, a;
    printf ( "Enter number: " );
    scanf ( "%i", &N );
    for ( i = 1; i <= N; i++ )
    {
        factorial *= i;
        sum += factorial;
    }
    printf ( "Sum of factorials %i", sum );
}

void printNumberNumberTimes ()
{
    /*For 39 Есть 2 числа, нужно вывести каждый число столько раз
    сколько оно и есть: 2 выводим 2 раза, 5 5 раз и тд.*/
    int A, B, i;
    printf ( "Enter numbers (A < B): " );
    scanf ( "%i%i", &A, &B );
    for ( A; A <= B; A++ )
    {
        for ( i = 1 ; i <= A; i++ )
        {
            printf ( "%i", A );
        }
        printf ( "\n" );
    }
}
void printNumberPlus1Times ()
{
    /* For 39 Есть 2 числа, нужно вывести каждый число, количество выводов
    зависит от положения. А выводим 1 раз, следуюущее число на 1 больше раз
    , след. ещё 1 больше ( 3 раза) и тд*/
    int A, B, i, counter = 0;
    printf ( "Enter numbers (A < B): " );
    scanf ( "%i%i", &A, &B );
    for ( A; A <= B; A++ )
    {
        counter ++;
        for ( i = 1 ; i <= counter; i++ )
        {
            printf ( "%i", A );
        }
        printf ( "\n" );
    }
}
void divWithoutDiv ()
{
    /* Есть 2 числа, нужно найти результат деления одного на другое,
    и остачу от деление используя только + или -.*/
    int Number, Koef, counter = 0, rest = 0;
    int Number1, Koef1 ;
    printf ( "Enter 2 numbers ( A > B): " );
    scanf ( "%i%i", &Number, &Koef );
    Number1 = Number;
    Koef1 = Koef;
    while ( Number >= 0 )
    {
        Number -= Koef;
        counter++;
    }
    while ( Number1 > 0 )
    {
        rest = ( Number1 -= Koef1 );
        if ( Number1 < 0 )
        {
            rest += Koef;
        }
    }
    counter--;
    printf ( "Result: %i, Rest: %i", counter, rest );
}

void includeOddOrNot()
{
    /* Есть число, нужно проверить есть ли в нем нечетные цифры.
    Если есть выводим TRUE если нету FALSE */
    int N,  i = 1, k, k1,  k3 = 0, N1;
    printf ( "Enter number(big number): " );
    scanf ( "%i", &N );
    N1 = N;
    while ( i < N )
    {
        i *= 10;
        k =  N1 % 10;
        N1 = N1 / 10;
        k1 = k % 2 ;
        if ( k1 != 0 )
        {
            k3 = 1;
            printf ( "TRUE" );
            break;
        }
    }
    if ( k3 != 1 )
    {
        printf ( "False" );
    }
}

void numberOfC_InA_And_B ()
{
    /*Есть три числа, нужно узнать сколько поместиться квадратов со стороной С
    в прямоугольник со сторонами А и В. Использовать умножение и деление запрещено. */
    int A, B, C, S = 0, S2 = 0,  i = 0, i2 = 0,  numberOfC = 0;
    printf ( "Enter numbers( A*B > C*C): " );
    scanf ( "%i%i%i", &A, &B, &C );
    while ( i < B )
    {
        i++;
        S += A;
    }
    while ( i2 < C )
    {
        i2++;
        S2 += C;
    }
    while ( S > 0 )
    {
        S -= S2;
        numberOfC++;
        if ( S  < S2 )
        {
            break;
        }
    }
    printf ( "Result: %i", numberOfC );
}

void numberConversely ()
{
    /*Есть число. Нужно вывести число полученное при
    прочтении справа налево */
    int N,  i = 1, k, k1,  k3 = 0, N1;
    printf ( "Enter number(big num): " );
    scanf ( "%i", &N );
    N1 = N;
    do
    {
        i *= 10;
        k =  N1 % 10;
        N1 = N1 / 10;
        printf ( "%i", k );
    }
    while ( i < N );
}

void sumAndNumberOfNumbers ()
{
    //Есть число, нужно найти суму его цифр и их количество.
    int N,  i = 1, k, sum = 0, N1, count = 0;
    printf ( "Enter number(big num): " );
    scanf ( "%i", &N );
    N1 = N;
    do
    {
        i *= 10;
        k =  N1 % 10;
        N1 = N1 / 10;
        sum += k;
        count++;
    }
    while ( i < N );
    printf ( "Sum of Number: %i.\nCount: %i", sum, count )	;
}
void moneyInTheEnd ()
{
    /*Есть 1000 р., нужно узнать через сколько эта сума станет больше
    1100, если каждый месяц она будет увеличиваться на Р процентов,
    которые и надо ввести. В конце вывести сколько для этого надо месяцев
    и сколько в итоге будем иметь денег*/
    float P;
    int originalMoney = 1000, moneyInTheEnd = 1000, counter = 0;
    printf ( "Enter P (0 - 0.25): " );
    scanf ( "%f", &P );
    if ( P < 0 || P >= 0.25 )
    {
        printf ( "Wrong P" );
    }
    else
    {
        P++;
        printf ( "P = %f\n", P );
        while ( moneyInTheEnd < 1100 )
        {
            counter ++;
            moneyInTheEnd *=  P;
        }
    }
    printf ( "Money in the End: %i; number of months: %i", moneyInTheEnd, counter );
}
int main ()
{
    int choise, choise2;
    for ( ;; )
    {
        printf ( "\nEnter which type of Tasks do you want to see\n1 - For;\n2 - While;\n3 - Do_while: " );
        scanf ( "%i", &choise );
        switch ( choise )
        {
        case 1:
        {
            printf ( "\nChoose task: " );
            scanf ( "%i", &choise2 );
            switch ( choise2 )
            {
            case 1:
                sumOfFactorials();
                break;
            case 2:
                printNumberNumberTimes();
                break;
            case 3:
                printNumberPlus1Times();
                break;
            default:
                break;
            }
            break;
        }
        case 2:
        {
            printf ( "\nChoose task: " );
            scanf ( "%i", &choise2 );
            switch ( choise2 )
            {
            case 1:
                divWithoutDiv();
                break;
            case 2:
                includeOddOrNot();
                break;
            case 3:
                numberOfC_InA_And_B();
                break;
            default:
                break;
            }
            break;
        }
        case 3:
        {
            printf ( "\nChoose task: " );
            scanf ( "%i", &choise2 );
            switch ( choise2 )
            {
            case 1:
                numberConversely();
                break;
            case 2:
                sumAndNumberOfNumbers();
                break;
            case 3:
                moneyInTheEnd();
                break;
            default:
                break;
            }
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}
