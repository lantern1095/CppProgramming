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

`Triangle(int w, int h):width(w), height(h){  cout << "폭 " << width << ", 높이 " << height << " 인 삼각형 생성" << endl; }`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화하는 생성자로, 생성자의 몸체에서는 삼각형 객체가 생성되었음을 출력한다.

`~Triangle() { cout << "폭 " << width << ", 높이 " << height << " 인 삼각형 소멸" << endl; }`
- 소멸자, 객체가 소멸될 때의 출력문을 출력한다.
  
```
void setWidth(int w) { width = w; } //1
void setHeight(int h) { height = h; } //2
double getArea() { return width * height / 2.0; } //3
```
- 1) 매게변수 w를 받아 width의 값을 w로 바꾼다.
- 2) 매게변수 h를 받아 height의 값을 h로 바꾼다.
- 3) 삼각형의 면적을 계산하여 실수형으로 반환하는 getArea() 함수.
- 한 줄짜리 코드이기 때문에 오버헤드를 방지하기 위해 인라인 형태로 선언한다. 선언부에서 함수 몸체에 직접 작성하면 inline 임을 명시하지 않아도 인라인 함수로 처리된다.

`int main()`
- main() 함수 시작

`Triangle tri;`
- Triangle 클래스의 tri 객체를 생성하고 기본 생성자를 호출한다.

`tri.setWidth(3);`
- tri 객체의 width의 값을 setter 함수를 통해 접근하여 3으로 수정한다.

`tri.setHeight(5);`
- tri 객체의 height의 값을 setter 함수를 통해 접근하여 5로 수정한다.

`cout << "삼각형의 면적은" << tri.getArea() << endl;`
- 삼각형의 면적 출력

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1476" height="230" alt="image" src="https://github.com/user-attachments/assets/7ad2fc1c-a970-43d2-8fdf-a61ca48c749a" />












