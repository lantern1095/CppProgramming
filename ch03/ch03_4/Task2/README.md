## 실습과제 2

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Circle `
- Circle 클래스 선언

`private:`
- 접근지정자를 private로 설정

`int radius;`
- 정수형 변수 radius 선언

`public:`
- 접근지정자를 public으로 설정

`void setRadius(int num);`
- setter 함수를 통해 맴버변수에 접근해 반지름을 수정

`int getRadius();`
- getter 함수를 이용해 맴버변수의 값을 반환

`Circle();`
- 기본 생성자 선언

`Circle::Circle() { radius = 1; }`
- 기본 생성자가 호출될 때 radius를 1로 초기화한다

`void Circle::setRadius(int num)`
- setRadius 함수 구현부

`if (num < 0) cout << "0 이하로 설정할 수 없습니다." << endl;`
- 매개변수가 0 이하의 값이 들어가는 것을 막기 위한 처리문

`else radius = num;`
- radius에 num 값을 저장

`int Circle::getRadius() `
- getRadius 함수 구현부

`return radius;`
- radius의 값을 반환

`int main()`
- main() 함수 시작

`Circle waffle;`
- waffle 객체를 생성하고 기본 생성자를 호출한다.

`waffle.setRadius(5);`
- waffle 객체의 radius를 setter 함수를 통해 접근하여 5로 수정한다.

`cout << "원의 반지름은 " << waffle.getRadius() << endl;`
- 원의 반지름 출력

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1474" height="168" alt="image" src="https://github.com/user-attachments/assets/a01fed19-49df-474f-b6b8-d71e61a3faa1" />
