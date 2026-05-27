#include<iostream>
using namespace std;
class Complex;
Complex ComplexAdd(Complex c1, Complex c2);

class Complex {
	int real;
	int img;
public:
	Complex(int real = 0, int img = 0);
	void show();
	friend Complex ComplexAdd(Complex c1, Complex c2);
};
Complex::Complex(int real, int img) {
	this->real = real;
	this->img = img;
	cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}
void Complex::show() {
	if (img >= 0) { cout << real << "+" << img << "j" << endl; }
	if (img < 0) { cout << real << img << "j" << endl; }
}

Complex ComplexAdd(Complex c1, Complex c2) {
	Complex temp;

	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;

	return temp;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = ComplexAdd(x, y);
	cout << "두 복소수의 합은 ";
	sum.show();

	return 0;
}
