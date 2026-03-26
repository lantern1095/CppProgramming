## 실습과제 4

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

`Triangle();`
- 기본 생성자 선언

`Triangle(int w, int h);`
- int w, int h를 매개변수로 하는 생성자 선언

`~Triangle();`
- 소멸자 선언

`Triangle::Triangle() : Triangle(1, 1) {}`
- 타겟 생성자 triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.

`Triangle::Triangle(int w, int h) {}`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화한다.


`if (w < 0 || h < 0) `
- w 나 h 가 0보다 작을 때의 조건문

`cout << "길이는 양수여야함, 대신에 폭1, 높이 1삼각형 생성" << endl;`
- 매개변수가 0 미만의 값이 들어가는 것을 막기 위한 처리문

`width = 1;`
- width의 값을 1로 수정

`height = 1;`
- height의 값을 1로 수정

`else `
- else 조건문

`width = w;`
- width에 w의 값 저장

`height = h;`
- height에 h의 값 저장

`Triangle::~Triangle() `
- ~Triangle() 소멸자 구현부

`cout << "폭" << width << ", 높이" << height << " 삼각형 소멸";`
- 소멸자가 호출되어 객체의 메모리를 반환했음을 출력하는 코드

`void Triangle::setWidth(int w) `
- setter 함수를 통해 맴버변수에 접근해 폭(width)을 수정

`if (w <= 0) `
- 매개변수의 값이 0이하일 때의 조건문

`cout << "폭은 양수이어야 함" << endl;`
- 0 이하의 값이 들어가는 것을 막기 위한 처리문

`else width = w;`
- else 조건의 경우, width에 w의 값 저장

`void Triangle::setHeight(int h) `
- setter 함수를 통해 맴버변수에 접근해 높이(height)을 수정

`if (h <= 0) `
- 매개변수의 값이 0 이하일 때의 조건문

`cout << "높이는 양수이어야 함" << endl;`
- 0 이하의 값이 들어가는 것을 막기 위한 처리문

`else height = h;`
- else 조건의 경우 height에 h값 저장

`int Triangle::getWidth() `
- getWidth() 함수 구현부

`return width;`
- width의 값을 반환

`int Triangle::getHeight() `
- getHeight() 함수 구현부

`return height;`
- height의 값을 반환

`int main() `
- main() 함수 시작

`Triangle tri(-10, -5);`
- Triangle 클래스의 tri 객체를 생성하고 폭과 높이를 각각 -10, -5로 초기화한다. 이 경우 예외문에 걸려 모두 1로 초기화된다.

`tri.setWidth(-3);`
- tri 객체의 width의 값을 setter 함수를 통해 접근하여 -3으로 수정한다. 음수이기 때문에 예외문에 걸려 값에 변화는 없다.

`tri.setHeight(-5);`
- tri 객체의 height의 값을 setter 함수를 통해 접근하여 -5로 수정한다. 음수이기 때문에 예외문에 걸려 값에 변화는 없다.

`tri.setWidth(3);`
- tri 객체의 width의 값을 setter 함수를 통해 접근하여 3으로 수정한다.

`tri.setHeight(5);`
- tri 객체의 height의 값을 setter 함수를 통해 접근하여 5로 수정한다.

`cout << "삼각형의 폭은" << tri.getWidth() << endl;`
- 삼각형의 폭 출력

`cout << "삼각형의 높이는" << tri.getHeight() << endl;`
- 삼각형의 높이 출력 

`return 0;`
- 지역 객체인 tri의 소멸자가 호출된 후 main() 함수를 종료한다. 

## 실행결과
<img width="1472" height="303" alt="image" src="https://github.com/user-attachments/assets/7317d707-4d71-4ba0-ac90-f45967386bbc" />
