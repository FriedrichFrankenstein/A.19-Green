#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;

void A(char* words[7],int N){
	cout<<"a) ";
	string str;
	for(int i=0;i<N;i++){
		str=words[i];
		for(int j=1;j<str.length();j++){
			if(str[0]==str[j]){
				cout<<str<<" ";
				break;
			}
		}
	}
	cout<<endl;
}
void B(char* words[7],int N){
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
		if(str==stralf)
			cout<<str<<" ";
	}
	cout<<endl;
}
void C(char* words[7],int N){
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
		if(str.length()==min){
			cout<<str<<"\t";
		}
	}
	cout<<endl;
}
void D(char* words[7],int N){
	cout<<"d) ";
	string str;
	bool fl;
	for(int i=0;i<N;i++){
		str=words[i];
		fl=true;
		for(int j=0;j<str.length();j++){
			for(int k=0;k<str.length();k++){
				if(str[j]==str[k] && j!=k){
					fl=false;
					break;
				}
			}
		}
		if(fl)
			cout<<str<<" ";
	}
	cout<<endl;
}

int main(){
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

	A(words,N);
	B(words,N);
	C(words,N);
	D(words,N);

	delete [] input;
	delete [] point;
	return 0;
}
