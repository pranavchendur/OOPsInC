#include<iostream>
#include <exception>
using namespace std;
#include<string>
//Collection of data in which search has to be made
//and data to be searched may be different
//so have two template class variables
template<class T,class S>
int count(T *data,int size, S search);
class book
{
    int id;
    string name;
    string a_Name;
    float price;
    public:
    void get();
    // overload the '==' operator to check if
    // name of book is same as the string passed
    //return true if it is same
    bool operator==(string);
};

bool book::operator==(string a) {
	if (strcmp(name,a)==0)
		return true;
	else
		return false;
}

void book::get() {
	cin>>id;
	cin>>name;
	cin>>a_Name;
	cin>>price;
}

int intOpt(int n) {
	int inp,i,toSearch,count=0;
	int intStor[n];
	for (i=0;i<n;i++) {
		cin>>intStor[i];
	}
	cin>>toSearch;
	for (i=0;i<n;i++) {
		if (intStor[i] == toSearch)
			count++;
	}
	return count;
}

int charOpt(int n) {
	int i,count=0;
	char inp,toSearch;
	char charStor[n];
	for (i=0;i<n;i++) {
		cin>>charStor[i];
	}
	cin>>toSearch;
	for (i=0;i<n;i++) {
		if (charStor[i] == toSearch)
			count++;
	}
	return count;
}

int bookOpt(int n) {
	int i,count=0;
	char inp;
	string toSearch;
	book items[n];
	for (i=0;i<n;i++) {
		items[i].get();
	}
	cin>>toSearch;
	for (i=0;i<n;i++) {
		if (items[i]==toSearch)
			count++:
	}
	return count;
}

int main() {
	int opt,n,countPrint;
	cin>>opt;
	cin>>n;
	switch(opt) {
		case 1:
			countPrint = intOpt(n);
			cout<<"0) The count is "<<countPrint<<endl;
			break;
		case 2:
			countPrint = charOpt(n);
			cout<<"1) The count is "<<countPrint<<endl;
			break;
		case 3:
			countPrint = bookOpt(n);
			cout<<"2) The count is "<<countPrint<<endl;
			break;
	}
	return 0;
}