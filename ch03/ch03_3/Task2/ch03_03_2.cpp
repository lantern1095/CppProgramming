// **********************************************
// 제 목 : 삼각형의 면적을 구하고, 소멸자를 활용하여 객체의 메모리를 반납하는 프로그램
// 날 짜 : 2026년 3월 23일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Triangle {
	int width;
	int height;

public:
	double getArea();

	Triangle();
	Triangle(int w, int h);
	~Triangle();
};

Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int w, int h) : width(w), height(h){
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
}

Triangle::~Triangle() {
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return width * height / 2.0;
}

int main() {
	Triangle tri1; 
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은" << tri2.getArea() << endl;
	return 0;
}

