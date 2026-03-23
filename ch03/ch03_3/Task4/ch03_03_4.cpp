
// **********************************************
// 제 목 : 구의 부피를 구하고, 소멸자를 활용하여 객체의 메모리를 반납하는 프로그램
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

Sphere::Sphere() : Sphere(1){}
Sphere::Sphere(int r) : radius(r) {
	cout << "반지름이 " << radius << " 인 구 생성" << endl;
}
Sphere::~Sphere() {
	cout << "반지름이 " << radius << " 인 구 소멸" << endl;
}

double Sphere::getVolume() {
	return (4 / 3) * 3.14 * (radius * radius * radius);
}


int main() {
	Sphere sph1;
	cout << "구의 부피는" << sph1.getVolume() << endl;
	Sphere sph2(3);
	cout << "구의 부피는" << sph2.getVolume () << endl;
	return 0;
}
