#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	char ch = 'D';
    if(ch >= 97 && ch <= 122){
        printf("Low case");
    }
    else {
    	printf ("Wrong char");
	}
    getch();
    return 0;
}
