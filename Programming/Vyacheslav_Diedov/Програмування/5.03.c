#include <iostream>

int main(){
const int MAX = 20; 
char str[MAX];
cout << "Input string: "; 
cin >> setw(MAX) >> str;
cout << "You’ve input: " << str << endl;
int i;
char* p;
p = str;
for ( i = 0; i < MAX; i++){
	if ( *p == NULL)break;
	printf("%c\n", *p);
	p++;
}
return 0;
}
