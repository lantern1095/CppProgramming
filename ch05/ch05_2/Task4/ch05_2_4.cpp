
#include<iostream>
using namespace std;

void get_parts(double num, int& integer, double& fact);
int main(void) {
	int i = 0;
	double f = 0.0;
	double num;

	cout << "실수를 입력하시오 : ";
	cin >> num;

	get_parts(num, i, f);

	cout << "정수부 : " << i << endl;
	cout << "소수부 : " << f << endl;

	return 0;
}
void get_parts(double num, int& integer, double& fact) {
	integer = (int)num;
	fact = num - integer;
}
