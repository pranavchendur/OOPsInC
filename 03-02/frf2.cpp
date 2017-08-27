#include <iostream>
using namespace std;

class Vendor;

class Customer {
	private:
		int CustNum;
		double balanceDue;
	public:
		Customer(int=0,double=0.0);
		~ Customer() {};
		friend void displayData(Customer&, Vendor&);
};

class Vendor  {
private:
	int VendorNum;
public:
	 Vendor(int=0);
	~ Vendor() {};
	friend void displayData(Customer&, Vendor&);
};

Vendor::Vendor(int num) {
	VendorNum = num;
}

Customer::Customer(int num, double balance) {
	CustNum = num;
	balanceDue = balance;
}
	
void displayData(Customer &a, Vendor &b) {
	cout<<"CNum : "<<a.CustNum<<endl;
	cout<<"Balance Due : "<<a.balanceDue<<endl;
	cout<<"Vendor : "<<b.VendorNum<<endl;
}

int main() {
		Customer demo(101,455.5);
		Vendor demoa(201);
		displayData(demo,demoa);
		return 0;
}