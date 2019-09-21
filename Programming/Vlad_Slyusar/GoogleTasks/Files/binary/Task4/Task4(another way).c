#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{
    FILE* f;
    f = fopen("contacts.dat", "rb");
    int length = 11, i, lengthFile;
    char name, surname, tempName1, tempSurname1 ;
    int telefonNumber, tempTelefonNumber1;
    float age, tempAge1;
    for ( i = 1 ; i < length + 1; i++ )
    {
        fread ( &name, sizeof ( name ), 1, f );
        fread ( &surname, sizeof ( surname ), 1, f );
        fread ( &age, sizeof ( float ), 1, f );
        fread ( &telefonNumber, sizeof ( int ), 1, f );
        printf ( "%s %s %f %i\n", name, surname, age, telefonNumber );
    }
    printf("\n");
    lengthFile = sizeof(name) + sizeof(surname)+ sizeof(int) + sizeof(float);

    freopen("contacts.dat", "rb+", f);
    for ( i = 0 ; i < 11/2; i++ ){
    fseek(f, lengthFile * i, SEEK_SET);
    fread(&name, sizeof(name), 1, f);
    fread(&surname, sizeof(surname), 1, f);
    fread(&age, sizeof(float), 1, f);
    fread(&telefonNumber, sizeof(int), 1, f);

    fseek(f, lengthFile * (11 - i - 1), SEEK_SET);
    fread(&tempName1, sizeof(name), 1, f);
    fread(&tempSurname1, sizeof(surname), 1, f);
    fread(&tempAge1, sizeof(float), 1, f);
    fread(&tempTelefonNumber1, sizeof(int), 1, f);

    fseek(f, lengthFile * (11 - i - 1), SEEK_SET);
    fwrite(&name, sizeof(name), 1, f);
    fwrite(&surname, sizeof(surname), 1, f);
    fwrite(&age, sizeof(float), 1, f);
    fwrite(&telefonNumber, sizeof(int), 1, f);

    fseek(f, lengthFile * i, SEEK_SET);
    fwrite(&tempName1, sizeof(name), 1, f);
    fwrite(&tempSurname1, sizeof(surname), 1, f);
    fwrite(&tempAge1, sizeof(float), 1, f);
    fwrite(&tempTelefonNumber1, sizeof(int), 1, f);
    }
    rewind (f);
    for ( i = 1 ; i < length + 1; i++ )
    {
        fread ( &name, sizeof ( name ), 1, f );
        fread ( &surname, sizeof ( surname ), 1, f );
        fread ( &age, sizeof ( float ), 1, f );
        fread ( &telefonNumber, sizeof ( int ), 1, f );
        printf ( "%s %s %f %i\n", name, surname, age, telefonNumber );
    }
    fclose ( f );
    getch();
    return 0;
}
