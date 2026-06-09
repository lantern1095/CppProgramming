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

- 디폴트 매개변수를 0으로 설정하고, 실수부와 허수부를 초기화하는 생성자 선언

`void show();`

- show 함수 선언

`friend Power operator- (int x, Power& op);`

- `-` 연산자를 오버로딩하는 프렌드 함수 선언

`Power operator- (int x, Power& op) {`

- 후위 `--` 연산자 함수 구현부

`Power tmp = op;`

- 변경 전의 `op` 객체 값을 임시 객체 `tmp`에 복사하여 저장

`tmp.kick = tmp.kick - x;`

- 현재 객체의 `kick` 값에 `x`를 곱하여 저장

`tmp.punch = tmp.punch - x;`

- 현재 객체의 `punch` 값에 `x`를 곱하여 저장

`return tmp;`

- 값이 바뀌기 전의 원본 상태인 `tmp` 객체를 반환한다.

`void Power::show() {`

- `show` 함수 구현부

`cout << "kick = " << kick << ", punch = " << punch << endl;`

- kick과 punch 값을 화면에 출력

`int main() {`

- `main` 함수 시작

`Power a(3, 5), b;`

- `a` 객체는 인자를 넘겨 생성하고 `b` 객체는 디폴트 값으로 생성

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`b = 2 - a;`

- `2 - a` 연산자 함수를 호출하고 결과를 `b`에 저장

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실행결과
<img width="1107" height="181" alt="image" src="https://github.com/user-attachments/assets/cb59392d-3554-447b-92a1-3d4cc5991c23" />
