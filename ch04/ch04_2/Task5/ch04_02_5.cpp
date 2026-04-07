
// **********************************************
// 제 목 : 동적 배열을 사용하여 입력받을 문자의 개수만큼 문자형 배열을 만들어 문장 출력
// 날 짜 : 2026년 4월 6일
// 작성자 : 2301377 김예찬
// **********************************************
#include <iostream>
using namespace std;

int main() {

	int num = 0;
	char* pchar = nullptr;

	cout << "저장할 문자열의 크기를 입력하세요 : ";
	cin >> num;
	cin.ignore();
	cout << endl;

	pchar = new char[num + 1];
	if (!pchar) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	cout << "문자열을 입력하시오 : ";
	cin.getline(pchar, num+1, '\n');

	cout << "============================================" << endl;

	cout << "입력한 문자열은 " << pchar << " 입니다.";


	delete[] pchar;

	return 0;
}
