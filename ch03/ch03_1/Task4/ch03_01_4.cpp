// **********************************************
// 제 목 : 사각형의 면적, 둘레길이, 우하단의 좌표를 산출하는 프로그램
// 날 짜 : 2026년 3월16일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int x, Bx;
	int y, By;

	int getArea(); 
	int getPerimeter();
	void getBottomRight();
};
int Rectangle::getArea() { 
	return width * height;
}

int Rectangle::getPerimeter() {
	return (width * 2) + (height * 2);
}

void Rectangle::getBottomRight() {
	Bx = x + width;
	By = y - height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 4;
	rect.x = 1;
	rect.y = 2;

	rect.getBottomRight();
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
	cout << "사각형의 우측하단의 좌표는 " << rect.Bx << " , " << rect.By << endl;

	return 0;
}
