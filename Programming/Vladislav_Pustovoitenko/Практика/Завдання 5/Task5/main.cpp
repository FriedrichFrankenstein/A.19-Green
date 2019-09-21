#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <windows.h>

using namespace std;

void FirstLetterTwice(char* words[7],int N){
	cout<<"a) ";
	string str;
	for(int i=0;i<N;i++){
		str=words[i];
		for(int j=1;j<str.length();j++){
			if(str[0]==str[j] && str!=words[N-1]){
				cout<<str<<" ";
				break;
			}
		}
	}
	cout<<"."<<endl;
}
void FromAtoZ(char* words[7],int N){
	cout<<"b) ";
	string str;
	for(int i=0;i<N;i++){
		str=words[i];
		char k='a';
		int j=0;
		string stralf="";
		for(j=0,k='a';j<str.length();j++,k++){
			stralf+=k;
		}
		if(str==stralf && str!=words[N-1])
			cout<<str<<" ";
	}
	cout<<"."<<endl;
}
void MinLength(char* words[7],int N){
	cout<<"c) ";
	string str;
	int min;
	for(int i=0;i<N;i++){
		str=words[i];
		if(str.length()<min){
			min=str.length();
		}
	}
	for(int i=0;i<N;i++){
		str=words[i];
		if(str.length()==min && str!=words[N-1]){
			cout<<str<<"\t";
		}
	}
	cout<<"."<<endl;
}
void WithoutDoubleLetters(char* words[7],int N){
	cout<<"d) ";
	string str;
	bool fl;
	for(int i=0;i<N-1;i++){
		str=words[i];
		fl=true;
		for(int j=0;j<str.length();j++){
			for(int k=0;k<str.length();k++){
				if(str[j]==str[k] && j!=k &&j!=N-1&&k!=N-1){
					fl=false;
					break;
				}
			}
		}
		if(fl && str!=words[N-1])
			cout<<str<<" ";
	}
	cout<<"."<<endl;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	ifstream in("data.txt");
	string put;
	getline(in,put);
	char* input=new char[put.length() + 1];
	strcpy(input, put.c_str());
	in.close();
	char* words[7];
	char* point;
	string str;
	point=strtok(input," ,.");
	int i=0;
	while(point!=NULL){
		words[i]=point;
		point=strtok(NULL," ,.");
		i++;
	}
	int N=i;
	cout<<"якщо перша буква зустр≥чаЇтьс€ 2 рази:\n";
	FirstLetterTwice(words,N);
	cout<<"якщо зб≥гаЇтьс€ з алфав≥том:\n";
	FromAtoZ(words,N);
	cout<<"Ќайменше слово:\n";
	MinLength(words,N);
	cout<<"—лова без повтору букв:\n";
	WithoutDoubleLetters(words,N);

	delete [] input;
	delete [] point;
	return 0;
}
