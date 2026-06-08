#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int real = 0, int img = 0);
	friend Complex& operator++ (Complex& op);
	friend Complex operator-- (Complex& op, int x);
	void show();
};

Complex& operator++ (Complex& op) {
	op.real++;
	op.img++;
	return op;
}

Complex operator-- (Complex& op, int x){
	Complex tmp = op;
	op.real--;
	op.img = op.img - 2;
	return tmp;
}

Complex::Complex(int real, int img) {
	this->real = real;
	this->img = img;

	if (img < 0) { cout << "복소수 " << this->real << this->img << "j 생성" << endl; }
	else{ cout << "복소수 " << this->real << "+" << this->img << "j 생성" << endl; }
}

void Complex::show() {
	if (img < 0) { cout << this->real << this->img << "j" << endl; }
	else { cout << this->real << "+" << this->img << "j" << endl; }
}

int main() {
	Complex x(2, -3);
	++x;
	cout << "증가결과 ";
	x.show();
	x--;
	cout << "감소결과 ";
	x.show();

	return 0;
}
