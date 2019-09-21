#include <string.h>
#include <stdio.h>
#include <windows.h>

struct Node {
       char word[40];
       int count;
       struct Node *next, *prev; 
};
typedef struct Node* PNode;

PNode CreateNode(char* NewWord)
{
 PNode NewNode = (PNode)calloc(1,sizeof(struct Node));
 strcpy(NewNode->word, NewWord); // �������� � ����� �����
 NewNode->count = 1; // �������� ��� = 1
 NewNode->next = NULL; // ���������� ����� ���� �� ����
 NewNode->prev = NULL; // ������������ - ���
 return NewNode; // ��������� ������� � ������ �����
}

void AddBorders(PNode* Head, PNode* Tail)
// ������� ������� ����� � ������� ��������� 2 �������� - Head i Tail,
// �������� � �� ������ ��� ��������� - �����, �������� �� ��������
{
	
 *Head = CreateNode("00000000");
 *Tail = CreateNode("00000000");
 
 (*Head)->next = *Tail; // � ���� ������� - � �������� ����� ��ǲ�����Ӫ�� ��������� �� Head i Tail
 (*Tail)->prev = *Head; // � "���������" ����� ��������� ����� - �������
}

// ��������� ����� � "����"
/*void AddTail(PNode* Head, PNode* Tail, PNode NewNode)
// ��� ���� - ������� ������ 2 ��������� ���� "�������� �� ��������",
{
 NewNode->prev = *Tail; // �� � �������� ����� �����������
 NewNode->next = NULL;
 // ��� - ��� �� �����㳿 ��������� AddFirst (����� Head i Tail �������� ������)
 if (*Tail) (*Tail)->next = NewNode;
 *Tail = NewNode;
 if (!(*Head)) *Head = *Tail;
}*/

// ��������� ����� ���� ��������, � ������� � ��������� p
void AddAfter(PNode p, PNode NewNode)
{
      NewNode->next = p->next;
      NewNode->prev = p;
      p->next->prev = NewNode;
      p->next = NewNode;
}

// ����� ����������� ����� � ������
PNode FndReturn(PNode Tail, char NewWord[])
{
 PNode q = Tail->prev;
 while (q && strcmp(q->word, NewWord))
	q = q->prev;
 return q;
}

PNode FndForvard(PNode Head, char NewWord[])
{
 PNode q = Head->next;
 while (q && strcmp(q->word, NewWord))
	q = q->next;
 return q;
}

PNode FndPlaceRet(PNode Tail, char NewWord[])
{
 PNode q = Tail->prev;
 while (q->prev && (strcmp(q->word, NewWord) > 0))
	q=q->prev;
 return q;
}

PNode FndPlaceFwd(PNode Head, char NewWord[])
{
 PNode q = Head->next;
 PNode p = Head;
 while (q->next && (strcmp(q->word, NewWord) < 0)){
	p=q;
    q=q->next;
 }
 return p;
}
// ����� ������� ����� �� ������� ��������� �����
PNode fndStart(PNode Head, char c)
{
 PNode p = Head->next;
 while (p->next!=NULL) {
	if(p->word[0]==c)
		return p;
	p = p->next;
 }
 return p;
}
// ��������� ������� ����� �� ������� ���������� � �� "������"
int fndNodeAddrToHead(PNode p, PNode Head, char* kind)
{
 int count=0;
 while (p->prev!=NULL) {
	if(p->prev==Head)
		printf("%s node address is %p\n",kind,p);
	count++;
	p = p->prev;
 }
 return count;
}

// ��������� ������� ����� �� ������� ���������� � �� "������"
int fndNodeAddrToTail(PNode p, PNode Tail, char kind[])
{
 int count=0;
 while (p->next) {
	if(p->next==Tail)
		printf("%s node address is %p\n",kind,p);
	count++;
	p = p->next;
 }
 return count;
}

int main()
{
// ��������-��������� �������
 PNode p, where;
 FILE *in, *out;
 char word[40];
 int n,nHead,nTail;
 int cNodes=0; // �������� �����
 PNode Head = NULL, Tail = NULL;

// creating borders
 AddBorders(&Head, &Tail);

 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 in = fopen("input1.txt","r");
 if (in) printf("���� ������� ������! Press ENTER\n");
 getchar();

 while (1) {
	n = fscanf(in,"%s",word); // ������ ����� � �����
	if (n<=0) break;
	nHead=strcmp(Head->next->word, word); // ���������, �� ����� ���� ������
	nTail=strcmp(Tail->prev->word, word); // ��������� ����� ����������� ������
	if (nHead>nTail)
	   p = FndReturn(Tail,word); // ������ ����� � ������, ��������� � ������
    else p = FndForvard(Head,word); // ��� � ������
    if (p) // ���� ������� �����,
	   p->count++; // �������� ��������
    else { // ���� � ����� ���� - 
	     p = CreateNode(word); // ��������� ����� �����
	     if (nHead>nTail)
	        where = FndPlaceRet(Tail,word); // ������ ���� ������� �� ������
         else where = FndPlaceFwd(Head,word); // ��� �� ������
	     AddAfter(where,p); // ���������� ����� ����� � ������
    }
 }
 fclose(in);
 printf("Double-linked list create successfull! Press ENTER\n");
 getchar();

 PNode start=fndStart(Head,'�'); // ��������� �����, �� ���������� �� ����� "�"
 cNodes=fndNodeAddrToHead(start->prev,Head,"First"); // ���������� ����� �� ������
 cNodes+=fndNodeAddrToTail(start->next,Tail,"Last"); // � �� ������ (���������� �����)
 printf("List contains of %d nodes\n",cNodes+1); // �� ����� - �������� ������� + "���������" �����

// ��������� - ��������� � ������ �� ����� �� ����� "�"
 start=fndStart(Head,'�');
 cNodes=fndNodeAddrToHead(start->prev,Head,"First");
 cNodes+=fndNodeAddrToTail(start->next,Tail,"Last");
 printf("List contains of %d nodes\n",cNodes+1);

 out = fopen("output-t1.txt","w");
 p = Head->next;
 while (p->next) { // �������� ������ � ����
	fprintf(out, "%-20s\t%d\n", p->word, p->count);
	p = p->next;
 }
 fclose(out);

 return 0;
}
