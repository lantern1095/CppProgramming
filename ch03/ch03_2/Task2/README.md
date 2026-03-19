`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 선언

`int base;`
- int형 멤버변수 base 선언

`int height;`
- int형 멤버변수 height 선언

`public:`
- 접근지정자를 public으로 설정

`Triangle();`
- 기본 생성자 선언

`Triangle(int a, int b);`
- int형 멤버변수 a, b를 매개변수로 하는 생성자 선언

`double getArea();`
- 삼각형의 넒이를 반환하는 함수 `getArea()` 선언

`Triangle::Triangle() : Triangle(1,1)`
- 위임 생성자로서, Triangle(1,1)을 호출한다.

`Triangle::Triangle(int a, int b) : base(a), height(b)`
- 멤버 초기화 리스트에서 매개변수 a, b를 각각 base와 height에 넣어 초기화한다.

`double Triangle::getArea()`
- getArea()함수의 구현부

`return 0.5 * base * height;`
- 삼각형의 면적을 계산하여 반환한다.

`int main() `
- 메인함수 시작

`Triangle tri1;`
- Triangle 클래스의 객체 tri1을 생성한다. 매개변수가 없으므로 기본 생성자를 호출한다.

`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`
- 삼각형의 면적 출력

`Triangle tri2(2, 4);`
- Triangle 클래스의 객체 tri2를 생성한다. 매개변수 2, 4를 받아 각각 base와 height를 초기화한다.

`cout << "삼각형의 면적은 " << tri2.getArea() << endl;`
- 삼각형의 면적 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1475" height="197" alt="image" src="https://github.com/user-attachments/assets/be42ccac-d481-4494-a05b-c533fb83a41d" />
