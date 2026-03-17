// **********************************************
// 제 목 : 삼각형의 면적을 구하는 프로그램
// 날 짜 : 2026년 3월16일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>

using namespace std;

class Triangle {
public:
	int horizontal;
	int vertical;
	
	double getArea();
};

double Triangle::getArea() {
	return 0.5 * horizontal * vertical;
}

int main() {
	Triangle triangle;
	triangle.horizontal = 3;
	triangle.vertical = 2;
	double area = triangle.getArea();
	

	cout << "삼각형의 면적 : " << area << endl;
	
	return 0;
}
