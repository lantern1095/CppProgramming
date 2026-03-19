
// **********************************************
// 제 목 : 구의 부피 구하기
// 날 짜 : 2026년 3월18일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Sphere {
	int radius;

public:
	Sphere();
	Sphere(int a);

	double getVolume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(int a) : radius(a) {}

double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * (radius * radius * radius);
}

int main() {
	Sphere sph1;
	cout << "구의 부피는" << sph1.getVolume() << endl;
	
	Sphere sph2(3);
	cout << "구의 부피는" << sph2.getVolume() << endl;


	return 0;
}
