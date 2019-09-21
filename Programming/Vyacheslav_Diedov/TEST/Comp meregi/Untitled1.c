#include <stdio.h>
#include <conio.h>

int main(){
char string[] = "[[]][][[[]]]";
    int balance = 0;
    for(int i = 0; i < 11; i++){
        if(string[i] == '['){
            balance++;
        } else if(string[i] == ']'){
            balance--;
        }
    }
    if(balance == 0){
        printf("equals");
    } else {
        printf("no equals");
    }
}
