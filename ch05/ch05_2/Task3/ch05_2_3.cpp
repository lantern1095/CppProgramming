#include<iostream>
using namespace std;

void swap(int& a, int & b);
int main(void) {
	int x, y;
	cout << "정수 x를 입력 하시오 : ";
	cin >> x;
	cout << "정수 y를 입력 하시오 : ";
	cin >> y;

	cout << "swap 함수 호출 전 x = " << x << ", y = " << y << endl;
	swap(x, y);
	cout << "swap 함수 호출 후 x = " << x << ", y = " << y << endl;

	return 0;
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
