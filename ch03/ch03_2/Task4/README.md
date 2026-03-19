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
- 

`Rectangle::Rectangle(int Ix, int Iy) : Rectangle(Ix,Iy,1,1)`


`Rectangle::Rectangle(int Ix, int Iy, int w, int h) `


`x = Ix; y = Iy;`


`width = w; height = h;`


`int Rectangle::getArea() `


`return width * height;`


`int Rectangle::getPerimeter() `


`return (width * 2) + (height * 2);`


`void Rectangle::getBottomRight() `


`x = x + width;`


`y = y - height;`


`int main() `


`Rectangle rect1;`


`Rectangle rect2(3, 5);`


`Rectangle rect3(3, 5, 2, 4);`


`rect3.getBottomRight();`


`cout << "rect1의 면적은 : " << rect1.getArea() << endl;`


`cout << "rect2의 둘레는 : " << rect2.getPerimeter() << endl;`


`cout << "rect3의 우측하단의 좌표는 : (" << rect3.x << " , " << rect3.y << ")" << endl;`


`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1471" height="251" alt="image" src="https://github.com/user-attachments/assets/0812394d-162a-43a0-b0fe-5594a02a3f67" />
