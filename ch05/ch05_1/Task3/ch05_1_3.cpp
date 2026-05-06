// **********************************************
// 제 목 : 주소에 의한 호출을 이용하여 사전에서 가장 뒤에 나오는 문자열 구하기
// 날 짜 : 2026년 5월 6일
// 작성자 : 2301377 김예찬
// **********************************************

#include<iostream>
#include<string>
using namespace std;

string GetLatterString(string* str1, string* str2);

int main() {
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(&s1, &s2);
	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;

	return 0;
}

string GetLatterString(string* str1, string* str2) {
	string result;
	
if (*str1 > *str2) { result = *str1; }
else { result = *str2; }

	return result;
}
