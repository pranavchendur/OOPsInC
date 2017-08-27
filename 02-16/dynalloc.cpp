#include <iostream>
using namespace std;
int main()
{
		int *i,*j;
		i = new int;
		j = new int;
		*i=5;
		*j=6;
		cout<<*i<<"\t"<<*j<<endl;
		delete i;
		delete j;
}		