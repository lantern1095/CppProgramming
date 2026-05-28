<img width="959" height="170" alt="image" src="https://github.com/user-attachments/assets/9a699907-e00b-47db-b830-1e485ff287e4" />
`#include<iostream>`
-`cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Complex;`
- `Complex` 클래스가 존재함을 알리는 선언.

```
class ComplexManager {
public: Complex ComplexAdd(Complex c1, Complex c2);
};
```
- 복소수 관리자 클래스 선언 및 구현

`class Complex {`
- Complex 함수 구현부

`int real;`
- 정수형 변수 real 선언

`int img;`
- 정수형 변수 img 선언

`public:`
- 접근지정자를 public으로 설정

`Complex(int real = 0, int img = 0);`
- 디폴트 매개변수를 이용해 매개변수가 인자로 전달받은 값이 없다면 0으로 초기화

`void show();`
- show 함수 선언

`friend Complex ComplexManager::ComplexAdd(Complex c1, Complex c2);`
- `ComplexManager` 클래스의 `ComplexAdd` 함수를 프랜드로 지정해 private 멤버에 접근 허용

`Complex::Complex(int real, int img) {`
- 생성자 구현부

`this->real = real;`
- 매개변수 real 값을 멤버 변수 real에 저장

`this->img = img;`
- 매개변수 img 값을 멤버 변수 img에 저장

`cout << "복소수 " << real << "+" << img << "j 생성" << endl;`
- 복소수 값 출력

`void Complex::show() {`
- show 함수 구현부

`if (img >= 0) { cout << real << "+" << img << "j" << endl; }`
- img가 0보다 크거나 같으면 +를 붙여 복소수 출력

`if (img < 0) { cout << real << img << "j" << endl; }`
- 0보다 작으면 + 없이 복소수 출력

`Complex ComplexManager::ComplexAdd(Complex c1, Complex c2) {`
- `ComplexManager` 클래스의 `ComplexAdd` 함수 구현부

`Complex temp;`
- 임시 변수 temp 생성

`temp.real = c1.real + c2.real;`
- `c1` 과 `c2` 객체의 실수부를 더해 temp의 실수에 저장

`temp.img = c1.img + c2.img;`
- `c1` 과 `c2` 객체의 허수부를 더해 temp의 허수에 저장

`return temp;`
- temp 반환

`int main() {`
- main 함수 시작

`Complex x(2, 3), y(-5, 10), sum;`
- x, y 객체에 각각 2,3 / -5,10 을 인자로 넘겨 생성, sum은 인자 없이 생성

`ComplexManager man;`
- ComplexManager 클래스의 man 객체 생성

`sum = man.ComplexAdd(x, y);`
- man 객체의 ComplexAdd 함수 호출하고, x와 y를 인자로 넘겨 반환된 값을 sum에 저장

`cout << "두 복소수의 합은 ";`
- 복소수의 합 출력

`sum.show();`
- sum객체의 show함수 호출
  
`return 0;`
- 0을 반환하고 main 함수 종료

## 실행결과
<img width="959" height="170" alt="image" src="https://github.com/user-attachments/assets/76990ebc-60c7-440e-8464-8d17594e44ee" />

