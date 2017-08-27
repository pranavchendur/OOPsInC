#include <iostream>
using namespace std;
int main()
{
		int *i,k;
		i = new int[10];
		for (k=0;k<5;k++) {
			cin>>i[k];
		}
		for (k=0;k<5;k++) {
			cout<<i[k]<<"\t";
		}
		cout<<endl;
		delete i;
}		