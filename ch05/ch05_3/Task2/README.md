## 실습과제 2

`- #include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`- #include<string>`

- `string` 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일

`- using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`- void Uppercase(string& str);`

- `string` 객체의 참조를 매개변수로 받아 대문자로 변환하는 함수 선언

`- int main()`

- `main` 함수 시작

`- string s1("hello");`

- 문자열 "hello"로 초기화된 `string` 객체 `s1` 선언

`- cout << "변환 전 문자열 " << s1 << endl;`

- 문자열 `s1`을 출력한다.

`- Uppercase(s1);`

- `s1` 객체를 인자로 전달하여 `Uppercase` 함수를 호출한다.

`- cout << "변환 후 문자열 " << s1 << endl;`

- 변환 후 문자열 출력.

`- return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

`- void Uppercase(string & str)`

- `Uppercase` 함수 구현부, 참조 매개변수 `str`은 호출 시 전달된 `s1` 의 별명이 된다.

`- for (int i = 0; i < str.length(); i++)`

- 문자열의 길이만큼 반복하며 각 문자에 접근한다.

`- if (str[i] >= 'a' && str[i] <= 'z')`

- 현재 가리키는 문자가 소문자인지 확인한다.

`- str[i] = str[i] - 32;`

- 아스키코드 값에서 32를 빼서 소문자를 대문자로 변환한다.

## 실행결과
<img width="1108" height="193" alt="image" src="https://github.com/user-attachments/assets/c4e56e0e-d599-4e29-a156-c593c66fc405" />
