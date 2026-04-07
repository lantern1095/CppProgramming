// **********************************************
// 제 목 : 동적 배열을 사용하여 실수를 정한 만큼 입력받아 최대값 구하기 
// 날 짜 : 2026년 4월 6일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	double max = 0.0;
	
	cout << "입력할 실수의 개수를 입력하세요 : ";
	cin >> n;

	double* p = new double[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 실수: ";
		cin >> p[i];
	}

	for (int i = 0; i < n; i++)
		if (max < p[i]) {
			max = p[i];
		}
	delete[] p;
	cout << "최대값은 " << max << "입니다." << endl;
}
