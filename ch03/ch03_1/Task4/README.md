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


`int Rectangle::getPerimeter()`


`return (width * 2) + (height * 2);`


`void Rectangle::getBottomRight()`


`Bx = x + width;`


`By = y - height;`


`int main()`
- main 함수 시작

	Rectangle rect;
	rect.width = 3;
	rect.height = 4;
	rect.x = 1;
	rect.y = 2;

	rect.getBottomRight();
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
	cout << "사각형의 우측하단의 좌표는 " << rect.Bx << " , " << rect.By << endl;

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1480" height="276" alt="image" src="https://github.com/user-attachments/assets/535fec03-f921-49dd-acb0-f4e938413482" />
