
#include<iostream>
using namespace std;

class Point3D {
	int x, y, z;
public:
	Point3D(){ x = 0; y = 0; z = 0; }
	Point3D(int x, int y, int z) { this->x = x; this->y = y; this->z = z; }
	Point3D(int x) { this->x = x; y = 0; z = 0; }
	Point3D(int x, int y) { this->x = x; this->y = y; z = 0; }

	void show() { cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl; }
};

int main() {
	Point3D p0;
	p0.show();
	Point3D p1(1);
	p1.show();
	Point3D p2(1, 2);
	p2.show();
	Point3D p3(1, 2, 3);
	p3.show();


	return 0;
}


