// **********************************************
// 제 목 : getter / setter 함수를 이용해 원의 반지름을 변경하는 프로그램
// 날 짜 : 2026년 3월 25일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int num);
	int getRadius();
	Circle();
};
Circle::Circle() { radius = 1; }

void Circle::setRadius(int num) {
	if (num < 0) cout << "0 이하로 설정할 수 없습니다." << endl;
	else radius = num;
}
int Circle::getRadius() {
	return radius;
}

int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
		return 0;
}
