#include <iostream>
using namespace std;

inline int comb(int n, int r) {
	int i,factr=1,factn=1,factnr=1;
	for (i=1; i<=n; i++) {
		factn *= i;
	}
	for (i=1; i<=r; i++) {
		factr *= i;
	}
	for (i=1; i<=(n-r); i++) {
		factnr *= i;
	}
	return factn/(factr*factnr);
}

int main() {
	int n,r;
	cout<<"Enter N and R : "<<endl;
	cin>>n>>r;
	cout<<"The Combinations that can be formed are : "<<comb(n,r)<<endl;
	return 0;
}