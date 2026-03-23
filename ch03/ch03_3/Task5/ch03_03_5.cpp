
// **********************************************
// 제 목 : 전역객체를 활용해 main() 함수 실행 전 Sphere 클래스의 객체를 생성하는 프로그램 
// 날 짜 : 2026년 3월 23일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Sphere {
	int radius;

public:
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();
};

Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(int r) : radius(r) {
	cout << "반지름이 " << radius << " 인 구 생성" << endl;
}
Sphere::~Sphere() {
	cout << "반지름이 " << radius << " 인 구 소멸" << endl;
}

Sphere sph1(10);
Sphere sph2(20);

double Sphere::getVolume() {
	return (4 / 3) * 3.14 * (radius * radius * radius);
}


int main() {
	cout << "구의 부피는" << sph1.getVolume() << endl;
	cout << "구의 부피는" << sph2.getVolume() << endl;
	return 0;
}
