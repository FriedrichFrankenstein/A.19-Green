#include <stdio.h>
#include <conio.h>
#include <math.h>

void sumOfFactorials ()
{
    /* For20. ������ �����. ����� ����� ���� ���� �����������
    �� 1 �� ����� �����*/
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
    /*For 39 ���� 2 �����, ����� ������� ������ ����� ������� ���
    ������� ��� � ����: 2 ������� 2 ����, 5 5 ��� � ��.*/
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
    /* For 39 ���� 2 �����, ����� ������� ������ �����, ���������� �������
    ������� �� ���������. � ������� 1 ���, ���������� ����� �� 1 ������ ���
    , ����. ��� 1 ������ ( 3 ����) � ��*/
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
    /* ���� 2 �����, ����� ����� ��������� ������� ������ �� ������,
    � ������ �� ������� ��������� ������ + ��� -.*/
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
    /* ���� �����, ����� ��������� ���� �� � ��� �������� �����.
    ���� ���� ������� TRUE ���� ���� FALSE */
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
    /*���� ��� �����, ����� ������ ������� ����������� ��������� �� �������� �
    � ������������� �� ��������� � � �. ������������ ��������� � ������� ���������. */
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
    /*���� �����. ����� ������� ����� ���������� ���
    ��������� ������ ������ */
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
    //���� �����, ����� ����� ���� ��� ���� � �� ����������.
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
    /*���� 1000 �., ����� ������ ����� ������� ��� ���� ������ ������
    1100, ���� ������ ����� ��� ����� ������������� �� � ���������,
    ������� � ���� ������. � ����� ������� ������� ��� ����� ���� �������
    � ������� � ����� ����� ����� �����*/
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
