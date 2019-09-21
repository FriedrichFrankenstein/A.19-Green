#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int id;
    char model [20];
    char type [20];
    float price;
    int state;
}Printer;

typedef enum  {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} DayOfWeeks;

void printerPrint (Printer printer);

void switchPrinter (Printer printer);

float getPrice (Printer printer);

void compare (Printer printer1, Printer printer2);

void showData (Printer *printer);

void writeToFile (Printer printer, char *fileName);



int main ()
{
//    DayOfWeeks first = DayOfWeeks.Friday;
    printf("%i", Saturday);
    Printer *printers  = (Printer*) calloc(sizeof(Printer), 3);
    Printer printer1 = {1, "Epson", "inkjet", 1199.98, 0};
    Printer printer2 = {2, "HP", "laserjet", 1599.98, 0};
    Printer printer3 = {3, "Epson", "3D", 10000.0, 0};
    *(printers + 0) = printer1;
    *(printers + 1) = printer2;
    *(printers + 2) = printer3;

//    printerPrint(printer1);
//    switchPrinter (printer1);
//    float price = getPrice(printer2);
//    printf("%g\n", price);
//    compare(printer1, printer2);
//    showData (printer1);
    char fileName [20] = "dataPrinter.txt";
    writeToFile (printer1, fileName);
    writeToFile (printer2, fileName);
    writeToFile (printer3, fileName);
    getch();
    return 0;
}

void printerPrint (Printer printer){
    printf("%s.I am printing document,\n", printer.model);

}


void switchPrinter (Printer printer){
    if (printer.state == 0){
        printf("%s is switch off.\n", printer.model);
    } else {
        printf("%s is switch on.\n", printer.model);
    }

}

float getPrice (Printer printer){
    return printer.price;
}

void compare (Printer printer1, Printer printer2){
    if (printer1.price < printer2.price){
        printf("Printer1 is cheaper");
    } else if (printer1.price > printer2.price) {
         printf("Printer2 is cheaper");
    } else {
        printf("Prices are equals");
    }
}

//void showData (Printer printer){
//    printf("Model is %s\n", printer.model);
//    printf("Type is %s\n", printer.type);
//    printf("Price is %g\n", printer.price);
//}

void writeToFile (Printer printer, char *fileName){
    FILE *input = fopen(fileName, "a");
    fprintf(input, "Model is %s\n", printer.model);
    fprintf(input,"Type is %s\n", printer.type);
    fprintf(input,"Price is %g\n\n\n\n", printer.price);
    fclose(input);
}
