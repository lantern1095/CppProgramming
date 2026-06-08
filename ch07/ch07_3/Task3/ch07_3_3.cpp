#include<iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	friend Power operator* (int x, Power& op);
};

Power operator* (int x, Power& op) {
	Power tmp = op;
	tmp.kick = tmp.kick * x;
	tmp.punch = tmp.punch * x;
	return tmp;
}

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 * a;
	a.show();
	b.show();

	return 0;
}
