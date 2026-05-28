
`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Complex;`

- `Complex` 클래스가 존재함을 알리는 선언.

`Complex ComplexAdd(Complex c1, Complex c2);`

- 두 개의 `Complex` 객체를 매개변수로 받아 더한 후 결과를 반환하는 외부 함수 선언.

`class Complex {`

- 복소수의 실수부와 허수부를 관리하는 `Complex` 클래스 선언

`int real;`

- 복소수의 실수부 값을 저장할 변수 선언.

`int img;`

- 복소수의 허수부 값을 저장할 변수 선언.

`public:`

- 접근 제어 지시자를 `public`으로 설정.

`Complex(int real = 0, int img = 0);`

- 디폴트 매개변수를 사용하여 실수부와 허수부를 초기화하는 생성자 선언.

`void show();`

- 복소수 형태의 값을 화면에 출력하는 함수 선언.

`friend Complex ComplexAdd(Complex c1, Complex c2);`

- 외부 함수인 `ComplexAdd` 함수를 프렌드로 지정하여 클래스의 private 멤버에 접근할 수 있도록 허용함.

`Complex::Complex(int real, int img) {`

- 생성자 구현부

`this->real = real;`

- 매개변수로 받은 `real` 값을 멤버 변수 `real`에 저장.

`this->img = img;`

- 매개변수로 받은 `img` 값을 멤버 변수 `img`에 저장.

`cout << "복소수 " << real << "+" << img << "j 생성" << endl;`

- 생성된 복소수 값을 화면에 출력.

`void Complex::show() {`

- `show` 함수 구현부

`if (img >= 0) { cout << real << "+" << img << "j" << endl; }`

- 허수부가 0보다 크거나 같으면 + 기호 붙여서 출력

`if (img < 0) { cout << real << img << "j" << endl; }`

- 0보다 작을 경우 + 기호 없이 출력

`Complex ComplexAdd(Complex c1, Complex c2) {`

 `ComplexAdd` 구현부

`Complex temp;`

- 연산 결과를 임시로 저장할 `Complex` 객체 `temp` 생성.

`temp.real = c1.real + c2.real;`
- `c1` 과 `c2` 객체의 실수부를 더해 temp의 실수에 저장

`temp.img = c1.img + c2.img;`
- `c1` 과 `c2` 객체의 허수부를 더해 temp의 허수에 저장

`return temp;`

- 더한 결과가 저장된 `temp` 객체를 반환한다.


`int main() {`

- `main` 함수 시작.

`Complex x(2, 3), y(-5, 10), sum;`
- x, y 객체에 각각 2,3 / -5,10 을 인자로 넘겨 생성, sum은 인자 없이 생성

`sum = ComplexAdd(x, y);`

- ComplexAdd 함수를 호출하고, x와 y를 인자로 넘겨 반환된 값을 sum에 저장

`cout << "두 복소수의 합은 ";`

- 복소수의 합 출력

`sum.show();`
- sum 객체의 show 함수 출력

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실행결과
<img width="965" height="164" alt="image" src="https://github.com/user-attachments/assets/2c59ab0a-711c-4a25-977c-34c92d956eae" />

