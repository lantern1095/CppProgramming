## 실습과제 3

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class triangle`
- triangle 클래스 선언

`int width;`
- 정수형 변수 width 선언

`int height;`
- 정수형 변수 height 선언

`public:`
- 접근지정자를 public으로 설정

`double getarea();`
- 삼각형의 면적을 구하는 함수 getarea() 선언

`triangle();`
- 기본 생성자 선언

`triangle(int w, int h);`
- int w, int h를 매개변수로 하는 생성자 선언

`~triangle();`
- 소멸자 선언

`triangle::triangle() : triangle(1, 1)`
- 타겟 생성자 triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.

`triangle::triangle(int w, int h) : width(w), height(h)`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화한다.

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;`
- 생성자를 호출했음을 출력한다.

`triangle::~triangle()`
- ~triangle() 소멸자 구현부

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;`
- 소멸자를 호출했음을 출력한다.

`triangle tri1(4, 8);`
- triangle 클래스의 전역 객체 tri1을 생성하고 4, 8을 매개변수로 하여 width와 height를 초기화한다.

`triangle tri2(2, 2);`
- triangle 클래스의 전역 객체 tri2을 생성하고 2, 2을 매개변수로 하여 width와 height를 초기화한다.

`double triangle::getarea()`
- getarea()함수 구현부

`return width * height / 2.0;`
- 삼각형의 면적을 구하여 반환한다.

`int main()`
- main()함수 시작

`cout << "삼각형의 면적은 " << tri1.getarea() << endl;`
- tri1 객체의 면적을 출력한다.

`cout << "삼각형의 면적은" << tri2.getarea() << endl;`
- tri2 객체의 면적을 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.


## 실행결과
<img width="1461" height="265" alt="image" src="https://github.com/user-attachments/assets/bfa136fa-2c60-49de-a700-97405e8cf85c" />
