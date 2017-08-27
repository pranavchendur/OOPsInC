#include <iostream>
using namespace std;

template<class Any_Data>
class Queue {
		Any_Data queue[20];
		int first,last;
	public:
		Queue() {
			first=-1;
			last=-1;
		}
		~Queue() {}
		void enqueue(Any_Data D) {
			if (last==-1) {
				first=last=0;
				queue[last] = D;
			}
			else {
				last++;
				queue[last] = D;	
			}
		}
		Any_Data dequeue() {
			Any_Data ret;
			if (first==-1) {
				cout<<"Queue is empty !!!"<<endl;
			}
			else {
				ret = queue[first];
				first++;
			}
			return ret;
		}
};

int main() {
	Queue<int> int_queue;
	int a,opt=0;
	while(opt<3) {
		cout<<"Enter Option : \n 1.Insert \t 2.Delete \t 3.Quit \n";
		cin>>opt;
		switch(opt) {
			case 1:
				cout<<"Enter Data : ";
				cin>>a;
				int_queue.enqueue(a);
				break;
			case 2:
				cout<<"Deleted Data : ";
				cout<<int_queue.dequeue()<<endl;
				break;
			case 3:
				cout<<"Quitting ...\n";
				break;
		}
	}
	return 0;
}