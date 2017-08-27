/*
	Class Television - modnum, scrnsize, price
	if modnum length>4 , if scrnsiz < 12 or >70 , if price <0 or >50000
	then throw error and catch exc
*/

#include <iostream>
#include <string.h>
using namespace std;

class Television
{
	char modNum[10];
	int scrSize,price;
public:
	Television() {	}
	~Television() {	}
	void getData() {
		cin>>modNum;
		cin>>scrSize;
		cin>>price;
		if (strlen(modNum) > 4)
			throw(modNum);
		if (scrSize >70 || scrSize < 12)
		 	throw(scrSize);
		if (price >50000 || price < 0)
		 	throw(price);
	}
};

main() {
	Television t1;
	try {
		t1.getData();
	}
	catch (int a) {
		cout<<"Screen Size (or) Cost exception : "<<a<<endl;
	}
	catch (char *a) {
		cout<<"Model Number exception : "<<a<<endl;
	}
}