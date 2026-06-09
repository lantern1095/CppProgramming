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

`Complex(int real = 0, int img = 0);`

- 디폴트 매개변수를 사용하여 실수부와 허수부를 초기화하는 생성자 선언

`Complex& operator++ ();`

- 전위 `++` 연산자를 오버로딩하는 멤버 함수 선언

`Complex operator-- (int x);`

- 후위 `--` 연산자를 오버로딩하는 멤버 함수 선언

`void show();`

- show 함수 선언

`Complex::Complex(int real, int img) {`

- 생성자 구현부

`this->real = real;`

- 매개변수 `real` 값을 멤버 변수 `real`에 저장

`this->img = img;`

- 매개변수 `img` 값을 멤버 변수 `img`에 저장

`if (img < 0) { cout << "복소수 " << this->real << this->img << "j 생성" << endl; }`

- `img`가 0보다 작으면 음수 부호가 포함되므로 `+` 기호 없이 복소수 생성 메시지 출력

`else{ cout << "복소수 " << this->real << "+" << this->img << "j 생성" << endl; }`

- `img`가 0보다 크거나 같으면 `+` 기호와 함께 복소수 생성 메시지 출력

`void Complex::show() {`

- `show` 함수 구현부

`if (img < 0) { cout << this->real << this->img << "j" << endl; }`

- `img`가 0보다 작으면 `+` 없이 복소수 출력

`else { cout << this->real << "+" << this->img << "j" << endl; }`

- `img`가 0보다 크거나 같으면 `+`와 함께 복소수 출력

`Complex Complex::operator--(int x) {`

- 후위 `--` 연산자 오버로딩 함수 구현부

`Complex tmp = -this;`

- 변경 전의 현재 객체 값을 임시 객체 `tmp`에 복사하여 저장

`real--;`

- 현재 객체의 `real` 값을 1 감소시킴

`img = img - 2;`

- 현재 객체의 `img` 값을 2 감소시킴

`return tmp;`

- 값이 바뀌기 전의 원본 상태인 `tmp` 객체를 반환한다.

`Complex& Complex::operator++() {`

- 전위 `++` 연산자 오버로딩 함수 구현부

`real++;`

- 현재 객체의 `real` 값을 1 증가시킴

`img++;`

- 현재 객체의 `img` 값을 1 증가시킴

`return -this;`

- 연산이 완료된 현재 객체 자신을 참조 형태로 반환한다.

`int main() {`

- `main` 함수 시작

`Complex x(2, -3);`

- `x`의 생성자를 호출하고 2와 -3을 인자로 넘긴다.

`++x;`

- `x` 객체의 전위 `++` 연산자 함수를 호출한다.

`cout << "증가결과 ";`

- 결과 안내 메시지 출력

`x.show();`

- `x` 객체의 `show` 함수 호출

`x--;`

- `x` 객체의 후위 `--` 연산자 함수를 호출하고 인자로 더미 값을 넘긴다.

`cout << "감소결과 ";`

- 결과 안내 메시지 출력

`x.show();`

- `x` 객체의 `show` 함수 호출

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

## 실행결과

