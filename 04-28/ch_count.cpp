#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <list>

using namespace std;

int main() {
	fstream fout;
	list <char> vow;
	map <char,int> numV;
	list <char>::iterator vowIt;
	map <char,int>::iterator nVIt;
	fout.open("out.txt",ios::in);
	vow.push_back('a');
	vow.push_back('e');
	vow.push_back('i');
	vow.push_back('o');
	vow.push_back('u');
	char ch;
	bool present = false;
	while (!fout.eof()) {
		fout.get(ch);
		ch = tolower(ch);
		for (vowIt=vow.begin();vowIt!=vow.end();vowIt++) {
			if (*vowIt==ch) present=true;
		}
		if (present==true) {
			numV[ch]++;
			present = false;
		}
	}

	for (nVIt=numV.begin();nVIt!=numV.end();nVIt++) {
		cout<<nVIt->first<<" : "<<nVIt->second<<endl;
	}

	cout<<endl;
	
	fout.close();

	return 0;
}