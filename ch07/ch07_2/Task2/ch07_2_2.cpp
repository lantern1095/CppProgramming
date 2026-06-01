#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) { this->real = r; this->img = i; }
	void show();
	Complex operator* (Complex input);
};

void Complex::show() {
	if (img > 0) { cout << this->real << "+" << this->img << "j" << endl; }
	else{ cout << this->real << this->img << "j" << endl; }
}

Complex Complex::operator*(Complex input) {
	Complex temp;

	temp.real = (this->real * input.real) - (this->img * input.img);
	temp.img = (this->real * input.img) + (this->img * input.real);

	return temp;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	cout << "두 복소수의 곱은 ";
	sum.show();

	return 0;
}
