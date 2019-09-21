#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int MAX = 10; 
char str[MAX];
cout << "Input string: "; 
cin >>setw(MAX)>>str;
cout << "You’ve input: " << str;
int i;
char* p;
p = str;
for ( i = 0; i < MAX; i++){
	if ( *p == NULL)break;
	cout<< "\n"<< *p ;
	p++;
}
return 0;
}
