#include <stdio.h>
#include <stdlib.h>
#include <conio.h>




int main ()
{
    return 0;
}



struct Node
{
    char name [20];
    char city [20];
    char land [20];
    float budget ;
    int place;
    struct *Node next;
    struct *Node prev;
}

typedef struct Node *PNode;

PNode CreateNode ( char name [20], char city [20], char land [20], float budget, int place; )
{
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) );
    strcpy ( NewNode->name, name );
    strcpy ( NewNode->city, city );
    strcpy ( NewNode->land, land );
    NewNode->budget = budget;
    NewNode->place = place;
    return NewNode;
}

PNode Find ( PNode Tail, char* city )
{
    PNode q = Tail;
    while ( q && strcmp ( q->city, city ) = ! 0 )
    {
        q = q->prev;
    }
    return q;
}

void Delete ( PNode *Head, PNode *Tail, PNode OldNode )

{
    if ( *Head == OldNode )
    {
        *Head = OldNode->next;
        if ( *Head )
            *Head->prev = NULL;
        else
            *Tail = NULL;
    }
    else
    {
        OldNode->prev->next = OldNode->next;
        if ( OldNode->next )
            OldNode->next->prev = OldNode->prev;
        else
            *Tail = OldNode->prev;
    }
    free ( OldNode );
}

void Circled ( PNode Head, PNode *Tail )

{
    Head->prev = *Tail;
    *Tail->next = Head;
    *Tail = NULL;
}
