#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream fout;
	
	fout.open("out.txt",ios::in);

	char ch;

	while (!fout.eof()) {
		fout.get(ch);
		cout<<ch;
	}

	cout<<endl;
	
	fout.close();

	return 0;
}