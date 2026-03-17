# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Rectangle`
- Rectangle 클래스 선언

`public:`
- 접근지정자를 public 으로 설정
  
`int width;`
- 정수형 멤버변수 width 선언

`int height;`
- 정수형 멤버변수 height 선언

`int x, Bx;`
- 정수형 멤버변수 x, Bx 선언

`int y, By;`
- 정수형 멤버변수 y, By 선언

`int getArea();`
- 사각형의 면적을 구하기 위한 멤버함수 getArea() 선언

`int getPerimeter();`
- 사각형의 둘레길이를 구하기 위한 멤버함수 getPerimeter() 선언

`void getBottomRight();`
- 사각형의 우하단 좌표를 구하기 위한 멤버함수 getBottomRight() 선언

`int Rectangle::getArea()`
- getArea() 함수 구현부

`return width * height;`
- 사각형의 면적을 계산하여 반환

`int Rectangle::getPerimeter()`
- getPerimeter() 함수 구현부

`return (width * 2) + (height * 2);`
- 사각형의 둘레길이를 계산하여 반환

`void Rectangle::getBottomRight()`
- getBottomRight() 함수 구현부

`Bx = x + width;`
- x + width의 값을 Bx에 저장

`By = y - height;`
- y - height의 값을 By에 저장

`int main()`
- main 함수 시작

`Rectangle rect;`
- Rectangle 클래스의 객체 rect 생성

`rect.width = 3;`
- rect 멤버변수 width에 3 저장

`rect.height = 4;`
- rect 멤버변수 height에 4 저장

`rect.x = 1;`
- rect 멤버변수 x에 1 저장

`rect.y = 2;`
- rect 멤버변수 y에 2 저장

`rect.getBottomRight();`
- rect 멤버함수 getBottomRight() 호출

`cout << "사각형의 면적은 " << rect.getArea() << endl;`
- 사각형의 면적 출력

`cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;`
- 사각형의 둘레길이 출력

`cout << "사각형의 우측하단의 좌표는 " << rect.Bx << " , " << rect.By << endl;`
- 사각형의 우하단 좌표 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1480" height="276" alt="image" src="https://github.com/user-attachments/assets/535fec03-f921-49dd-acb0-f4e938413482" />
