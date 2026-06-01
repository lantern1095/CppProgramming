#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) { this->real = r; this->img = i; }
	void show();
	Complex& operator+= (Complex input);
};

void Complex::show() {
	if (img > 0) { cout << this->real << "+" << this->img << "j" << endl; }
	else{ cout << this->real << this->img << "j" << endl; }
}

Complex& Complex::operator+= (Complex input) {
	this->real += input.real;
	this->img += input.img;

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
