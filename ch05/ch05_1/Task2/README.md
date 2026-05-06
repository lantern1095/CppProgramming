`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`#include<string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`string GetLatterString(string str1, string str2);`
- 두 문자열을 비교하여 사전순으로 뒤에 나오는 문자열을 반환하는 함수 선언


`int main()`
- main 함수 시작


`string s1("hello");`
- 문자열 "hello"로 초기화된 string 객체 s1 선언


`string s2("world");`
- 문자열 "world"로 초기화된 string 객체 s2 선언


`string res;`
- 결과를 저장할 문자열 변수 res 선언


`res = GetLatterString(s1, s2);`
- GetLatterString 함수를 호출하여 더 큰(뒤에 나오는) 문자열을 res에 저장한다.


`cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;`
- 결과값을 안내 메시지와 함께 출력한다.


`return 0;`
- 0을 반환하고 main 함수를 종료한다.


`string GetLatterString(string str1, string str2)`
- GetLatterString 함수 구현부


`string result;`
- 반환할 결과를 담을 문자열 변수 result 선언


```
if (str1 > str2) { result = str1; }
else { result = str2; }
```
- 두 문자열을 비교하여 사전순으로 뒤에 있는 문자열을 result에 저장한다.


`return result;`
- 비교 결과인 result를 반환한다.


## 실행결과
<img width="1481" height="190" alt="image" src="https://github.com/user-attachments/assets/e05a73c4-2dfa-445f-90d8-67aa046a3077" />
