
// **********************************************
// 제 목 : 객체포인터를 이용해 멤버함수를 호출하는 프로그램
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
	Triangle():Triangle(1,1){}
	Triangle(int w, int h):width(w),height(h){}
	~Triangle(){}

	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	double getArea() { return width * height / 2.0; }
};



int main() {
	Triangle tri;
	
	Triangle* ptri;
	ptri = &tri;

	ptri->setWidth(3); 
	ptri->setHeight(5);
	cout << "삼각형의 면적은"<< ptri->getArea()<< endl; 
	
	return 0;
}
