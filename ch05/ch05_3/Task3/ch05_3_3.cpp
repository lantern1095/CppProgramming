// **********************************************
// 제 목 : 참조 매개변수를 이용해 문자열 교환
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301377 김예찬
// **********************************************

#include<iostream>
#include<string>
using namespace std;

void SwapString(string& str1, string& str2);
int main() {
	string s1("hello ");
	string s2("world ");
	cout << "교환 전 문자열 " << s1 << s2 << endl;

	SwapString(s1, s2);

	cout << "교환 후 문자열 " << s1 << s2 << endl;

	return 0;
}

void SwapString(string& str1, string& str2) {
	string tmp = str1;
	str1 = str2;
	str2 = tmp;
}
