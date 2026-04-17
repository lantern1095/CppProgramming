
#include<iostream>
#include<string>
using namespace std;

class Insert {
private:
	string strLine;
	string strIn;
	int index;
public:
	Insert() { index = 1; }

	bool input();
};

bool Insert::input(){
	cout << "문자열 입력 : ";
	getline(cin, strIn, '\n');

	if (strIn == "quit") {
		return false;
	}
	strLine += "<" + to_string(index) + ">";
	strLine += strIn;

	cout << "이어진 문자열 : " << strLine << endl;
	index++;

	return true;
}


int main() {
	Insert str;

	while (true) {
		if (!str.input()) { break; }
		else { str.input(); }
	}

	return 0;
}
