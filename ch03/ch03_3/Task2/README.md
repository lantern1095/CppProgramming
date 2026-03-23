## 실습과제 2

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle`
- Triangle 클래스 선언

`int width;`
- 정수형 변수 width 선언

`int height;`
- 정수형 변수 height 선언

`public:`
- 접근지정자를 public으로 설정

`double getArea();`
- 삼각형의 면적을 구하는 클래스 선언

`Triangle();`
- 기본 생성자 선언

`Triangle(int w, int h);`
- 밑변과 높이를 매개변수로 받는 생성자 선언
  
`~Triangle();`
- 소멸자 선언

`Triangle::Triangle() : Triangle(1, 1)`
- 타겟 생성자 Triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.

`Triangle::Triangle(int w, int h) : width(w), height(h)`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화한다.

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;`
- 삼각형 객체가 생성되었음을 출력한다.

`Triangle::~Triangle()`
- ~Triangle() 소멸자 구현부

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;`
- 삼각형 객체가 소멸되었음을 출력한다.

`double Triangle::getArea()`
- getArea()함수 구현부

`return width * height / 2.0;`
- 삼각형의 면적을 구하여 반환한다.

`int main()`
- main() 함수 시작

`Triangle tri1;`
- Triangle 클래스의 tri1 객체를 생성한다. 매개변수가 없으므로 기본 생성자를 호출한다.

`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`
- 삼각형의 면적을 출력한다.

`Triangle tri2(2, 4);`
- Triangle 클래스의 tri2 객체를 생성한다. 매개변수 2, 4를 이용해 width와 height를 초기화한다.

`cout << "삼각형의 면적은" << tri2.getArea() << endl;`
- 삼각형의 면적을 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1471" height="278" alt="image" src="https://github.com/user-attachments/assets/c42219aa-902a-438c-a23f-b3ee01ac2c90" />
