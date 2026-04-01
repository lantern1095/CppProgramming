
// **********************************************
// 제 목 : this 포인터로 멤버함수를 구현하는 프로그램
// 날 짜 : 2026년 4월1일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Triangle {
private:
	int width;
	int height;

public:
	/*Triangle() :Triangle(1, 1) {}
	Triangle(int w, int h) { this->width = w; this->height = h; }*/

	Triangle(int w = 1, int h = 1) { this->width = w; this->height = h; }
	~Triangle() {}

	void setWidth(int w) { this->width = w; }
	void setHeight(int h) { this->height = h; }
	double getArea() { return this->width * this->height / 2.0; }
};


int main() {
	Triangle tri1; // 밑변=높이=1로 초기화
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
		Triangle tri2(10); // 밑변=10,높이=1로 초기화
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
		Triangle tri3(10, 2); // 밑변=10,높이=2로 초기화
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;
		return 0;
}
