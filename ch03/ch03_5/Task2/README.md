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


`Triangle():Triangle(1,1) `


`Triangle(int w, int h) `


`width = w; height = h; `


`cout << "폭 " << width << ", 높이 " << height << " 인 삼각형 생성" << endl;`


`~Triangle() cout << "폭 " << width << ", 높이 " << height << " 인 삼각형 소멸" << endl; `

`void setWidth(int w) width = w; `


`void setHeight(int h) height = h; `


`double getArea() return width * height / 2.0; `

`int main()`


`Triangle tri;`


`tri.setWidth(3);`


`tri.setHeight(5);`


`cout << "삼각형의 면적은" << tri.getArea() << endl;`


`return 0;`



## 실행결과
<img width="1472" height="227" alt="image" src="https://github.com/user-attachments/assets/4303e703-0bd0-4a4c-8c3b-729be96f521f" />
