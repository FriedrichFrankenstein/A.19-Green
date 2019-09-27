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

typedef struct Queue {  // Queue - ����� (����.)
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


// ��������� �������� � ����� �����
void PushTail ( PQueue Q, int x ) // ��������� ��������� ����� � ����� �����
{// Q - ������ ��������� � ����������� �� ������� � ����� �����; � - �����, �� ���� � �����
	PNode NewNode=(PNode)calloc(1,sizeof(struct Node)); // �������� ������ �� ����� �����
	NewNode->data = x; // �������� ����� � ����� �����
	NewNode->prev = Q->Tail; // �������� � �������� ������ ����� prev ������ �����, ���� ����� ��� �������
	if ( Q->Tail!=NULL ) 			// ���� ����� ���� �� ������ -
		Q->Tail->next = NewNode;	// �������� � �������� ��������������� ����� next ������ ����� �������� �����
	Q->Tail = NewNode; // ���������� �������� Tail �� ������ ������ �����
	if ( Q->Head==NULL ) 	// ���� ����� ��������� ���� ������ -
		Q->Head = Q->Tail;	// �������� ��������� Head � Tail
}

// ��������� �������� � ������� �����
int PopHead ( PQueue Q ) // ������� �����e��� ����� � ������� �����
{
	PNode TopNode = Q->Head; // �������� �� ������� �����
	int x;

	if ( TopNode==NULL ) // ���� ����� ����� -
		return 0; // �� ��������� ����� 0
	x = TopNode->data; // �������� ����� � ������� �����
	Q->Head = TopNode->next; // ���������� �������� ������� ����� �� ��������� �����
	// ���� ����� � ���� ����� ���� - Q->Head ������ �������� NULL
	if ( Q->Head!=NULL ) // ���� ����� �� ���������� ����� -
		Q->Head->prev = NULL; // ���������� �������� prev �����, ���� ���� �������� �����
	else Q->Tail = NULL; // ������ - ���������� ����� �������� �� ����� �����
	free(TopNode); // ��������� ������ �� ��������� �������� TopNode
	return x; // ��������� � ������� �������� ����� � ������� �����
}
