#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream fout;
	
	fout.open("out.txt",ios::out);

	char str[100] = "CSE1002 - Problem Solving using Object Oriented Programming";

	fout<<str;

	fout.close();

	return 0;
}