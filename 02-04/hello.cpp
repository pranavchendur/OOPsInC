#include <iostream>
using namespace std;

inline int greatest(int x, int y) {
	return (x>y)?x:y;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<greatest(a,b)<<endl;
	return 0;
}