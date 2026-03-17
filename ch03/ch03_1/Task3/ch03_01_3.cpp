// **********************************************
// 제 목 : 구의 부피와 표면적을 구하는 프로그램
// 날 짜 : 2026년 3월16일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>

using namespace std;

class Sphere {
public:
	int radius;

	double getVolume();
	double getSurfaceArea();
};

double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * (radius * radius * radius);
}

double Sphere::getSurfaceArea() {
	return 4 * 3.14 * (radius * radius);
}

int main() {
	Sphere sphere;
	sphere.radius = 5;
	double Volume = sphere.getVolume();
	double SurfaceArea = sphere.getSurfaceArea();

	cout << "구의 부피는 : " << Volume << endl;
	cout << "구의 표면적은 : " << SurfaceArea << endl;

	return 0;
}
