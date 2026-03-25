
// **********************************************
// 제 목 : get / set 함수를 이용해 삼각형의 폭과 높이를 변경하고 면적을 구하는 프로그램
// 날 짜 : 2026년 3월 25일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Triangle {
private:
	int width;
	int height;
public:
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	double getArea();

	Triangle();
	Triangle(int w, int h);
};

Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int w, int h) : width(w), height(h) {}

void Triangle::setWidth(int w) {
	if (w < 0) cout << "0 이하로 설정할 수 없습니다.";
	else width = w;
}
void Triangle::setHeight(int h) {
	if (h < 0) cout << "0 이하로 설정할 수 없습니다.";
	else height = h;
}
int Triangle::getWidth() { return width; }
int Triangle::getHeight() { return height; };
double Triangle::getArea() { return width * height / 2.0; }

int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은" << tri.getWidth() << endl;
	cout << "삼각형의 높이는" << tri.getHeight() << endl;
	cout << "삼각형의 높이는" << tri.getArea() << endl;
	return 0;
}
