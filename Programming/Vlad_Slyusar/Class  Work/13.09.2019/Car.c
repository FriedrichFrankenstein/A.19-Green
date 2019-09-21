#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef enum
{
    Off,
    On
} Switch;

typedef struct
{
    Switch work;
    char mark [20];
    float weight;
    float maxSpeed;
} Car;

void carIni ( Car *cars, int numCars );

void printCar ( Car *cars, int numCars );

void printFile ( Car *cars, int numCars );

int main ()
{
    int numCars;
    Car *cars;
    printf ( "Enter number of cars for enter: " );
    scanf ( "%i", &numCars );
    cars = ( Car * ) calloc ( sizeof ( Car ), numCars );
    carIni ( cars, numCars );
    printCar ( cars, numCars );
    printf ( "YESSS" );
    printFile ( cars, numCars );
    free ( cars );
    getch();
    return 0;
}

void carIni ( Car *cars, int numCars )
{
    int i, work;
    for ( i = 0; i < numCars; i++ )
    {
        printf ( "Enter mark of car; weight; maxSpeed: " );
        scanf ( "%s %f %f", ( cars + i ) ->mark, & ( cars + i ) ->weight, & ( cars + i ) ->maxSpeed );
        fflush ( stdin );
        printf ( "Is car on? Enter 1 - yes or - No: " );
        scanf ( "%i", & ( cars + i )->work );
    }
}

void printCar ( Car *cars, int numCars )
{
    int i;
    for ( i = 0; i < numCars; i++ )
    {
        printf ( "Mark of car = %s\nWeight of car = %g\nMax speed = %g\n", ( cars + i ) ->mark, ( cars + i ) ->weight, ( cars + i ) ->maxSpeed );
        switch ( ( cars + i )->work )
        {
        case On:
        {
            printf ( "Car is ON\n" );
            break;
        }
        case Off:
        {
            printf ( "Car is Off\n" );
            break;
        }
        }
    }
}

void printFile ( Car *cars, int numCars )
{
    int i;
    FILE *output = fopen ( "dataCar.txt", "w" );
    for ( i = 0; i < numCars; i++ )
    {
        fprintf ( output, "Mark of car = %s\nWeight of car = %g\nMax speed = %g\n", ( cars + i ) ->mark, ( cars + i ) ->weight, ( cars + i ) ->maxSpeed );
        switch ( ( cars + i )->work )
        {
        case On:
        {
            fprintf ( output, "Car is ON\n" );
            break;
        }
        case Off:
        {
            fprintf ( output, "Car is Off\n" );
            break;
        }
        }
    }
}
