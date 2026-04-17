#include <iostream>
#include <string>
using namespace std;

class ReadStr {
private:
	string instr;
	string outstr;
public:
	ReadStr();
	~ReadStr() {}

	void inputStr();
	void pickAlpha();
	void printStr();
};

ReadStr::ReadStr() :instr(""), outstr("") {}

void ReadStr::inputStr() {
	cout << "텍스트 입력 (한글 안됨) >> ";
	getline(cin, instr);
}
void ReadStr::pickAlpha() {
	for (int i = 0; i < instr.length(); i++) {
		if (isalpha(instr[i])) {
			outstr.append(1, instr[i]);
		}
		else if (instr[i] == ' ') {
			outstr.append(1, instr[i]);
		}
	}
}
void ReadStr::printStr() {
	cout << outstr;
}

int main() {
	ReadStr rdr;

	rdr.inputStr();
	rdr.pickAlpha();
	rdr.printStr();

	return 0;
}
