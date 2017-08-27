#include <iostream>
#include <string.h>

using namespace std;

struct accounts {
	int acno;
	char name[50];
	float deposit;	
}list;

void create(char name[], int acno, int deposit=1000) {
	list.acno=acno;
	strcpy(list.name,name);
	list.deposit=deposit;
	cout<<"Created\n";
}

int main() {
	int acn;
	float deposit;
	char name[50];
	cin>>acn;
	cin>>name;
	cin>>deposit;
	create(name,acn,(deposit>=1000)?deposit:);
	cout<<acn;
	cout<<name;
	cout<<deposit;
	return 0;
}