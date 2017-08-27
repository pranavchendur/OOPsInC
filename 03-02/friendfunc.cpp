#include <iostream>
using namespace std;

class Customer {
	private:
		int CustNum;
		double balanceDue;
	public:
		Customer(int=0,double=0.0);
		void displayCustomer();
		friend void displayAsAFriend(Customer);
};

Customer::Customer(int num, double balance) {
	CustNum = num;
	balanceDue = balance;
}

void Customer::displayCustomer() {
	cout<<"Member Function \n";
	cout<<"CNum : "<<CustNum<<endl;
	cout<<"Balance Due : "<<balanceDue<<endl;
}
	
void displayAsAFriend(Customer a) {
	cout<<"Friend Function \n";
	cout<<"CNum : "<<a.CustNum<<endl;
	cout<<"Balance Due : "<<a.balanceDue<<endl;
}

int main() {
		Customer demo(101,455.5);
		demo.displayCustomer();
		displayAsAFriend(demo);
		return 0;
}