## 실습과제 3

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 선언

`private:`
- 접근지정자를 private로 설정

`int width;`
- 정수형 변수 width 선언

`int height;`
- 정수형 변수 height 선언

`public:`
- 접근지정자를 public으로 설정

`void setWidth(int w);`
- setter 함수를 통해 맴버변수에 접근해 밑변을 수정

`void setHeight(int h);`
- setter 함수를 통해 맴버변수에 접근해 높이를 수정

`int getWidth();`
- getter 함수를 이용해 맴버변수의 값을 반환

`int getHeight();`
- getter 함수를 이용해 맴버변수의 값을 반환

`double getArea();`
- 삼각형의 면적을 반환하는 getArea() 함수 선언

`Triangle();`
- 기본 생성자 선언

`Triangle(int w, int h);`
- int w, int h를 매개변수로 하는 생성자 선언

`Triangle::Triangle() : Triangle(1, 1) {}`
- 타겟 생성자 triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.

`Triangle::Triangle(int w, int h) : width(w), height(h) {}`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화한다.

`void Triangle::setWidth(int w) `
- setter 함수를 통해 맴버변수에 접근해 폭(width)을 수정

`if (w < 0) cout << "0 이하로 설정할 수 없습니다.";`
- 매개변수가 0 이하의 값이 들어가는 것을 막기 위한 처리문

`else width = w;`
- width에 w의 값 저장

`void Triangle::setHeight(int h) `
- setter 함수를 통해 맴버변수에 접근해 높이(height)를 수정

`if (h < 0) cout << "0 이하로 설정할 수 없습니다.";`
- 매개변수가 0 이하의 값이 들어가는 것을 막기 위한 처리문

`else height = h;`
- height에 h의 값 저장

`int Triangle::getWidth() { return width; }`
- getter 함수를 이용해 맴버변수 width의 값을 반환

`int Triangle::getHeight() { return height; };`
- getter 함수를 이용해 맴버변수 height의 값을 반환

`double Triangle::getArea() { return width * height / 2.0; }`
- getArea() 함수 구현부, 삼각형의 면적을 구하여 반환한다.

`int main() `
- main() 함수 시작

`Triangle tri;`
- Triangle 클래스의 tri 객체를 생성하고 기본 생성자를 호출한다.

`tri.setWidth(3);`
- tri 객체의 width의 값을 setter 함수를 통해 접근하여 3로 수정한다.

`tri.setHeight(5);`
- tri 객체의 height의 값을 setter 함수를 통해 접근하여 5로 수정한다.

`cout << "삼각형의 폭은" << tri.getWidth() << endl;`
- 삼각형의 폭 출력

`cout << "삼각형의 높이는" << tri.getHeight() << endl;`
- 삼각형의 높이 출력

`cout << "삼각형의 면적은" << tri.getArea() << endl;`
- 삼각형의 면적 출력

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.



## 실행결과
<img width="1475" height="207" alt="image" src="https://github.com/user-attachments/assets/482cf1d1-acf4-443c-87f2-dd588d2e7174" />
