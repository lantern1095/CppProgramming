`- #include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`- #include<string>`

- `string` 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일

`- using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`- void SwapString(string& str1, string& str2);`

- 두 개의 `string` 객체 참조를 매개변수로 받아 값을 서로 교환하는 함수 선언

`- int main()`

- `main` 함수 시작

`- string s1("hello ");`

- 문자열 "hello "로 초기화된 `string` 객체 `s1` 선언

`- string s2("world ");`

- 문자열 "world "로 초기화된 `string` 객체 `s2` 선언

`- cout << "교환 전 문자열 " << s1 << s2 << endl;`

- 교환 전 문자열 출력.

`- SwapString(s1, s2);`

- `s1`과 `s2` 객체를 인자로 전달하여 `SwapString` 함수를 호출한다.

`- cout << "교환 후 문자열 " << s1 << s2 << endl;`

- 함수 호출을 통해 값이 서로 교환된 결과인 `s1`과 `s2`를 출력한다.

`- return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

`- void SwapString(string& str1, string& str2)`

- `SwapString` 함수 구현부, 참조 매개변수 `str1`과 `str2`는 각각 `s1`과 `s2`의 별명이 된다.

`- string tmp = str1;`

- `str1`을 임시 변수 `tmp`에 저장.

`- str1 = str2;`

- `str2`를 `str1`에 저장.

`- str2 = tmp;`

- `tmp`를 'str2'에 저장


## 실행결과
<img width="1106" height="175" alt="image" src="https://github.com/user-attachments/assets/5bb1c2c6-5c5f-4d35-a7a6-d82a331b82af" />
