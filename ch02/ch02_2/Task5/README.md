# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작


`char text[100];`
- 문자형 배열 text를 선언한다.
`int i = 0;`
- 정수형 변수 i를 선언하고 0으로 초기화한다.
`cout << "빈칸 없이 문자열을 입력하세요>>";`
- cout 객체를 사용하여 문자열 입력을 알리는 문장을 화면에 출력한다.
`cin.getline(text, sizeof(text), '\n');`
- c
`while (text[i] != '\0') {`
`cout << text[i] << " ";`
`i++;`

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1479" height="221" alt="image" src="https://github.com/user-attachments/assets/5be209e2-8919-498d-bc35-b80398d2fec8" />
