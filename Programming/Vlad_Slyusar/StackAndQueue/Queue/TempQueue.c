#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct Node
{
    int number;
    struct Node* next;
    struct Node* prev;
};

typedef struct Node* PNode;

typedef struct Queue {  // Queue - черга (англ.)
	PNode Head;
	PNode Tail;
}* PQueue;

void Push ( PNode *Head );

void Pop ( PNode *Head );

void Pop1 ( PNode *Head1, PNode *Head2);


int main()
{
    getch();
    return 0;
}


// додавання елемента в кінець черги
void PushTail ( PQueue Q, int x ) // процедура додавання вузла в кінець черги
{// Q - адреса структури з покажчиками на початок і кінцеь черги; х - число, що “стає в чергу”
	PNode NewNode=(PNode)calloc(1,sizeof(struct Node)); // виділяємо пам’ять під новий вузол
	NewNode->data = x; // записуємо число в новий вузол
	NewNode->prev = Q->Tail; // записуємо в покажчик нового вузла prev адресу вузла, який раніше був останнім
	if ( Q->Tail!=NULL ) 			// якщо черга була не пустою -
		Q->Tail->next = NewNode;	// записуємо в покажчик передостаннього вузла next адресу щойно доданого вузла
	Q->Tail = NewNode; // пересуваємо покажчик Tail на адресу нового вузла
	if ( Q->Head==NULL ) 	// якщо черга початково була пустою -
		Q->Head = Q->Tail;	// зрівнюємо покажчики Head і Tail
}

// вилучення елемента з початку черги
int PopHead ( PQueue Q ) // функція видалeння вузла з початку черги
{
	PNode TopNode = Q->Head; // покажчик на початок черги
	int x;

	if ( TopNode==NULL ) // якщо черга пуста -
		return 0; // то повернути число 0
	x = TopNode->data; // отримуємо число з початку черги
	Q->Head = TopNode->next; // пересуваємо покажчик початку черги на наступний вузол
	// якщо вузлів у черзі більше немає - Q->Head прийме значення NULL
	if ( Q->Head!=NULL ) // якщо черга не залишилася пуста -
		Q->Head->prev = NULL; // “обнуляємо” покажчик prev вузла, який став початком черги
	else Q->Tail = NULL; // інакше - “обнуляємо” також покажчик на кінець черги
	free(TopNode); // звільняємо пам’ять від крайнього елемента TopNode
	return x; // повертаємо в основну програму число з початку черги
}
