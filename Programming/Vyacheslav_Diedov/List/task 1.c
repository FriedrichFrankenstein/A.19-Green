#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char name[40]; // область даних
	char city[40];
	int score;
	int place;
	struct Node* next; // адреса наступного вузла
	struct Node* prev; // адреса попереднього вузла
}* PNode;

char teams[][20]={"Ludogorec", "Dunav", "Beroe", "Levsky", "Cherno More", "Lokomotiv", "Etyr","Neftohimik", "Botev", "Slavia"};
char towns[][20]={"Razgrad", "Ruse", "Stara Zagora", "Sofia", "Varna", "Plowdyv", "Veliko Tyrnovo","Burgas","Plovdyw","Sofia"};

PNode CreateNode(int i)
{
	PNode NewNode =(PNode)calloc(1,sizeof(struct Node)); // покажчик на новий вузол
	if(i>=0){
		strcpy(NewNode->name, teams[i]); 
		strcpy(NewNode->city, towns[i]); 
	}
	return NewNode; // результат функції – адреса створеного вузла
}

void AddBorders(PNode* Head, PNode* Tail)
{
 *Head = CreateNode(-1);
 *Tail = CreateNode(-1);
 
 (*Head)->next = *Tail; // з цієї причини - в потрібних місцях РОЗІМЕНОВУЄМО покажчики на Head i Tail
 (*Tail)->prev = *Head; // у "головного" вузла попередній вузол - відсутній
}

void AddAfter(PNode p, PNode NewNode)
{
      NewNode->next = p->next;
      NewNode->prev = p;
      p->next->prev = NewNode;
      p->next = NewNode;
}

int main()
{
	PNode Head,Tail,p,q;
	int n,i;
	
	do{
		printf("How many clubs? n=");
		scanf("%i",&n);
	}while (n<1);
	
	AddBorders(&Head, &Tail);// створити бар'єри
	
	for(i=0;i<n;i++){
		if(i>9) break; // припинити, якщо введене число більше, ніж є клубів у масивах
		p=CreateNode(i); // виділ. пам'ять під вузол
		printf("%s %s score=",p->name,p->city);
		scanf("%i",&p->score); // ввести кількість очок
		if(Head->next==Tail) // якщо список порожній -
			AddAfter(Head, p); // вставити вузол між бар'єрами
		else{ // інакше - обхід списку і пошук місця вставки
			q=Head; // стартуємо з "голови" 
			while(q->next!=NULL){ // поки не дійдемо до "хвоста"
				if(p->score >= q->next->score) // якщо наступний клуб має менше очок, ніж новий
				{
					AddAfter(q, p); //вставка нового вузла перед цим клубом
					break; // і припинення обходу
				}
				q=q->next; // перехід на наступний вузол
			}
		}	
	}
	n=i; // фіксуємо реальну кількість вузлів у списку
	p=Head->next; // починаємо обхід списку з першого клубу
	for(i=1;i<=n;i++){
		p->place=i; // фіксуємо місце в таблиці (списку)
		printf("%i %s %s %i\n",p->place,
		       p->name,p->city,p->score); // вивід на екран даних про клуб
		p=p->next; // перехід на наступний
	}
	
	return 0;
}
