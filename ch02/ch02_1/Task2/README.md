# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드<br>

`using namespace std;`
-using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.<br>

int main() {
	cout << "이름 : 홍길동\n";
	cout << "주소 : 군산시 대학로 558\n";
	cout << "학번 : 201012\n";
	cout << "차종 : 벤츠";
	
	return 0;
}
