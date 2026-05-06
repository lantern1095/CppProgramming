
`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`#include<string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`string LastWord(string* ptr);`
- string 배열의 주소를 매개변수로 받아 사전순으로 가장 뒤에 나오는 문자열을 반환하는 함수 선언


`int main()`
- main 함수 시작


`string names[5];`
- 5개의 문자열을 저장할 수 있는 string 배열 names 선언


```
for (int i = 0; i < 5; i++) {
	cout << "이름 >> ";
	getline(cin, names[i], '\n');
}
```
- 5번 반복하며 사용자로부터 이름을 입력받아 names 배열의 각 요소에 저장한다.


`string res = LastWord(names);`
- names 배열(배열의 시작 주소)을 인자로 전달하여 LastWord 함수를 호출하고 결과를 res에 저장한다.


`cout << "사전에서 사전에서 가장 뒤에 나오는 문자열은 " << res << endl;`
- 결과값인 가장 뒤의 문자열을 출력한다.


`return 0;`
- 0을 반환하고 main 함수를 종료한다.


`string LastWord(string* ptr)`
- LastWord 함수 구현부


`string result = *(ptr);`
- 배열의 첫 번째 문자열 요소를 결과 변수 result에 초기값으로 복사한다.


```
for (int i = 1; i < 5; i++) {
	if (*(ptr + i) > result) {
		result = *(ptr + i);
	}
}
```
- 두 번째 요소부터 끝까지 순회하며 현재 result보다 사전순으로 뒤에 나오는 문자열을 발견하면 result를 갱신한다.


`return result;`
- 최종적으로 가장 뒤에 나오는 문자열인 result를 반환한다.


## 실행결과
<img width="1480" height="276" alt="image" src="https://github.com/user-attachments/assets/8ee98b44-4303-4991-927a-4c0c6973d656" />
