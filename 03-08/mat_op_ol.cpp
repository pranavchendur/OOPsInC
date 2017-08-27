#include <iostream>
using namespace std;

class matrix {
	private:
		int mat[][3],n;
	public:
		matrix() {}
		matrix(int n1,int t) {
			n=n1;
			int i,j;
			for (i=0;i<n;i++)
				for (j=0;j<3;j++) {
					if (t==0)
					continue;
					if (t==1)
					mat[i][j]=i*j;
					if (t==2)
					mat[i][j]=i-j;
				}
		}
		matrix operator +(matrix&);
		matrix operator -(matrix&);
		void display();
		
};

matrix matrix::operator +(matrix &b)	{
	matrix c(3,0);
	int i,j;
	if (b.n==n) {
		for (i=0;i<n;i++)
			for (j=0;j<3;j++)
				c.mat[i][j]=mat[i][j]+b.mat[i][j];
	}
	else {
		cout<<"Dimension Mismatch";
	}
	return c;
}


matrix matrix::operator -(matrix &b)	{
	matrix c(3,0);
	int i,j;
	if (b.n==n) {
		for (i=0;i<n;i++)
			for (j=0;j<3;j++)
				c.mat[i][j]=mat[i][j]-b.mat[i][j];
	}
	else {
		cout<<"Dimension Mismatch";
	}
	return c;
}

void matrix::display() {
	int i,j;
	for (i=0;i<n;i++) {
		for (j=0;j<3;j++) {
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main() {
	matrix a(3,1),b(3,2);
	matrix c(3,0);
	c=a+b;
	c.display();
	return 0;
}