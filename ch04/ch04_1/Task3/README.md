
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

`Triangle(int w = 1, int h = 1) { this->width = w; this->height = h; }`
- 매개변수에 디폴드 값을 1로 지정한 생성자, 매개변수를 하나만 받았을 때 다른 하나는 자동으로 1로 초기화한다.
- this 포인터를 이용해 객체 자기 자신의 멤버변수 width, height에 각각 w, h의 값을 저장한다.

`~Triangle() {}`
- 소멸자 선언

`void setWidth(int w) { this->width = w; }`
- 매게변수 w를 받아 객체 자신의(this) 멤버변수인 width의 값을 w로 바꾼다.

`void setHeight(int h) { this->height = h; }`
- 매게변수 h를 받아 객체 자신의(this) 멤버 변수인 height의 값을 w로 바꾼다.

`double getArea() { return this->width * this->height / 2.0; }`
- 객체 자신의(this) 멤버 변수인 width와 height을 곱하고 2로 나눈 값을 반환한다.

`int main()`
- main() 함수 시작

`Triangle tri1;`
- Triangle 클래스의 tri1 객체를 생성하고 생성자를 호출한다. 매개변수가 없으므로 weight=height=1

`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`
- 삼각형의 면적을 출력한다.

`Triangle tri2(10);`
- Triangle 클래스의 tri1 객체를 생성하고 생성자를 호출해 매개변수 10을 넘긴다. 이 경우 매개변수가 하나 뿐이므로 height = 1로 자동 초기화

`cout << "삼각형의 면적은 " << tri2.getArea() << endl;`
- 삼각형의 면적을 출력한다.

`Triangle tri3(10, 2); // 밑변=10,높이=2로 초기화`
- Triangle 클래스의 tri1 객체를 생성하고 생성자를 호출해 매개변수 10, 2를 넘긴다.

`cout << "삼각형의 면적은 " << tri3.getArea() << endl;`
- 삼각형의 면적을 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1472" height="207" alt="image" src="https://github.com/user-attachments/assets/ccedfa2e-2f8d-4270-9951-5de5678d0f98" />
