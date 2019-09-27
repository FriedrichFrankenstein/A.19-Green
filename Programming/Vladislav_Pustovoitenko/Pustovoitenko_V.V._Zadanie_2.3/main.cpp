#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

struct Employee{
    char FullName[50];
    char Sex[10];
    char DateOfBirth[10];
    char FamilyStatus[30];
    int ID;
    int BoardNumber;
    int Phone;
};

struct Node{
    Employee data;
    Node* next;
};

class List{
    Node* First;
    Node* Last;
    unsigned long long size;
public:
    List(){
        First=Last=NULL;
    }
    void AddKB(){
        Employee Emp;
        cout<<"Enter Employee: ";
        cin>>Emp.FullName>>Emp.Sex>>Emp.DateOfBirth>>Emp.FamilyStatus>>Emp.ID>>Emp.BoardNumber>>Emp.Phone;
        Add(Emp);
    }
    void Add(Employee Emp)
	{
		if(First==NULL)
		{
			First=new Node{Emp,NULL};
			Last=First;
		}
		else
		{
			Last->next=new Node{Emp,NULL};
			Last=Last->next;
		}
	}
	void Show()
	{
	    Employee Emp;
		Node* current=First;
		while(NULL!=current)
		{
			Emp=current->data;
            cout<<endl<<Emp.FullName<<endl<<Emp.Sex<<endl<<Emp.DateOfBirth<<endl<<Emp.FamilyStatus<<endl<<Emp.ID<<endl<<Emp.BoardNumber<<endl<<Emp.Phone<<endl;
            current=current->next;
		}
	}
	void SaveToBinFile()
	{
	    ofstream out;
	    out.open("TestBin.bin",ios::binary);
	    Employee Emp;
		Node* current=First;
		while(NULL!=current)
		{
			Emp=current->data;
            out<<Emp.FullName<<'\t'<<Emp.Sex<<'\t'<<Emp.DateOfBirth<<'\t'<<Emp.FamilyStatus<<'\t'<<Emp.ID<<'\t'<<Emp.BoardNumber<<'\t'<<Emp.Phone<<'\t';
            current=current->next;
		}
		out.close();
	}
	void ReadBinFile()
	{
	    ifstream in;
	    in.open("TestBin.bin",ios::binary);
	    Employee Emp;
		while(in>>Emp.FullName>>Emp.Sex>>Emp.DateOfBirth>>Emp.FamilyStatus>>Emp.ID>>Emp.BoardNumber>>Emp.Phone)
		{
            Add(Emp);
		}
		in.close();
	}
	void ReadTextFile()
	{
	    ifstream in;
	    in.open("TestTXT.txt");
	    Employee Emp;
		while(in>>Emp.FullName>>Emp.Sex>>Emp.DateOfBirth>>Emp.FamilyStatus>>Emp.ID>>Emp.BoardNumber>>Emp.Phone)
		{
            Add(Emp);
		}
		in.close();
	}
	Employee ReadFromBinFileByNum(int num)
	{
	    ifstream in;
	    in.open("TestBin.bin",ios::binary);
	    Employee Emp;
	    int k=0;
		while(in>>Emp.FullName>>Emp.Sex>>Emp.DateOfBirth>>Emp.FamilyStatus>>Emp.ID>>Emp.BoardNumber>>Emp.Phone)
		{
            k++;
            if(k==num){
                return Emp;
            }
		}
		in.close();
	}
	Employee FindByID(int ID)
	{
	    Employee Emp;
		Node* current=First;
	    int k=0;
		while(NULL!=current)
		{
            Emp=current->data;
            if(Emp.ID==ID){
                return Emp;
            }
            current=current->next;
		}
	}
	Employee FindByFullName(char* FullName)
	{
        Employee Emp;
		Node* current=First;
	    int k=0;
		while(NULL!=current)
		{
            Emp=current->data;
            if(Emp.FullName==FullName){
                return Emp;
            }
            current=current->next;
		}
	}
};

int main()
{
    List Employees;
    int k=0,num=0,ID=0;
    char* name;
    while(true){
        cout<<"Press 0 to add Personal Data\nPress 1 to read list from bin file\nPress 2 to save\nPress 3 to show all\nPress 4 to reed txt file\nPress 5 to Read from Bin By Number\nPress 6 to find by ID\nPress 7 to find by name\nAny other to exit\n";
        cin>>k;
        switch(k){
        case 0:
            Employees.AddKB();
            break;
        case 1:
            Employees.ReadBinFile();
            break;
        case 2:
            Employees.SaveToBinFile();
            break;
        case 3:
            Employees.Show();
            break;
        case 4:
            Employees.ReadTextFile();
            break;
        case 5:
            cout<<"\nEnter Personal number: ";
            cin>>num;
            Employees.ReadFromBinFileByNum(num);
            break;
        case 6:
            cout<<"\nEnter Personal ID: ";
            cin>>ID;
            Employees.FindByID(ID);
            break;
        case 7:
            cout<<"\nEnter Personal name: ";
            cin>>name;
            Employees.FindByFullName(name);
            break;
        }
    }
    return 0;
}
