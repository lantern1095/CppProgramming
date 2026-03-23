
// **********************************************
// 제 목 : 전역객체를 활용해 main() 함수 실행 전 triangle 클래스의 객체를 생성하는 프로그램
// 날 짜 : 2026년 3월 23일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class triangle {
	int width;
	int height;

public:
	double getarea();

	triangle();
	triangle(int w, int h);
	~triangle();
};

triangle::triangle() : triangle(1, 1) {}
triangle::triangle(int w, int h) : width(w), height(h){
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
}

triangle::~triangle() {
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;
}

triangle tri1(4, 8);
triangle tri2(2, 2);

double triangle::getarea() {
	return width * height / 2.0;
}

int main() {
	
	cout << "삼각형의 면적은 " << tri1.getarea() << endl;
	cout << "삼각형의 면적은" << tri2.getarea() << endl;
	return 0;
}
