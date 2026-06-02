`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Complex {`

- Complex 함수 구현부

`int real;`

- 정수형 변수 real 선언

`int img;`

- 정수형 변수 img 선언

`public:`

- 접근지정자를 public으로 설정

`Complex(int r = 0, int i = 0) : real(r), img(i) {}`

- 멤버 초기화 리스트를 사용하여 멤버 변수를 초기화하는 생성자

`void show();`

- show 함수 선언

`Complex& operator+= (Complex op2);`

- `+=` 연산자를 오버로딩하는 멤버 함수 선언

`void Complex::show() {`

- `show` 함수 구현부

`if (img > 0) { cout << real << "+" << img << "j" << endl; }`

- `img`가 0보다 크면 `+`와 함께 복소수 출력

`else { cout << real << img << "j" << endl; }`

- 그 외의 경우에는 `+` 없이 복소수 출력

`Complex& Complex::operator+= (Complex op2) {`

- `+=` 연산자 오버로딩 함수 구현부 시작

`this->real = this->real + op2.real;`

- 현재 객체의 `real`에 `op2` 객체의 `real` 값을 더해 저장

`this->img = this->img + op2.img;`

- 현재 객체의 `img`에 `op2` 객체의 `img` 값을 더해 저장

`return -this;`

- 연산이 완료된 현재 객체 자신을 참조 형태로 반환한다.

`int main() {`

- `main` 함수 시작

`Complex a(3, 5), b(1, 1);`

- `a`, `b` 객체의 생성자를 호출하고 각각 인자를 넘긴다.

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`b += a;`

- `b` 객체의 `+=` 연산자 함수를 호출하고 `a`를 인자로 넘긴다.

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실행결과
<img width="1106" height="176" alt="image" src="https://github.com/user-attachments/assets/5c7d4665-fa65-4b74-aef9-1345afadc3ec" />
