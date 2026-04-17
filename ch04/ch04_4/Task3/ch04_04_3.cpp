#include<iostream>
#include<string>
using namespace std;

class STR {
private:
	string str;
public:
	void setStr();
	int findLet(string str);
	void printStr();
};

void STR::setStr() {
	cout << "문자열 입력 : ";
	getline(cin, str, '\n');
}

int STR::findLet(string str) {
	int count = 0;

	for(int i=0; i<str.length();i++) {
		if (str.at(i) == 'a') { //혹은 str[i], 인덱스 i에 위치에 a가 있으면 true
			count++;			
		}
	}

	return count;
}

void STR::printStr() {
	cout << "문자 a는 " << findLet(str) << "개 있습니다." << endl;
}

int main() {
	STR str;

	str.setStr();

	str.printStr();

	return 0;
}
