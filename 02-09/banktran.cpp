#include <iostream>
using namespace std;

struct account {
	int num;
	int balance;
};

void transfer(struct account *from,struct account *to, int amount) {
	from->balance-=amount;
	to->balance+=amount;
}

int main() {
	int amount;
	struct account b1 = {1,2000};
	struct account b2 = {2,3000};
	cout<<"Enter Amount to transfer : "<<endl;
	cin>>amount;
	cout<<"Amount before transfer : \n";
	cout<< "Account 1 : "<<b1.balance<<" Account 2 : "<<b2.balance<<endl; 
	transfer(&b1,&b2,amount);
	cout<<"Amount after transfer : \n";
	cout<< "Account 1 : "<<b1.balance<<" Account 2 : "<<b2.balance<<endl; 
	return 0;
}