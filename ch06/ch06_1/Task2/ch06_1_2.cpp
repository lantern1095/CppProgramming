
#include<iostream>
using namespace std;

int big(int num1, int num2);
double big(double num1, double num2);
string big(string str1, string str2);

int main() {
	int x = big(10, 20);
	cout << "큰 정수값은 " << x << endl;
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;
	string z = big("hello", "world");
	cout << "사전ㅇ서 뒤에 오는 단어는 " << z << endl;

	return 0;
}

int big(int num1, int num2) {
	int res = num1;
	if (num2 > num1) { res = num2; }

	return res;
}

double big(double num1, double num2) {
	double res = num1;
	if (num2 > num1) { res = num2; }

	return res;
}

string big(string str1, string str2) {
	string res = str1;
	if (str2 > str1) { res = str2; }

	return res;
}
