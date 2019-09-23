#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    char word[40];
    int count;
    struct Node *next, *prev; // покажчики на наступний ≥ попередн≥й вузли
};

typedef struct Node *PNode;

PNode CreateNode ( char NewWord[], int count )
{
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) );
    strcpy ( NewNode->word, NewWord ); // записати у вузол слово
    NewNode->count = count; // л≥чильник сл≥в = 1
    NewNode->next = NULL; // наступного вузла поки що немаЇ
    NewNode->prev = NULL; // попереднього - теж
    return NewNode; // результат функц≥њ Ц адреса вузла
}
void AddFirst ( PNode* Head, PNode* Tail, PNode NewNode )

{
    NewNode->next = *Head;
    NewNode->prev = NULL;
    if ( *Head )
        ( *Head )->prev = NewNode;
    *Head = NewNode;
    if ( ! ( *Tail ) )
        *Tail = *Head;
}


void AddLast ( PNode* Head, PNode* Tail, PNode NewNode )
{
    NewNode->prev = *Tail;
    NewNode->next = NULL;
    if ( *Tail )
        ( *Tail )->next = NewNode;
    *Tail = NewNode;
    if ( ! ( *Head ) )
        *Head = *Tail;
}

void AddAfter ( PNode* Head, PNode* Tail, PNode p, PNode NewNode )
{
    if ( !p->next )
        AddLast ( Head, Tail, NewNode );
    else
    {
        NewNode->next = p->next;
        NewNode->prev = p;
        p->next->prev = NewNode;
        p->next = NewNode;
    }
}


void AddBefore ( PNode Head, PNode Tail, PNode p, PNode NewNode )
{
    if ( !p->prev )
        AddFirst ( &Head, &Tail, NewNode );
    else
    {
        NewNode->prev = p->prev;
        NewNode->next = p;
        p->prev->next = NewNode;
        p->prev = NewNode;
    }
}

PNode Find ( PNode Tail, char NewWord[] )
{
    PNode q = Tail;
    while ( q && strcmp ( q->word, NewWord ) )
        q = q->prev;
    return q;
}

PNode FindPlace ( PNode Tail, char NewWord[] )
{
    PNode q = Tail;
    while ( q && ( strcmp ( q->word, NewWord ) > 0 ) )
        q = q->prev;
    return q;
}

void Delete ( PNode* Head, PNode* Tail, PNode OldNode )
{
    if ( *Head == OldNode )
    {
        *Head = OldNode->next;
        if ( *Head )
            ( *Head )->prev = NULL;
        else *Tail = NULL;
    }
    else
    {
        OldNode->prev->next = OldNode->next;
        if ( OldNode->next )
            OldNode->next->prev = OldNode->prev;
        else *Tail = OldNode->prev;
    }
    free ( OldNode );
}

int main()
{
    PNode p, where, q;
    PNode Head = NULL, Tail = NULL;
    FILE *in, *out;
    char word[40];
    int n, k1, k2, i;
    in = fopen ( "input1.txt", "r" );
    if ( in != NULL )
        printf ( "File open successfull! Press ENTER\n" );
    getchar();
    while ( 1 )
    {
        n = fscanf ( in, "%s", word );
        if ( n <= 0 )
            break;
        p = Find ( Tail, word );
        if ( p )
            p->count ++;
        else
        {
            p = CreateNode ( word, 1 );
            where = FindPlace ( Tail, word );
            if ( !where )
                AddFirst ( &Head, &Tail, p );
            else
                AddAfter ( &Head, &Tail, where, p );
        }
    }
    fclose ( in );
    printf ( "Double-linked list create successfull! Press ENTER\n" );
    getchar();
    out = fopen ( "output1.txt", "w" );
    p = Tail;
    while ( p )
    {
        fprintf ( out, "%-20s%d\n", p->word, p->count );
        p = p->prev;
    }
    fclose ( out );
    printf ( "Double-linked list was saved in the file output1.txt, press ENTER\n" );
    p = Head;
    while ( p )
    {
        if ( p->count % 2 != 0 )
        {
            where = CreateNode ( p->word, p->count );
            AddBefore ( Head, Tail, p, where );
        }
        p = p->next;
    }
    out = fopen ( "output2.txt", "w" );
    p = Tail;
    while ( p )
    {
        fprintf ( out, "%-20s%d\n", p->word, p->count );
        p = p->prev;
    }
    fclose ( out );
    printf ( "Changed Double-linked list was saved in the file output2.txt, press ENTER\n" );
    Head ->prev = Tail;
    Tail->next = Head;
    do
    {
        printf ( "Enter two number k1 ( k1 > 0) and k2 ( k2 < 0): " );
        scanf ( "%i %i", &k1, &k2 );
    }
    while ( k1  <= 0 || k2 >= 0 );
    k2  = fabs ( k2 );
    p = Head;
    q = Tail;
    for ( i = 0; i < k1; i++ )
    {
        p =  p ->prev;
        q = q -> next;
    }
    Head = p;
    Tail = q;
    out = fopen ( "output3.txt", "w" );
    p = Tail;
    while ( p->prev != Tail )
    {
        fprintf ( out, "%-20s%d\n", p->word, p->count );
        p = p->prev;
    }
    fclose ( out );
    p = Head;
    q = Tail;
    for ( i = 0; i < k2; i++ )
    {
        p =  p ->next;
        q = q -> prev;
    }
    Head = p;
    Tail = q;
    out = fopen ( "output4.txt", "w" );
    p = Tail;
    while ( p->prev != Tail )
    {
        fprintf ( out, "%-20s%d\n", p->word, p->count );
        p = p->prev;
    }
    fclose ( out );
    return 0;
}
