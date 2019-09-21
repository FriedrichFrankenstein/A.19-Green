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

void Push ( PNode *Head ) // ��������� ��������� ����� � ����
{
    // S - ������ ���������, �� ����������� Head � Tail �����; word - �������� �� �����, �� ��������� � ����
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // �������� ������ �� ����� �����
    NewNode->next = *Head; // ������������ � ������ ���� �������� next �� ������� �����-������� (Head),
    *Head = NewNode; // ��� ���� - �������� ������� �����
}

void Pop ( PNode *Head ) // ������� ��������� � ��������� ���������� ����� �����
{
    PNode TopNode = *Head; // �������� �� ������� �����
    if ( TopNode == NULL ) // ���� ���� ������ (TopNode==NULL) -
        return;
    *Head = TopNode->next; // ���������� �������� ������� �� ��������� �����
    free ( TopNode ); // ��������� ������ �� �������� TopNode
}

void Pop1 ( PNode *Head1, PNode *Head2) // ������� ��� ���������� ������� Head1 �� ����� Head2
{
    PNode TopNode = *Head1; // �������� �� ������� �����
    if (TopNode == NULL ){
        return;
    }
    *Head1 = (*Head1)->next;
    TopNode->next = *Head2;
    *Head2 = TopNode;
}
