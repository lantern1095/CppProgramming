
#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int real, int img);
	Complex& operator++ ();
	void show();
};

Complex::Complex(int real, int img) {
	this->real = real;
	this->img = img;

	if (img < 0) { cout << "복소수" << this->real << this->img << " 생성" << endl; }
	else{ cout << "복소수" << this->real << "+" << this->img << " 생성" << endl; }
}

void Complex::show() {
	if (img < 0) { cout << this->real << this->img << endl; }
	else { cout << "복소수" << this->real << "+" << this->img << " 생성" << endl; }
}

Complex& Complex::operator++() {
	real++;
	img++;
	return *this;
}

int main() {


	return 0;
}
