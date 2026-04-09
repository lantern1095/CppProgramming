#include<iostream>
using namespace std;

class Triangle {
private:
	int width;
	int height;

public:
	Triangle():Triangle(1,1){}
	Triangle(int w, int h);
	~Triangle() { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl; }

	double getArea();
};

Triangle::Triangle(int w, int h) {
	width = w; height = h; 
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
}

inline double Triangle::getArea() {
	return width * height / 2.0;
}

int main()
{
	Triangle* triArr = new Triangle[3]{ Triangle(1,1), Triangle(2,2), Triangle(4,4) };
	if (!triArr) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i + 1 << " 의 면적은 " << (triArr + i)->getArea() << endl;
	}

	delete[] triArr;
	return 0;
}
