#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct Node
{
    int number;
    struct Node* next;
};

typedef struct Node* PNode;

void Push ( PNode *Head );

void Pop ( PNode *Head );

void Pop1 ( PNode *Head1, PNode *Head2);


int main()
{
    getch();
    return 0;
}

void Push ( PNode *Head ) // процедура додавання вузла в стек
{
    // S - адреса структури, де зберігаються Head і Tail стека; word - покажчик на слово, що вноситься в стек
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // виділяємо пам’ять під новий вузол
    NewNode->next = *Head; // встановлюємо в новому вузлі покажчик next на колишній вузол-вершину (Head),
    *Head = NewNode; // так само - покажчик вершини стеку
}

void Pop ( PNode *Head ) // функція отримання і видалення “верхнього” вузла стеку
{
    PNode TopNode = *Head; // покажчик на вершину стеку
    if ( TopNode == NULL ) // якщо стек пустий (TopNode==NULL) -
        return;
    *Head = TopNode->next; // пересуваємо покажчик вершини на наступний вузол
    free ( TopNode ); // звільняємо пам’ять від елемента TopNode
}

void Pop1 ( PNode *Head1, PNode *Head2) // функція для переміщення вершини Head1 до стеку Head2
{
    PNode TopNode = *Head1; // покажчик на вершину стеку
    if (TopNode == NULL ){
        return;
    }
    *Head1 = (*Head1)->next;
    TopNode->next = *Head2;
    *Head2 = TopNode;
}
