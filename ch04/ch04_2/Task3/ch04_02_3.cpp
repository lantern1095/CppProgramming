// **********************************************
// 제 목 : 동적 할당을 통해 정수를 입력받아 평균값 구하기
// 날 짜 : 2026년 4월 6일
// 작성자 : 2301377 김예찬
// **********************************************

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int avg = 0;

	cout << "입력할 정수의 개수를 입력하세요 : ";
	cin >> n; 

	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> p[i];
		avg += p[i];
	}

	delete[] p;
	cout << "평균값은 " << avg / n << "입니다." << endl;

}
