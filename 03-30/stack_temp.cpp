#include <iostream>
using namespace std;

template<class Any_Data>
class Stack {
		Any_Data stack[20];
		int top;
	public:
		Stack() {
			top=-1;
		}
		~Stack() {}
		void push(Any_Data D) {
			top++;
			stack[top] = D;
		}
		Any_Data pop() {
			Any_Data ret;
			ret = stack[top];
			top--;
			return ret;
		}
};

int main() {
	Stack<int> int_stack;
	int a,opt=0;
	while(opt!=3) {
		cout<<"Enter Option : \n 1.Push \t 2.Pop \t 3.Quit \n";
		cin>>opt;
		switch(opt) {
			case 1:
				cout<<"Enter Data : ";
				cin>>a;
				int_stack.push(a);
				break;
			case 2:
				cout<<"Popped Data : ";
				cout<<int_stack.pop()<<endl;
				break;
			case 3:
				cout<<"Quitting ...\n";
				break;
		}
	}
	return 0;
}