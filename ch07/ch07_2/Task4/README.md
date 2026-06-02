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

`Complex(int r = 0, int i = 0) { this->real = r; this->img = i; }`

- 디폴트 매개변수를 이용해 매개변수가 인자로 전달받은 값이 없다면 0으로 초기화하고 멤버 변수에 저장

`void show();`

- show 함수 선언

`Complex operator- (int op2);`

- `-` 연산자를 오버로딩하는 멤버 함수 선언

`void Complex::show() {`

- `show` 함수 구현부

`if (img > 0) { cout << this->real << "+" << this->img << "j" << endl; }`

- `img`가 0보다 크면 `+`와 함께 복소수 출력

`else { cout << this->real << this->img << "j" << endl; }`

- 그 외의 경우에는 `+` 없이 복소수 출력

`Complex Complex::operator-(int op2) {`

- `-` 연산자 오버로딩 함수 구현부 시작

`Complex temp;`

- 임시 변수 `temp` 생성

`temp.real = this->real - op2;`

- 현재 객체의 `real` 값에서 인자로 받은 `op2` 값을 빼서 `temp` 객체의 `real`에 저장

`temp.img = this->img - op2;`

- 현재 객체의 `img` 값에서 인자로 받은 `op2` 값을 빼서 `temp` 객체의 `img`에 저장

`return temp;`

- `temp`를 반환한다.

`int main() {`

- `main` 함수 시작

`Complex a(3, 5), b;`

- `a` 객체는 인자를 넘겨 생성하고 `b` 객체는 인자 없이 기본값으로 생성

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`b = a - 2;`

- `a` 객체의 `-` 연산자 함수를 호출하고 2를 인자로 넘겨 결과를 `b`에 저장

`a.show();`

- `a` 객체의 `show` 함수 호출

`b.show();`

- `b` 객체의 `show` 함수 호출

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

## 실행결과
<img width="953" height="152" alt="image" src="https://github.com/user-attachments/assets/6467c242-8da9-4071-8d73-aec80dc4e5c3" />
