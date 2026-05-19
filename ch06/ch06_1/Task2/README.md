
`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`int big(int num1, int num2);`

- 정수 두 개를 비교하여 큰 값을 반환하는 함수 선언.

`double big(double num1, double num2);`

- 실수 두 개를 비교하여 큰 값을 반환하는 함수 선언.

`string big(string str1, string str2);`

- 문자열 두 개를 비교하여 사전 순으로 뒤에 오는 문자열을 반환하는 함수 선언.

`int main()`

- `main` 함수 시작.

`int x = big(10, 20);`

- 10과 20을 인자로 전달하여 정수형 `big` 함수를 호출한다.

`cout << "큰 정수값은 " << x << endl;`

- 큰 정수값 출력.

`double y = big(3.14, 1.05);`

- 3.14와 1.05를 인자로 전달하여 실수형 `big` 함수를 호출한다.

`cout << "큰 실수값은 " << y << endl;`

- 큰 실수값 출력.

`string z = big("hello", "world");`

- "hello"와 "world"를 인자로 전달하여 `big` 함수를 호출한다.

`cout << "사전에서 뒤에 오는 단어는 " << z << endl;`

- 사전에서 뒤에 오는 단어 출력.

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

`int big(int num1, int num2) { ... }`

- 정수형 `big` 함수 구현부.

`int res = num1;`

- `num1`을 변수 `res`에 저장.

`if (num2 > num1) { res = num2; }`

- `num2`가 `num1`보다 크면 `num2`를 `res`에 저장.

`return res;`

- `res`를 반환한다.

`double big(double num1, double num2) { ... }`

- 실수형 `big` 함수 구현부.

`double res = num1;`

- `num1`을 변수 `res`에 저장.

`if (num2 > num1) { res = num2; }`

- `num2`가 `num1`보다 크면 `num2`를 `res`에 저장.

`return res;`

- `res`를 반환한다.

`string big(string str1, string str2) { ... }`

-  `big` 함수 구현부.

`string res = str1;`

- `str1`을 변수 `res`에 저장.

`if (str2 > str1) { res = str2; }`

- `str2`가 사전 순으로 `str1`보다 뒤에 있으면 `str2`를 `res`에 저장.

`return res;`

- `res`를 반환한다.

## 실행결과
<img width="1096" height="192" alt="image" src="https://github.com/user-attachments/assets/89e93d3a-c026-43b3-acdc-d587bb722157" />
