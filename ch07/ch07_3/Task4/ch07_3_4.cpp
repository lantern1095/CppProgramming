#include<iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power operator* (int x);
	friend Power& operator* (int x, Power& op);
	friend Power operator+ (Power& op1, Power& op2);
};

Power Power::operator* (int x) {
	Power tmp;
	tmp.kick = this->kick * x;
	tmp.punch = this->punch * x;
	return tmp;
}

Power& operator* (int x, Power& op) {
	Power
}

Power operator+ (Power& op1, Power& op2) {
	Power tmp = op1;
	tmp.kick = tmp.kick + op2.kick;
	tmp.punch = tmp.punch + op2.punch;
	return tmp;
}

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

int main() {
	Power a(1, 1), b(2, 2), c;
	c.show();
	c = a * 2 + 2 * b;
	c.show();

	return 0;
}
