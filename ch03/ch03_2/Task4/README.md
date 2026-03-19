`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Rectangle `
- Rectangle 클래스 선언

`public:`
- 접근지정자를 public으로 설정

`int width, height;`
- int형 멤버변수 width와 height 선언

`int x, y;`
- int형 메머변수 x와 y 선언

`Rectangle();`
- 기본 생성자 선언

`Rectangle(int Ix, int Iy);`
- int형 변수 Ix, Iy를 매개변수로 하는 생성자 선언

`Rectangle(int Ix, int Iy, int w, int h);`
- int형 변수 Ix, Iy, int w, int h를 매개변수로 하는 생성자 선언

`int getArea();`
- 사각형의 면적을 구하는 함수 getArea() 선언

`int getPerimeter();`
- 사각형의 둘레를 구하는 함수 getPerimeter() 선언

`void getBottomRight();`
- 사각형의 우하단 좌표를 구하는 함수 getBottomRight() 선언

`Rectangle::Rectangle() : Rectangle(1,1,1,1)`
- 위임 생성자를 이용해 Rectangle(int Ix, int Iy, int w, int h) 생성자에 위임한다.

`Rectangle::Rectangle(int Ix, int Iy) : Rectangle(Ix,Iy,1,1)`
- 위임 생성자를 이용해 Ix, Iy의 값만 받고, 밑변과 높이는 1로 Rectangle(int Ix, int Iy, int w, int h) 생성자에 위임해 초기화한다.

`Rectangle::Rectangle(int Ix, int Iy, int w, int h) : x(Ix), y(Iy), width(w), height(h){}`
- 멤버 초기화 리스트를 이용해 매개변수 Ix, Iy, w, h를 각각 x, y, width, height에 넣어 초기화한다.


`int Rectangle::getArea()`
- getArea() 함수 구현부

`return width * height;`
- 사각형의 면적을 계산하여 반환

`int Rectangle::getPerimeter()`
- getPerimeter() 함수 구현부

`return (width * 2) + (height * 2);`
- 사각형의 둘레를 계산하여 반환

`void Rectangle::getBottomRight()`
- getBottomRight() 함수 구현부

`x = x + width;`
- x + width 의 값을 x에 저장

`y = y - height;`
- y - height 의 값을 y에 저장

`int main()`
- 메인함수 시작

`Rectangle rect1;`
- Rectangle 클래스의 객체 rect1를 생성, 매개변수가 없으므로 기본 생성자 호출

`Rectangle rect2(3, 5);`
- Rectangle 클래스의 객체 rect2를 생성하고 매개변수 3, 5를 이용해 x와 y를 초기화한다. width와 height는 1로 초기화된다.

`Rectangle rect3(3, 5, 2, 4);`
- Rectangle 클래스의 객체 rect3를 생성하고 매개변수 3, 5, 2, 4를 이용해 각각 x, y,width, height를 초기화한다.

`rect3.getBottomRight();`
- rect3 객체의 getBottomRight() 함수 호출

`cout << "rect1의 면적은 : " << rect1.getArea() << endl;`
- rect1 사각형의 면적 출력

`cout << "rect2의 둘레는 : " << rect2.getPerimeter() << endl;`
- rect2 사각형의 둘레 출력

`cout << "rect3의 우측하단의 좌표는 : (" << rect3.x << " , " << rect3.y << ")" << endl;`
- rect3 사각형의 우측 하단의 좌표 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1471" height="251" alt="image" src="https://github.com/user-attachments/assets/0812394d-162a-43a0-b0fe-5594a02a3f67" />
