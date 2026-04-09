#include<iostream>
using namespace std;

class Sphere{
private:
	int radius;


public:
	Sphere():Sphere(1){}
	Sphere(int num) : radius(num) { }
	~Sphere(){}

	void setRadius(int num);
	double getVolume();
};

double Sphere::getVolume() {
	double r = radius;
	double res = 0.0;
	res = (4.0 / 3.0) * 3.14 * (r * r * r);
	return res;
}

void Sphere::setRadius(int num) {
		cout << "구" << num + 1 << " 의 반지름 : ";
		cin >> radius;
}

int main() {
	int n;

	cout << "생성하고자 하는 구의 개수 : ";
	cin >> n;

	Sphere* ptr = new Sphere[n];

	for (int i = 0; i < n; i++) {
		(ptr + i)->setRadius(i);
	}

	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << " 의 부피 : " << (ptr + i)->getVolume() << endl;
	}

	delete[] ptr;
	return 0;
}
