#include <conio.h>
#include <stdio.h>

int main()
{
     int bal;
     char name[15];
     FILE *file;

     if ((file = fopen("2.txt","w")) == NULL)
        printf("Файл невозможно открыть или создать\n");
     else{
        for(;;){
           scanf ("%d", &bal);
           if (bal == 0)
              break;
           fprintf(file,"%d \n", bal);
        }
     }
     fclose(file);
return 0;
}
