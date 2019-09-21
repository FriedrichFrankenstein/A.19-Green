#include <math.h>			//бібліотека математичних функцій
#include <stdio.h>
#include <conio.h>


int main()
{
    FILE* f;
    //  f = fopen("contacts.dat", "wb");
    int length = 11, i;
    char name [20];
    char surname [20];
    int telefonNumber;
    float age;
    char tempName [11][20];
    char tempSurname [11][20];
    int tempTelefonNumber [11];
    float tempAge[11];
//    for ( i = 1 ; i < length + 1;i++ ){
//    printf("Enter dates (name, surname, age, telefonNumber): ");
//    scanf("%s %s %f %i", name, surname, &age, &telefonNumber);
//    fflush(stdin);
//    fwrite(name, sizeof(name), 1, f);
//    fwrite(surname, sizeof(surname), 1, f);
//    fwrite(&age, sizeof(float), 1, f);
//    fwrite(&telefonNumber, sizeof(int), 1, f);
//    }
    f = fopen ( "contacts.dat", "rb" );
    // freopen("contacts.dat", "rb", f);
    for ( i = 1 ; i < length + 1; i++ )
    {
        fread ( tempName[i], sizeof ( name ), 1, f );
        fread ( tempSurname[i], sizeof ( surname ), 1, f );
        fread ( &age, sizeof ( float ), 1, f );
        tempAge [i] = age;
        fread ( &telefonNumber, sizeof ( int ), 1, f );
        tempTelefonNumber[i] = telefonNumber;
        printf ( "%s %s %f %i\n", tempName[i], tempSurname[i], tempAge[i], tempTelefonNumber[i] );
    }
    printf("\n");
    freopen ( "contacts.dat", "wb", f );
    for ( i = length ; i > 0; i-- )
    {
        fwrite ( tempName[i], sizeof ( name ), 1, f );
        fwrite ( tempSurname[i], sizeof ( surname ), 1, f );
        age = tempAge [i];
        fwrite ( &age, sizeof ( float ), 1, f );
        telefonNumber = tempTelefonNumber[i];
        fwrite ( &telefonNumber, sizeof ( int ), 1, f );
        printf ( "%s %s %f %i\n", tempName[i], tempSurname[i], tempAge[i], tempTelefonNumber[i] );
    }
    //length = sizeof(name) + sizeof(surname) + sizeof(float) + sizeof(int);
//    for ( i = 1 ; i < 12; i++ ){
//    fseek(f, length * i, SEEK_SET);
//    fread(name, sizeof(name), 1, f);
//    fread(surname, sizeof(surname), 1, f);
//    fread(&age, sizeof(float), 1, f);
//    fread(&telefonNumber, sizeof(int), 1, f);
//
//    fseek(f, length * (11 - i - 1), SEEK_SET);
//    fread(tempName, sizeof(name), 1, f);
//    fread(tempSurname, sizeof(surname), 1, f);
//    fread(&tempAge, sizeof(float), 1, f);
//    fread(&tempTelefonNumber, sizeof(int), 1, f);
//
//    freopen("contacts.dat", "wb+", f);
//    fseek(f, length * (11 - i - 1), SEEK_SET);
//    fwrite(name, sizeof(name), 1, f);
//    fwrite(surname, sizeof(surname), 1, f);
//    fwrite(&age, sizeof(float), 1, f);
//    fwrite(&telefonNumber, sizeof(int), 1, f);
//
//    fseek(f, length * i, SEEK_SET);
//    fwrite(tempName, sizeof(name), 1, f);
//    fwrite(tempSurname, sizeof(surname), 1, f);
//    fwrite(&tempAge, sizeof(float), 1, f);
//    fwrite(&tempTelefonNumber, sizeof(int), 1, f);
//    }
    fclose ( f );
    getch();
    return 0;
}
