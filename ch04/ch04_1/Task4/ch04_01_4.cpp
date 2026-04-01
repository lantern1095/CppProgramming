
// **********************************************
// 제 목 : 객체 배열을 생성/초기화하고 출력하는 프로그램
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
	Triangle(int w, int h) :width(w), height(h) { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl; }
	~Triangle() { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl; }

	double getArea() { return (width * height) / 2.0; }
};

int main() {

	Triangle triArr[3] = { {2,2},{4,4},{6,6} };

	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << triArr[i].getArea() << endl;
	}

	return 0;
}
