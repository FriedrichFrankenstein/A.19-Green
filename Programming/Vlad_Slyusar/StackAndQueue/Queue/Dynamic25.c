#include <stdio.h>
#include <conio.h>
#include <malloc.h>


struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

typedef struct Node* PNode;

typedef struct Queue    // Queue - черга (англ.)
{
    PNode Head;
    PNode Tail;
}* PQueue;


void PushTail ( PQueue Q, int x );

void PopHead ( PQueue Q, PQueue Q1 );


int main()
{
    PQueue Queue1, Queue2, Queue3;
    Queue1 = ( PQueue ) calloc ( sizeof ( struct Queue ), 1 );
    Queue2 = ( PQueue ) calloc ( sizeof ( struct Queue ), 1 );
    Queue3 = ( PQueue ) calloc ( sizeof ( struct Queue ), 1 );
    int i, x;
    for ( i = 0; i < 10; i++ )
    {
        x = i * 2 + 2;
        PushTail ( Queue2, x );
        x = i * 9 + 5;
        PushTail ( Queue1, x );
    }
    PNode p, q;
    p = Queue1->Head;
    q = Queue2->Head;
    for ( i = 0; i < 10; i++ )
    {
        printf ( "number %i = %i %i\n", i, p->data, q->data );
        p = p->next;
        q = q->next;
    }
    while ( Queue1->Head != NULL || Queue2 ->Head != NULL )
    {
        if ( Queue1->Head != NULL &&  Queue2 ->Head != NULL )
        {
            if ( ( Queue1->Head->data < Queue2->Head->data ) )
            {
                PopHead ( Queue1, Queue3 );
            }
            else
            {
                PopHead ( Queue2, Queue3 );
            }
        }
        else if ( Queue1->Head == NULL )
        {
            printf("TRUE");
            PopHead ( Queue2, Queue3 );
        }
        else if ( Queue2->Head == NULL )
        {
            PopHead ( Queue1, Queue3 );
        }
    }
    printf ( "\n\n\n" );
    PNode p1;
    p1 = Queue3->Head;
    while ( p1 != NULL )
    {
        printf ( "number %i \n", p1->data );
        p1 = p1->next;
    }
    getch();
    return 0;
}


// додавання елемента в кінець черги
void PushTail ( PQueue Q, int x ) // процедура додавання вузла в кінець черги
{
    // Q - адреса структури з покажчиками на початок і кінцеь черги; х - число, що “стає в чергу”
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // виділяємо пам’ять під новий вузол
    NewNode->data = x; // записуємо число в новий вузол
    NewNode->prev = Q->Tail; // записуємо в покажчик нового вузла prev адресу вузла, який раніше був останнім
    if ( Q->Tail != NULL ) 			// якщо черга була не пустою -
        Q->Tail->next = NewNode;	// записуємо в покажчик передостаннього вузла next адресу щойно доданого вузла
    Q->Tail = NewNode; // пересуваємо покажчик Tail на адресу нового вузла
    if ( Q->Head == NULL ) 	// якщо черга початково була пустою -
        Q->Head = Q->Tail;	// зрівнюємо покажчики Head і Tail
}

// вилучення елемента з початку черги
void PopHead ( PQueue Q, PQueue Q1 ) // функція видалeння вузла з початку черги
{
    PNode TopNode = Q->Head; // покажчик на початок черг
//    if ( TopNode == NULL ) // якщо черга пуста -
//        return 0; // то повернути число 0
    Q->Head = Q->Head->next;
    if ( Q1->Tail == NULL )
    {
        Q1->Tail = TopNode;
        Q1->Tail->next = NULL;
        if ( Q1->Head == NULL )
        {
            Q1->Head = Q1->Tail;
        }
        return;
    }
    Q1->Tail->next = TopNode;
    Q1->Tail = TopNode;
    if ( Q->Head != NULL ) // якщо черга не залишилася пуста -
        Q->Head->prev = NULL; // “обнуляємо” покажчик prev вузла, який став початком черги
    else
        Q->Tail = NULL; // інакше - “обнуляємо” також покажчик на кінець черги
}
