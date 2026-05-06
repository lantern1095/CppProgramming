
// **********************************************
// 제 목 : 주소에 의한 호출을 이용하여 변수의 값 서로 바꾸기
// 날 짜 : 2026년 5월 6일
// 작성자 : 2301377 김예찬
// **********************************************

#include<iostream>
#include<string>
using namespace std;

void SwapString(string* str1,string* str2);

int main() {
	string s1("hello");
	string s2("world");
	cout << "호출전 s1: " << s1 << ", s2: " << s2 << endl;
	SwapString(&s1, &s2);
	cout << "호출후 s1: " << s1 << ", s2: " << s2 << endl;

	return 0;
}

void SwapString(string* str1,string* str2) {
	string temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}
