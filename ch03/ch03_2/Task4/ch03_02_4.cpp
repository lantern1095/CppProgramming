
// **********************************************
// 제 목 : 사각형의 면적, 둘레, 우하단의 좌표 구하기
// 날 짜 : 2026년 3월18일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;


class Rectangle {
public:
	int width, height;
	int x, y;

	Rectangle();
	Rectangle(int Ix, int Iy);
	Rectangle(int Ix, int Iy, int w, int h);

	int getArea();
	int getPerimeter();
	void getBottomRight();
};

Rectangle::Rectangle() : Rectangle(1,1,1,1) {}
Rectangle::Rectangle(int Ix, int Iy) : Rectangle(Ix,Iy,1,1) {}
Rectangle::Rectangle(int Ix, int Iy, int w, int h) : x(Ix), y(Iy), width(w), height(h) {}

int Rectangle::getArea() {
	return width * height;

}

int Rectangle::getPerimeter(){
	return (width * 2) + (height * 2);
}

void Rectangle::getBottomRight() {
	x = x + width;
	y = y - height;
}

int main() {

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3, 5, 2, 4);

	rect3.getBottomRight();
	cout << "rect1의 면적은 : " << rect1.getArea() << endl;
	cout << "rect2의 둘레는 : " << rect2.getPerimeter() << endl;
	cout << "rect3의 우측하단의 좌표는 : (" << rect3.x << " , " << rect3.y << ")" << endl;

	return 0;
}
