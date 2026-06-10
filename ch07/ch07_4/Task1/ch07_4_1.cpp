#include<iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int x = 0, int y = 0) { real = x; img = y; }
	friend istream& operator>> (istream& op1, Complex& op2);
	friend ostream& operator<< (ostream& op1, Complex& op2);
};

istream& operator>> (istream& op1, Complex& op2) {
	cout << "실수부 : ";
	op1 >> op2.real;
	cout << "허수부 : ";
	op1 >> op2.img;
	return op1;
}

ostream& operator<< (ostream& op1, Complex& op2) {
	if (op2.img < 0) {
		op1 << op2.real << op2.img << "j" << endl;
	}
	else {
		op1 << op2.real << "+" << op2.img << "j" << endl;
	}
	return op1;
}

int main() {
	Complex x, y;
	cin >> x >> y;
	cout << x << y;
	return 0;
}
