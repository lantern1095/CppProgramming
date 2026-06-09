`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Power {`

- Complex 함수 구현부

`int kick;`

- 정수형 변수 kick 선언

`int punch;`

- 정수형 변수 punch 선언

`public:`

- 접근지정자를 public으로 설정

`Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }`

- 디폴트 매개변수를 0으로 설정하고, `kick`과 `punch`를 각각 초기화 

`void show();`

- show 함수 선언

`Power operator- (int x);`

- `-` 연산자를 오버로딩하는 멤버 함수 선언

`friend Power operator- (int x, Power& op);`

- `-` 연산자를 오버로딩하는 프렌드 함수 선언

`friend Power operator+ (Power op1, Power op2);`

- `+` 연산자를 오버로딩하는 프렌드 함수 선언

`Power Power::operator- (int x) {`

- `-` 연산자 오버로딩 함수 구현부

`Power tmp;`

- 임시 변수 `tmp` 생성

`tmp.kick = this->kick - x;`

- 현재 객체의 `kick` 값에 `x`를 곱하여 `tmp` 객체의 `kick`에 저장

`tmp.punch = this->punch - x;`

- 현재 객체의 `punch` 값에 `x`를 곱하여 `tmp` 객체의 `punch`에 저장

`return tmp;`

- 연산 결과가 저장된 `tmp` 객체를 반환한다.

`Power operator- (int x, Power& op) {`

- 후위 `--` 연산자 함수 구현부

`Power tmp = op;`

- 변경 전의 `op` 객체 값을 임시 객체 `tmp`에 복사하여 저장

`tmp.kick = tmp.kick - x;`

- 현재 객체의 `kick` 값에 `x`를 곱하여 저장

`tmp.punch = tmp.punch - x;`

- 현재 객체의 `punch` 값에 `x`를 곱하여 저장

`return tmp;`

- `tmp` 객체 반환.

`Power operator+ (Power op1, Power op2) {`

- `+` 연산자 함수 구현부

`Power tmp = op1;`

- `op1` 의 값을 `tmp`에 저장

`tmp.kick = tmp.kick + op2.kick;`

- `tmp.kick`+`op2.kick` 의 값을 `tmp.kick`에 저장

`tmp.punch = tmp.punch + op2.punch;`

- `tmp.punch`+`op2.punch` 의 값을 `tmp.punch`에 저장

`return tmp;`

- `tmp` 객체 반환

`void Power::show() {`

- `show` 함수 구현부

`cout << "kick = " << kick << ", punch = " << punch << endl;`

- kick과 punch 값을 화면에 출력

`int main() {`

- `main` 함수 시작

`Power a(1, 1), b(2, 2), c;`

- `a`, `b` 객체는 인자를 넘겨 생성하고 `c` 객체는 인자 없이 기본값으로 생성

`c.show();`

- `c` 객체의 `show` 함수 호출

`c = a - 2 + 2 - b;`

- `c` 객체에 `a`-2+2-`b` 의 연산 결과 저장

`c.show();`

- `c` 객체의 `show` 함수 호출

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실행결과
<img width="1108" height="169" alt="image" src="https://github.com/user-attachments/assets/baf8159e-3905-495a-82ae-0bde4b6c3f19" />
