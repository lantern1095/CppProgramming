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
` 삼각형의 면적을 구하는 클래스 선언

`Triangle();`


`Triangle(int w, int h);`

`~Triangle();`

`Triangle::Triangle() : Triangle(1, 1)`

`Triangle::Triangle(int w, int h) : width(w), height(h)`

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;`

`Triangle::~Triangle()`

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;`

`double Triangle::getArea()`

`return width * height / 2.0;`

`int main()`

`Triangle tri1;`

`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`

`Triangle tri2(2, 4);`

`cout << "삼각형의 면적은" << tri2.getArea() << endl;`

`return 0;`

## 실행결과
<img width="1471" height="278" alt="image" src="https://github.com/user-attachments/assets/c42219aa-902a-438c-a23f-b3ee01ac2c90" />
