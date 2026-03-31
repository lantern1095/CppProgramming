
// **********************************************
// 제 목 : 클래스를 이용해 커피머신을 만들고, 남은 재료의 양을 표시하는 프로그램
// 날 짜 : 2026년 3월30일
// 작성자 : 2301377 김예찬
// **********************************************

#include<iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;

public:
	CoffeeMachine():CoffeeMachine(5, 10, 6){}
	CoffeeMachine(int c, int w, int s):coffee(c),water(w),sugar(s){}
	~CoffeeMachine() {}

	void drinkEspresso() { coffee -= 1; water -= 1; }
	void drinkAmericano() { coffee -= 1; water -= 2; }
	void drinkSugarCoffee() { coffee -= 1; water -= 2; sugar -= 1; }
	void full() { coffee = water = sugar = 10; }
	void show() { cout << "[머신 상태] 커피:" << coffee << "	물:" << water << "	설탕:" << sugar << endl; }
};

int main() {
	CoffeeMachine java(5, 10, 6);

	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.full();
	java.show();


	return 0;
}
