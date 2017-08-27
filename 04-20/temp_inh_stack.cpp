#include <iostream>
using namespace std;

template<class Any_Data>
class Stack {
	protected:
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

template <class T>
class InspectableStack: public Stack<T>
{
public:
	InspectableStack() {};
	~InspectableStack() {};
	T inspect() {
		return Stack<T>::stack[Stack<T>::top];
	}
};

int main() {
	InspectableStack<int> int_stack;
	int a,opt=0;
	int newTop;
	while(opt!=4) {
		cout<<"Enter Option : \n 1.Push \t 2.Pop \t 3.Get Top(using inspect) \t 4.Quit \n";
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
				cout<<"Getting Top : ";
				newTop = int_stack.inspect();
				cout<<newTop<<endl;
				break;
			case 4:
				cout<<"Quitting ...\n";
				break;
		}
	}
	return 0;
}