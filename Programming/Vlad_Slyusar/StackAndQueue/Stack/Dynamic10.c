#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>

struct Node
{
    int number;
    struct Node* next;
};

typedef struct Node* PNode;

void Push ( PNode *Head, int number );

void Pop ( PNode *Head1, PNode *Head2 );

int main()
{
    srand(time(NULL));
    int i, number;
    PNode Strack1 = NULL, Strack2 = NULL, Temp;
    for (i = 0; i < 10; i++){
        printf("Enter number to enter in stack: ");
        number = rand() % 10;
        printf("Stack1 = %i\n", number);
        Push (&Strack1, number);
    }
    printf("\n\n\n\n");
    for (i = 0; i < 8; i++){
        printf("Enter number to enter in stack: ");
        number = rand() % 10;
        printf("Stack2 = %i\n", number);
        Push (&Strack2, number);
    }
    i = 0;
    while (Strack1 != NULL){
            if (Strack1->number % 2 == 0){
                break;
            }
            Pop (&Strack1, &Strack2);
    }
    Temp = Strack2;
    while (Temp != NULL){
        printf("Stack2 = %i\n", Temp->number);
        Temp = Temp->next;
    }
    Temp = Strack1;
    printf("\n\n\n");
    if (Temp == NULL){
        printf("Stack1 = NULL");
    }
    while (Temp != NULL){
        printf("Stack1 = %i\n", Temp->number);
        Temp = Temp->next;
    }
    getch();
    return 0;
}

void Push ( PNode *Head, int number ) // процедура додавання вузла в стек
{
    // S - адреса структури, де зберігаються Head і Tail стека; word - покажчик на слово, що вноситься в стек
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // виділяємо пам’ять під новий вузол
    NewNode->number = number;
    NewNode->next = *Head; // встановлюємо в новому вузлі покажчик next на колишній вузол-вершину (Head),
    *Head = NewNode; // так само - покажчик вершини стеку
}

void Pop ( PNode *Head1, PNode *Head2) // функція отримання і видалення “верхнього” вузла стеку
{
    PNode TopNode = *Head1; // покажчик на вершину стеку
    if (TopNode == NULL ){
        return;
    }
    *Head1 = (*Head1)->next;
    TopNode->next = *Head2;
    *Head2 = TopNode;
}


