#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) { this->real = r; this->img = i; }
	void show();
	Complex operator- (int input);
};

void Complex::show() {
	if (img > 0) { cout << this->real << "+" << this->img << "j" << endl; }
	else{ cout << this->real << this->img << "j" << endl; }
}

Complex Complex::operator-(int input) {
	Complex temp;

	temp.real = this->real - input;
	temp.img = this->img - input;

	return temp;
 }


int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2;
	a.show();
	b.show();

	return 0;
}
