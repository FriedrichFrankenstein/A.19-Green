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
        number = rand() % 100;
        printf("Stack1 = %i\n", number);
        Push (&Strack1, number);
    }
    printf("\n\n\n\n");
    for (i = 0; i < 8; i++){
        printf("Enter number to enter in stack: ");
        number = rand() % 100;
        printf("Stack2 = %i\n", number);
        Push (&Strack2, number);
    }
    while (Strack1 != NULL){
            Pop (&Strack1, &Strack2);
    }
    Temp = Strack2;
    while (Temp != NULL){

        printf("Struck = %i\n", Temp->number);
        printf("Stack = %i\n", Temp->number);
        Temp = Temp->next;
    }
    getch();
    return 0;
}

void Push ( PNode *Head, int number ) // ��������� ��������� ����� � ����
{
    // S - ������ ���������, �� ����������� Head � Tail �����; word - �������� �� �����, �� ��������� � ����
    PNode NewNode = ( PNode ) calloc ( 1, sizeof ( struct Node ) ); // �������� ������ �� ����� �����
    NewNode->number = number;
    NewNode->next = *Head; // ������������ � ������ ���� �������� next �� ������� �����-������� (Head),
    *Head = NewNode; // ��� ���� - �������� ������� �����
}

void Pop ( PNode *Head1, PNode *Head2) // ������� ��������� � ��������� ���������� ����� �����
{
    PNode TopNode = *Head1; // �������� �� ������� �����
    if (TopNode == NULL ){
        return;
    }
    *Head1 = (*Head1)->next;
    TopNode->next = *Head2;
    *Head2 = TopNode;
}


