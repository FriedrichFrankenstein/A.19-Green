#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


typedef struct
{
    char producer [20];
    char color [20];
    char name [50];
    float weight;
    float width;
    float length;
    float height;
    char type [20];
    char connector [20];
    int sensitivity;
    int numberButton;
    char features [100];
    int price;

} ComputerMouse;

void printObject (ComputerMouse mouse);

void writeObjectToFile  (ComputerMouse mouse);

int main()
{
    ComputerMouse mouse;
    strcpy ( mouse.producer, "Asus" );
    strcpy ( mouse.color, "Black" );
    strcpy ( mouse.name, "Asus ROG Gladius II" );
    mouse.weight = 0.13;
    mouse.width = 67;
    mouse.length = 45;
    mouse.height = 126;
    strcpy ( mouse.type , "Optic" );
    strcpy (mouse.connector , "Wireless/Bluetooth" );
    mouse.sensitivity = 16000;
    mouse.numberButton = 6;
    strcpy(mouse.features, "Aura Sync RGB LED backlight");
    mouse.price = 2400;
    printObject (mouse);
    writeObjectToFile (mouse);
    getch();
    return 0;
}

void printObject (ComputerMouse mouse){
    printf("Producer = %s\nColor = %s\nName = %s\n", mouse.producer, mouse.color, mouse.name );
    printf("Weight = %g\nWidth = %g\nLength = %g\nHeight = %g\n", mouse.weight,  mouse.width, mouse.length, mouse.height);
    printf("Optic = %s\nConnector = %s\nSensitivity = %i\nNumber of buttons = %i\n",mouse.type,mouse.connector,  mouse.sensitivity, mouse.numberButton);
    printf("Features = %s\nPrice = %i\n", mouse.features, mouse.price);

}

void writeObjectToFile  (ComputerMouse mouse){
    FILE *output = fopen("date.txt", "w");
    fprintf(output, "Producer = %s\nColor = %s\nName = %s\n", mouse.producer, mouse.color, mouse.name );
    fprintf(output, "Weight = %g\nWidth = %g\nLength = %g\nHeight = %g\n", mouse.weight,  mouse.width, mouse.length, mouse.height);
    fprintf(output, "Optic = %s\nConnector = %s\nSensitivity = %i\nNumber of buttons = %i\n",mouse.type,mouse.connector,  mouse.sensitivity, mouse.numberButton);
    fprintf(output, "Features = %s\nPrice = %i\n", mouse.features, mouse.price);
}

