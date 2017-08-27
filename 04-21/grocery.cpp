#include <iostream>

using namespace std;

class GroceryItem {
	int stockNum,price,stockQty,totalVal;
	void getStockNum() {
		do {
			cout<<"Enter Stock Number : ";
			cin>>stockNum;	
		} while(stockNum<1000 || stockNum >9999);
		
	}
	void getPrice() {
		do {
			cout<<"Enter Stock Price : ";
			cin>>price;
		} while (price<0);
	}
	void getStockQty() {
		do {
			cout<<"Enter Stock Quantity : ";
			cin>>stockQty;	
		} while (stockQty<0);
	}
	void calcTotVal() {
		totalVal = stockQty*price;
	}
	public:
		GroceryItem() {};
		~GroceryItem() {};
		void dataEntry() {
			getStockNum();
			getPrice();
			getStockQty();
			calcTotVal();
		}
		void dataDisplay() {
			cout<<"Grocery Item Data : \n";
			cout<<"Stock Number : "<<stockNum<<endl;
			cout<<"Stock Price : "<<price<<endl;
			cout<<"Stock Quantity : "<<stockQty<<endl;
			cout<<"Total Value : "<<totalVal<<endl;
		}
};

int main() {
	int i;
	GroceryItem items[10];
	for (i=0;i<10;i++) {
		cout<<"Enter Data for Item No."<<i+1<<endl;
		items[i].dataEntry();
	}
	for (i=0;i<10;i++) {
		cout<<"Displaying Data for Item No."<<i+1<<endl;
		items[i].dataDisplay();
	}
	return 0;
}