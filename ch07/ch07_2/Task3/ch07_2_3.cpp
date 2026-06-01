#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) : real(r), img(i) {}
	void show();
	Complex& operator+= (Complex input);
};

void Complex::show() {
	if (img > 0) { cout << real << "+" << img << "j" << endl; }
	else { cout << real << img << "j" << endl; }
}

Complex& Complex::operator+= (Complex input) {
	this->real = this->real + input.real;
	this->img = this->img + input.img;

	return *this;
}


int main() {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();

	return 0;
}
