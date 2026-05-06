// **********************************************
// 제 목 : 배열 포인터를 매개변수로 받아 사전에서 가장 뒤에 나오는 문자열 구하기
// 날 짜 : 2026년 5월 6일
// 작성자 : 2301377 김예찬
// **********************************************

#include<iostream>
#include<string>
using namespace std;

string LastWord(string* ptr);

int main() {
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	string res = LastWord(names);
	cout << "사전에서 사전에서 가장 뒤에 나오는 문자열은 " << res << endl;

	return 0;
}

string LastWord(string* ptr) {
	string result = *(ptr);
	for (int i = 1; i < 5; i++) {
		if (*(ptr + i) > result) {
			result = *(ptr + i);
		}
	}

	return result;
}
