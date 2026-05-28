`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Complex;`

- `ComplexAdd` 함수 선언에서 참조할 수 있도록 `Complex` 클래스가 존재함을 미리 알리는 전방 선언.

`Complex ComplexAdd(Complex c1, Complex c2);`

- 두 개의 `Complex` 객체를 매개변수로 받아 더한 후 결과를 반환하는 외부 함수 선언.

`class Complex { ... };`

- 복소수의 실수부와 허수부를 관리하는 `Complex` 클래스 선언.

`int real;`

- 복소수의 실수부 값을 저장할 변수 선언.

`int img;`

- 복소수의 허수부 값을 저장할 변수 선언.

`Complex(int real = 0, int img = 0);`

- 디폴트 매개변수를 사용하여 실수부와 허수부를 초기화하는 생성자 선언.

`void show();`

- 복소수 형태의 값을 화면에 출력하는 함수 선언.

`friend Complex ComplexAdd(Complex c1, Complex c2);`

- 외부 함수인 `ComplexAdd` 함수를 프렌드로 지정하여 클래스의 private 멤버에 접근할 수 있도록 허용함.

`Complex::Complex(int real, int img) { ... }`

- 생성자 구현부, 입력받은 값으로 실수부와 허수부를 초기화하고 객체 생성 메시지를 출력한다.

`void Complex::show() { ... }`

- 복소수 출력 함수 구현부, 허수부의 부호에 따라 출력 형태를 다르게 처리한다.

`Complex ComplexAdd(Complex c1, Complex c2) { ... }`

- 프렌드로 지정된 외부 일반 함수 `ComplexAdd` 구현부.

`Complex temp;`

- 연산 결과를 임시로 저장할 `Complex` 객체 `temp` 생성.

`temp.real = c1.real + c2.real;`

- 두 복소수의 실수부 값을 더해 `temp`인 객체의 `real`에 저장.

`temp.img = c1.img + c2.img;`

- 두 복소수의 허수부 값을 더해 `temp`인 객체의 `img`에 저장.

`return temp;`

- 더한 결과가 저장된 `temp` 객체를 반환한다.

`int main() {`

- `main` 함수 시작.

`Complex x(2, 3), y(-5, 10), sum;`

- `x`와 `y`는 지정된 인자로 생성자를 호출하고, `sum`은 인자 없이 기본값으로 생성한다.

`sum = ComplexAdd(x, y);`

- `x`와 `y`를 인자로 넘겨 `ComplexAdd` 함수를 호출하고 반환된 결과를 `sum`에 대입한다.

`cout << "두 복소수의 합은 ";`

- 결과 안내 메시지 출력.

`sum.show();`

- 두 복소수의 합인 `sum` 객체의 좌표 값 출력.

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


