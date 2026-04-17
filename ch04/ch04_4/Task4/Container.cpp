// **********************************************
// 제 목 : Container
// 날 짜 : 2026년 4월 16일
// 작성자 : 2301377 김예찬
// **********************************************
#include <iostream>
using namespace std;

class Container {
	int* p;
	int size;
public:
	Container(int size);
	~Container();
	void read();
	void write();
	void rotate();
	double avg();
};

Container::Container(int size) {
	this->size = size;

	p = new int[size];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
	}
}
Container::~Container() {
	delete[] p;
}
void Container::read() {
	cout << "정수 10개 입력 >> ";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Container::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
void Container::rotate() {
	int temp = p[size - 1];
	for (int i = size - 1; i >= 0; i--) {
		p[i] = p[i - 1];
	}
	p[0] = temp;
}
double Container::avg() {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg += p[i];
	}
	return avg / size;
}

int main() {
	Container cnt(10);

	cnt.read();
	cnt.write();
	cnt.rotate();
	cnt.write();
	cout << "평균은 " << cnt.avg() << endl;

	return 0;
}
