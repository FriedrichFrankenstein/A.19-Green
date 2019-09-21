#include <string.h>
#include <stdio.h>
#include <windows.h>

struct Node
{
    char word[40]; // ������� �����
    int count;
    struct Node* next; // ������ ���������� �����
};

typedef struct Node* PNode; // ������� ������ ���� �����: �������� �� �����
//PNode Head = NULL; // �������� �� "������" ������

PNode CreateBorders (PNode *Head, PNode *leftBorder){
     *Head = ( PNode ) calloc(1, sizeof ( struct Node ));
     *leftBorder = ( PNode ) calloc(1, sizeof ( struct Node ));
    (*Head) ->next = *leftBorder;
    (*leftBorder)->next = NULL;
}

// ��������� ������ �����
PNode CreateNode ( char NewWord[] )
{
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // �������� �� ����� �����
    strcpy ( NewNode->word, NewWord ); // �������� � ����� �����
    NewNode->count = 1; // �������� ��� = 1
    NewNode->next = NULL; // ���������� ����� - ���� ����
    return NewNode; // ��������� ������� � ������ ���������� �����
}

// ��������� ����� �� ������� ������
//PNode AddFirst ( PNode Head, PNode NewNode )
//{
//    NewNode->next = Head;
//    return Head = NewNode;
//}

// ��������� ����� ���� ��������
void AddAfter ( PNode p, PNode NewNode )
{
    NewNode->next = p->next;
    p->next = NewNode;
}

// ��������� ����� ����� �������
PNode AddBefore ( PNode Head, PNode p, PNode NewNode, PNode leftBorder )
{
    PNode q = Head;
    while ( q != leftBorder && q->next != p ) // ������ �����, �� ���� ���� p
        q = q->next;
    //if ( q ) // ���� ������� ����� ����� -
    AddAfter ( q, NewNode ); // ������ ����� ���� �����
    return Head;
}

// ��������� ����� � ����� �����
PNode AddLast ( PNode Head, PNode NewNode, PNode leftBorder )
{
    PNode q = Head;
    while ( q->next != leftBorder )
        q = q->next; // ������ ������� �������
    AddAfter ( q, NewNode );	// ������ ����� ���� �����
    return Head;
}

// ����� ������ ����� � ��������� ������
PNode Find ( PNode Head, char NewWord[], PNode leftBorder )
{
    PNode q = Head;
    while ( q  && strcmp ( q->word, NewWord ) ) // ������� ������ -
        // ��������� �������� ����� � ������ � ���� (��� ���� �� ������� � ����� ������)
        q = q->next;
    return q;
}

// ����� ������ �� ������� ��� ������� ������ �����
PNode FindPlace ( PNode Head, char NewWord[], PNode leftBorder )
{
    PNode q = Head;
    while ( q != leftBorder && ( strcmp ( q->word, NewWord ) < 0 ) ) // ���������� ������� ������ -
        // ������ ASCII-���� ������ ����������� ������� � ������ (� ����� ��������� �� ��������)
        q = q->next;
    return q;
}

// ��������� ����������� �����
PNode DeleteNode ( PNode Head, PNode OldNode, PNode leftBorder )
{
        PNode q = Head;
        while ( q && q->next != OldNode ){ // ������ - ������  ������� q,
            q = q->next;
            				// ���� ����� ����� ���������
        if ( q ->next == leftBorder )
            return Head;
            } // ���� ������� ���� ������ � �� ������� - ����� � ���������
        q->next = OldNode->next; // ������ - "��������" ��������� ����� �� ���,
    							// �� ����� �� ����������
    free ( OldNode ); // ��������� ���'���, ������� ����� �� �����, ���� �����������
    return Head;
}

int main()
{
// ��������-��������� �������
    PNode Head = NULL, p, where, leftBorder;	// ��������� �� ��������� ����� - ��������� ����� ������
    CreateBorders(&Head, &leftBorder);
    FILE *in, *out;					// ��������� �� �����, � ���� ����������� ���
    char word[40];					// �������
    int n;							// ����
    in = fopen ( "input1.txt", "r" );
    SetConsoleCP ( 1251 );
    SetConsoleOutputCP ( 1251 );
    if ( in != NULL )
        printf ( "File open successfull! Press ENTER\n" );
    getchar();
    while ( fscanf ( in, "%s", word ) != EOF )
    {
        //n = fscanf(in,"%s",word); // ������ ����� � �����
        //if (n<=0) break;		// ���� ���� ������ - ����� � �����
        p = Find ( Head, word, leftBorder ); 	// ������ ����� � ������
        if ( p != NULL ) 			// ���� ������� -
            p->count ++; 		// �������� ��������
        else
        {
            p = CreateNode ( word ); // ������ - ��������� ����� �����
            where = FindPlace ( Head, word, leftBorder ); // ������ ���� ��� ������� �� ��������
            if ( !where )				// ���� �� ������� -
                Head = AddLast ( Head, p, leftBorder );	// ���������� ����� � ������ � ����� ������
            else
                Head = AddBefore ( Head, where, p, leftBorder ); // ������ - ���������� ����� ����� ��������� (���� �������)
        }
    }
    fclose ( in );
    printf ( "Read successfull! Press ENTER\n" );
    getchar();
    out = fopen ( "output.txt", "w" );
    p = Head;
    while ( p ) // ������ �� ������ � ��������� ����������
    {
        printf ( "%-20s\t%d\n", p->word, p->count );
        fprintf ( out, "%-20s\t%d\n", p->word, p->count );
        p = p->next;
    }
    p = Head;
    while ( p )
    {
        if ( p->count > 1 || strlen ( p->word ) < 5 )
        {
            Head = DeleteNode ( Head, p, leftBorder );
        }
        p = p->next;
    }
    printf("\n\nn\n\n\nAfter deleted\n\n\n\n\n");
    p = Head;
    while ( p ) // ������ �� ������ � ��������� ����������
    {
        printf ( "%-20s\t%d\n", p->word, p->count );
        fprintf ( out, "%-20s\t%d\n", p->word, p->count );
        p = p->next;
    }
        PNode q = Head;
      //  printf("Test = %s %i\n", q->word, q->count);
    fclose ( out );
    getchar();
    return 0;
}


