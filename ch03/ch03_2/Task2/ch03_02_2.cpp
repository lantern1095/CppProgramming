// **********************************************
// 제 목 : 삼각형의 면적 구하기
// 날 짜 : 2026년 3월18일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Triangle {
	int base;
	int height;

public:
	Triangle();
	Triangle(int a, int b);

	double getArea();
};
Triangle::Triangle() : Triangle(1,1){}
Triangle::Triangle(int a, int b) : base(a), height(b){}

double Triangle::getArea(){
	return 0.5 * base * height;
}


int main() {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;

	return 0;

}
