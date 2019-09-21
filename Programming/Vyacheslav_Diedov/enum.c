#include <stdio.h>

typedef enum
{
    red = 2000,
    white = 9000,
    green = 200000,
    black = 14000,
    silver = 500000
} Car;

typedef struct
{
    int speed;
    Car mar;
    char marka[10];
    char model[20]
} Model;

void write(Model model);

int main()
{
    Model model1 = {240, red, "Mazda", "323"};
    Model model2 = {290, white, "Alfa romeo", "159"};
    Model model3 = {320, black, "Volksvagen", "CC"};
    Model model4 = {350, green, "Lamburgini", "Gallardo"};
    Model model5 = {360, silver, "Ferrari", "Plaza"};
    write( model1);
    write( model2);
    write( model3);
    write( model4);
    write( model5);
   // printf("marka - %s, model - %s,  max speed = %i, price = %i\n", model.marka, model.model, model.speed, model.mar);
    return 0;
}

void write(Model model){
    FILE* output = fopen ("output.txt", "a");
    fprintf(output, "marka - %s, model - %s,  max speed = %i, price = %i\n", model.marka, model.model, model.speed, model.mar);
    close(output);

}
