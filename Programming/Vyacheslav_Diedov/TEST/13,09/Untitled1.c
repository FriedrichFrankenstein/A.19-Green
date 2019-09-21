#include <stdio.h>
#include <string.h>

typedef struct {
	int id;
	char model[20];
	char type[10];
	float price;
	int state;
}Printer;

void printerPrint ( Printer printer );
void switchPrinter ( Printer printer );
float getPrice ( Printer printer );
int compare ( Printer printer1, Printer printer2);
void showData ( Printer printer );
void writeDataFile ( Printer printer, char* fileName);
int main()
{
	Printer printer1  = {1, "Epson", "ink jet", 1199.98, 0};
	Printer printer2  = {2, "Epson", "laser jet", 1199.98, 0};
	Printer printer3  = {3, "Canon", "3D", 10000.99, 0};
	char* fileName = "strong.txt";
	printerPrint ( printer1 );
	switchPrinter ( printer1 );
	getPrice ( printer2 );
	writeDataFile ( printer1, fileName);
	writeDataFile ( printer2, fileName);
	writeDataFile ( printer3, fileName);
	
	
	return 0;
}

void printerPrint ( Printer printer ){
	printf("%s I am printing document. \n", printer.model);
}

void switchPrinter ( Printer printer ){
	if ( printer.state == 0 ){
		printf("%s is switch off. \n", printer.model);
	}else{
		printf("%s is switch off. \n", printer.model);
	}
}

float getPrice ( Printer printer ){
	return printer.price;
}

int compare ( Printer printer1, Printer printer2){
	if ( printer1.price > printer2.price){
		printf("Printer1 is cheeper");
	} else if ( printer1.price < printer2.price){
		printf("Printer1 is cheeper");
	}else {
		printf("Printer1 is equals");
	}
}

void showData ( Printer printer ){
	printf("Model is %s", printer.model);
	printf("Tipe is %s", printer.type);
	printf("Price is %s", printer.price);
}

void writeDataFile ( Printer printer, char* fileName){
	FILE* myfile = fopen("fileName.txt", "w");
	fprintf ( myfile, "printer - %s Id - %i Price - %g", printer.model, printer.id, printer.price);
	fclose(myfile);
}



