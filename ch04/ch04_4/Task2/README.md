`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`#include<string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Insert`
- Insert 클래스 선언

`private:`
- 접근지정자를 private으로 설정

`string strLine;`
- 문자열 strLine 선언

`string strIn;`
- 문자열 strIn 선언

`int index;`
- 정수형 변수 index 선언

`public:`
- 접근지정자를 public 으로 설정

`Insert() { index = 1; }`
- Insert 클래스의 기본 생성자, index를 1로 초기화한다

`bool input();`
- 문자열을 입력받기 위한 input 함수

`bool Insert::input()`
- input 함수 구현부

```
cout << "문자열 입력 : ";
getline(cin, strIn, '\n');
```
- getline 함수를 이용해 문자열을 \n가 입력 될 때까지 입력받는다.

```
if (strIn == "quit") {
	return false;
}
```
- 입력받은 문자열이 quit 이라면 false를 반환한다.

`strLine += "<" + to_string(index) + ">";`
- to_string 함수를 이용해 index의 값을 문자열로 바꾸어 strLine에 저장한다.

`strLine += strIn;`
- 입력받은 문자열을 strLine에 저장한다.

`cout << "이어진 문자열 : " << strLine << endl;`
- 이어진 문자열을 출력한다,

`index++;`
- index를 1 증가시킨다.

`return true;`
- true를 반환한다.

`int main()`
- main() 함수 시작

`Insert str;`
- Insert 클래스의 str 객체 생성

```
while (true) {
	if (!str.input()) { break; }
	else { str.input(); }
}
```
- false가 반환되지 않는 한 무한 반복하며 input 함수를 호출한다.

`return 0;`
- 0을 반환하고 main 함수를 종료한다.


## 실행결과
<img width="1481" height="333" alt="image" src="https://github.com/user-attachments/assets/d162b80c-cee6-411e-88e5-54f53e1acf4f" />
