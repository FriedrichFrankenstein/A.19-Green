#include <string.h>
#include <stdio.h>
#include <windows.h>

struct Node {
	char word[40]; // область даних
	int count;
	struct Node* next; // адреса наступного вузла
};

typedef struct Node* PNode; // вводимо синонім типу даних: покажчик на вузол
//PNode Head = NULL; // покажчик на "голову" списку

// створення нового вузла
PNode CreateNode(char NewWord[])
{
	PNode NewNode =(PNode)calloc(1,sizeof(struct Node)); // покажчик на новий вузол
	strcpy(NewNode->word, NewWord); // записати у возол слово
	NewNode->count = 1; // лічильник слів = 1
	NewNode->next = NULL; // наступного вузла - поки немає
	return NewNode; // результат функції – адреса створеного вузла
}

// додавання вузла на початок списку
PNode AddFirst (PNode Head, PNode NewNode)
{
	NewNode->next = Head;
	return Head = NewNode;
}

// додавання вузла після заданого
void AddAfter (PNode p, PNode NewNode)
{
	NewNode->next = p->next;
	p->next = NewNode;
}

// додавання вузла перед заданим
PNode AddBefore(PNode Head, PNode p, PNode NewNode)
{
	PNode q = Head;
	if (Head == p) {
		Head=AddFirst(Head, NewNode); // вставка перед першим вузлом
		return Head;
	}
	while (q && q->next!=p) // шукаємо вузол, за яким слідує p
		q = q->next;
	//if ( q ) // якщо знайшли такий вузол -
		AddAfter(q, NewNode); // додати новий після нього
	return Head;
}

// додавання вузла в кінець спису
PNode AddLast(PNode Head, PNode NewNode)
{
	PNode q = Head;
	if (Head == NULL) { // якщо список пустий -
		Head=AddFirst(Head, NewNode); // вставляємо елемент в якості Head
		return Head;
	}
	while (q->next) q = q->next; // шукаємо останній елемент
	AddAfter(q, NewNode);	// додаємо новий після нього
	return Head;
}

// пошук адреси вузла з потрібними даними
PNode Find (PNode Head, char NewWord[])
{
	PNode q = Head;
	while (q && strcmp(q->word, NewWord)) // критерій пошуку -
	// співпадіння шуканого слова зі словом у вузлі (або поки не прийшли в кінець списку)
		q = q->next;
	return q;
}

// пошук адреси як орієнтиру для вставки нового вузла
PNode FindPlace (PNode Head, char NewWord[])
{
	PNode q = Head;
	while (q && (strcmp(q->word, NewWord) < 0)) // додатковий критерій пошуку -
	// різниця ASCII-кодів перших неоднакових символів у словах (з метою сортуваня за алфавітом)
		q = q->next;
	return q;
}

// вилучення непотрібного вузла
PNode DeleteNode(PNode Head, PNode OldNode)
{
	PNode q = Head;
	if (Head == OldNode){	// якщо вузол співпадає з "головою" -
		Head = OldNode->next; // вилучаємо перший елемент
	//	return Head;
	}
	else {
		while (q && q->next != OldNode) // інакше - шукаємо  элемент q,
			q = q->next;				// який стоїть перед вилучаємим
		if (q == NULL) return Head; // якщо пройшли весь список і не знайшли - вихід з процедури
		q->next = OldNode->next; // інакше - "замикаємо" попередній вузол на той,
	}							// що стоїть за видаляємим
	free(OldNode); // звільняємо пам'ять, виділену раніше під вузол, який видаляється
	return Head;
}

PNode FindTask (PNode Head)
{
	PNode q = Head;
//	if (Head->word <= 5 || Head->count > 1) Head = q->next;
	while (q != NULL) { 
		if ( strlen ( q->word ) < 5 || q->count > 1 ){
		printf("Count = %i, word - %s\n",q->count, q->word);
		Head = DeleteNode(Head, q);
	}
		q = q->next;
	}
	return Head;
}

int main()
{
// Алфавітно-частотний словник
	PNode Head = NULL, p, where;	// покажчики на структури даних - потенційні вузли списку
	FILE *in, *out;					// покажчики на файли, в яких зберігаються дані
	char word[40];					// допоміжні
	int n;							// змінні

	in = fopen("input1.txt","r");
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	if (in!=NULL) printf("File open successfull! Press ENTER\n");
	getchar();
	while (fscanf(in,"%s",word)!=EOF) {
		//n = fscanf(in,"%s",word); // читаємо слово з файлу
		//if (n<=0) break;		// якщо файл пустий - вихід з циклу
		p = Find(Head,word); 	// шукаємо слово в списку
		if (p!=NULL) 			// якщо знайшли - 
			p->count ++; 		// збільшуємо лічильник
		else {
			p = CreateNode(word); // інакше - створюємо новий вузол
			where = FindPlace(Head,word); // шукамо місце для вставки за алфавітом
			if (!where)				// якщо не знайшли -
				Head=AddLast(Head,p);	// вставляємо вузол зі словом в кінець списку 
			else Head=AddBefore(Head,where,p); // інакше - вставляємо вузол перед знайденим (місце вставки)
		}
	}
	fclose(in);
	printf("Read successfull! Press ENTER\n");
	getchar();
	Head = FindTask (Head);
	out = fopen("output.txt","w");
	p = Head;
	while (p) { // прохід по списку і виведення результатів
		printf("%-20s\t%d\n", p->word, p->count);
		fprintf(out, "%-20s\t%d\n", p->word, p->count);
		p = p->next;
	}
	fclose(out);
	getchar();
}
