#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class myDetails {
	char name[30];
	char email[50];
	long int mobile;
	public:
	void get() {
		cout<<"Name : ";
		cin>>name;
		cout<<"\nEMail : ";
		cin>>email;
		cout<<"\nMobile Number : ";
		cin>>mobile;
	}
	void print() {
		cout<<"Name : ";
		cout<<name<<endl;
		cout<<"EMail : ";
		cout<<email<<endl;
		cout<<"Mobile Number : ";
		cout<<mobile<<endl;	
	}
};

int main() {
	fstream fout;
	myDetails Mobj;
	fout.open("myD_out.bin",ios::in|ios::binary);
	fout.read((char *)&Mobj,sizeof(Mobj));
	Mobj.print();
	fout.close();
	return 0;
}