// **********************************************
// 제 목 : 클래스를 이용하여 체온을 입력받아 평균 체온 구하기 
// 날 짜 : 2026년 3월30일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

class Storage {
private:
	int num;
	double avg;
	double temperature[10];

public:
	Storage():num(0), avg(0), temperature{ 0 } {};
	~Storage() {}

	void dump();
	double getAvg();
	void put(double tmp);
};

void Storage::dump() {
	for (int i = 0; i < num; i++) {
		cout << temperature[i] << " ";
	}
}

double Storage::getAvg() {
	for (int i = 0; i < num; i++) {
		avg += temperature[i];
	}
	return avg / double(num);
}

void Storage::put(double tmp) {
	if (num < 10) {
		temperature[num] = tmp;
		num++;
	}
}

int main() {
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;

	return 0;
}
