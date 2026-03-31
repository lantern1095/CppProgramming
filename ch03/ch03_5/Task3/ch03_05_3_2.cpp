// **********************************************
// 제 목 : 연습문제 2번 - 4개의 멤버 변수를 받아 커피를 나타내는 Coffee 클래스 작성
// 날 짜 : 2026년 3월30일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Coffee {
private:
	int coffee, sugar, milk, water;

public:
	void show();

	Coffee():Coffee(10,0,0,0) {}
	Coffee(int c, int s, int m, int w) {
		coffee = c; sugar = s; milk = m; water = w;
	}
	~Coffee() {}
};

inline void Coffee::show() {
	cout << "coffee";
	for (int i = 0; i < coffee; i++) cout << "*";
	cout << endl;
	
	cout << "sugar" ;
	for (int i = 0; i < sugar; i++) cout << "*";
	cout << endl;

	cout << "milk";
	for (int i = 0; i < milk; i++) cout << "*";
	cout << endl;

	cout << "water";
	for (int i = 0; i < water; i++) cout << "*";
	cout << endl;
}

int main() {
	Coffee espresso;
	Coffee americano(5, 0, 0, 10);
	Coffee cappucchino(5, 1, 5, 2);
	Coffee mySweet(3, 7, 5, 5);

	espresso.show();
	cout << endl;
	mySweet.show();

	return 0;
}
