
`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`#include<string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`void SwapString(string* str1,string* str2);`
- 두 문자열의 주소를 매개변수로 받아 그 값을 서로 교환하는 함수 선언


`int main()`
- main 함수 시작


`string s1("hello");`
- 문자열 "hello"로 초기화된 string 객체 s1 선언


`string s2("world");`
- 문자열 "world"로 초기화된 string 객체 s2 선언


`cout << "호출전 s1: " << s1 << ", s2: " << s2 << endl;`
- 함수 호출 전의 s1과 s2 값을 출력하여 확인한다.


`SwapString(&s1, &s2);`
- s1과 s2의 주소를 인자로 전달하여 SwapString 함수를 호출한다.


`cout << "호출후 s1: " << s1 << ", s2: " << s2 << endl;`
- 함수 호출 후 값이 교환된 s1과 s2 값을 출력하여 확인한다.


`return 0;`
- 0을 반환하고 main 함수를 종료한다.


`void SwapString(string* str1,string* str2)`
- SwapString 함수 구현부


`string temp;`
- 문자열 값을 임시로 저장할 string 변수 temp 선언


`temp = *str1;`
- str1이 가리키는 곳의 값을 temp에 복사한다.


`*str1 = *str2;`
- str2가 가리키는 곳의 값을 str1이 가리키는 곳에 복사한다.


`*str2 = temp;`
- temp에 보관해두었던 값을 str2가 가리키는 곳에 복사하여 교환을 완료한다.

## 실행결과
<img width="1520" height="211" alt="image" src="https://github.com/user-attachments/assets/c5e0062b-383c-4f6d-a724-dea42c292e3d" />
