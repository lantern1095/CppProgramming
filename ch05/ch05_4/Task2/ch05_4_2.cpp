#include <iostream>
using namespace std;

class MyStack {
	int* p;
	int size = 0;
	int tos = 0;
public:
	MyStack() :MyStack(10){}
	MyStack(int size);
	MyStack(const MyStack& src);
	~MyStack() { delete[] p; }
	bool push(int n);
	bool pop(int& n);
};

MyStack::MyStack(int size){
	this->size = size;
	p = new int[size];
	if (!p) {
		cout << "메모리 할당 실패";
	}
}

MyStack::MyStack(const MyStack& src){
	this->size = src.size;
	this->tos = src.tos;
	this->p = new int[this->size];
	if (!this->p) {
		cout << "메모리 할당 실패";
	}

	for (int i = 0; i < this->size; i++) {
		this->p[i] = src.p[i];
	}
}

bool MyStack::push(int n){
	if (tos == size) { return false; }
	
	p[tos++] = n;
	return true;
}

bool MyStack::pop(int& n){
	if (tos == 0) { return false; }

	n = p[--tos];
	return true;
}

int main() {
	MyStack a(10);
	a.push(10); a.push(20);

	MyStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값" << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값" << n << endl;

	return 0;
}
