#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream fout;
	fout.open("out_num.txt",ios::in);
	int cal,odd=0,even=0;

	while (!fout.eof()) {
		fout>>cal;
		if (cal%2==0) {
			even++;
		}
		else {
			odd++;
		}
	}

	
	cout<<odd<<" : "<<even<<endl;


	cout<<endl;
	
	fout.close();

	return 0;
}