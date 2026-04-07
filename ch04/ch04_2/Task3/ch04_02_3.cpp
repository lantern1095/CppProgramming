#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수를 입력하세요 : ";
	int n;
	cin >> n; 
	if (n <= 0) return -1;
	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> p[i];
	}
	int avg = 0;
	for (int i = 0; i < n; i++) { avg += p[i]; }

	delete[] p;
	cout << "평균값은 " << avg / n << "입니다." << endl;

}

