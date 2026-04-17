`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`#include<string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class STR`
- STR 클래스 선언

`private:`
- 접근지정자를 private으로 설정

`string str;`
- 문자열 str 선언

`public:`
- 접근지정자를 public 으로 설정

`void setStr();`
- 문자열 입력받을 setStr 함수 선언

`int findLet(string str);`
- a의 개수를 세기 위한 findLet 함수 선언

`void printStr();`
- printStr 함수 선언

`void STR::setStr()`
- setStr 함수 구현부

```
cout << "문자열 입력 : ";
getline(cin, str, '\n');
```
문자열을 입력받는다.


`int STR::findLet(string str)`
- findLet 함수를 호출하고 입력받은 문자열을 매개변수로 전달한다

`int count = 0;`
- 정수형 변수 count 선언 후 0으로 초기화

```
for(int i=0; i<str.length();i++) {
	if (str.at(i) == 'a') {
		count++;			
	}
}
```
- i를 str 문자열의 길이만큼 반복시키며 at 함수를 이용하여 str[i] 번째 글자에 a가 있는지 검사하고, 있다면 count를 1 증가시킨다.


`return count;`
- count를 반환한다,

`void STR::printStr()`
- printStr 함수 구현부

`cout << "문자 a는 " << findLet(str) << "개 있습니다." << endl;`
- 문자 a의 갯수 출력 

`int main()`
- main() 함수 시작

`STR str;`
- STR 클래스의 str 객체 생성

`str.setStr();`
- setStr 함수 호출

`str.printStr();`
- printStr 함수 호출

`return 0;`
- 0을 반환하고 main 함수 종료

## 실행결과
<img width="1476" height="205" alt="image" src="https://github.com/user-attachments/assets/7606ec51-a3da-478f-8b09-15c2628463ef" />
