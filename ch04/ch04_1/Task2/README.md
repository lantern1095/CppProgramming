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

`Triangle():Triangle(1,1) {}`
- 타겟 생성자 triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.


`Triangle(int w, int h):width(w),height(h){}`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화하는 생성자 선언

`~Triangle(){}`
- 소멸자를 선언한다.

`void setWidth(int w) { width = w; }`
- 매게변수 w를 받아 width의 값을 w로 바꾼다.

`void setHeight(int h) { height = h; }`
- 매게변수 h를 받아 height의 값을 h로 바꾼다.

`double getArea() { return width * height / 2.0; }`
- 삼각형의 면적을 계산하여 실수형으로 반환하는 getArea() 함수.

`int main()`
- main() 함수 시작

`Triangle tri;`
- Triangle 클래스의 tri 객체를 생성하고, 기본 생성자를 호출한다.

`Triangle* ptri;`
- 객체의 주소를 저장하는 포인터형 변수 ptri 선언

`ptri = &tri;`
- ptri 변수에 tri의 주소값 저장

`ptri->setWidth(3); `
- ptri에 저장된 주소값이 가리키는 객체의 맴버 함수 setWidth()를 호출하고 3을 매개변수로 넘긴다.

`ptri->setHeight(5);`
- ptri에 저장된 주소값이 가리키는 객체의 맴버 함수 setHeight()를 호출하고 3을 매개변수로 넘긴다.

`cout << "삼각형의 면적은"<< ptri->getArea()<< endl; `
- 삼각형의 면적을 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1471" height="175" alt="image" src="https://github.com/user-attachments/assets/f553bd38-aaea-41f7-b6fa-8f2ada92de20" />
