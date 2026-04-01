
// **********************************************
// 제 목 : 객체 포인터를 이용해 다양한 방식으로 객체 배열 출력하기
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
	Triangle() :Triangle(1, 1) {}
	Triangle(int w, int h) :width(w), height(h) { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl; }
	~Triangle() { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl; }

	double getArea() { return (width * height) / 2.0; }
};

int main() {

	Triangle triArr[3] = { {2,2},{4,4},{6,6} };
	Triangle* ptri = triArr;

	cout << "=========================================================================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << triArr[i].getArea() << endl; //인덱스에 직접 접근해서 도트(.), 이 외는 간접 참조라 화살표 (->)
	}
	cout << "=========================================================================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << (triArr+i)->getArea() << endl;
	}
	cout << "=========================================================================" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << (ptri + i)->getArea() << endl;
	}
	cout << "=========================================================================" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << ptri[i].getArea() << endl; 
	}
	cout << "=========================================================================" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "삼각형 " << i << " 의 면적은 " << ptri->getArea() << endl;
		ptri++;
	}
	cout << "=========================================================================" << endl;

	return 0;
}
