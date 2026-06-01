#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) { this->real = r; this->img = i; }
	void show() { cout << this->real << "+" << this->img << "j" << endl; }
	Complex operator+ (Complex input);
};

Complex Complex::operator+(Complex input) {
	Complex temp;

	temp.real = this->real + input.real;
	temp.img = this->img + input.img;

	return temp;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x + y;
	cout << "두 복소수의 합은 ";
	sum.show();

	return 0;
}
