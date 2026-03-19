`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 생성

`int base;`


`int height;`


`public:`


`Triangle();`


`Triangle(int a, int b);`


`double getArea();`


`Triangle::Triangle() : Triangle(1,1)`


`Triangle::Triangle(int a, int b) : base(a), height(b)`


`double Triangle::getArea()`


`return 0.5 * base * height;`


`int main() `


`Triangle tri1;`


`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`


`Triangle tri2(2, 4);`


`cout << "삼각형의 면적은 " << tri2.getArea() << endl;`


`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1475" height="197" alt="image" src="https://github.com/user-attachments/assets/be42ccac-d481-4494-a05b-c533fb83a41d" />
