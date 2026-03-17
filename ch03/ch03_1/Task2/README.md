# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle`
- Triangle 클래스 선언

`public:`
- 접근지정자를 public으로 설정

`int horizontal;`
- int형 멤버변수 horizontal 선언
  
`int vertical;`
-	int형 멤버변수 vertical 선언

`double getArea();`
- 삼각형의 면적을 구하기 위한 멤버 함수 getArea() 선언

`double Triangle::getArea()`
- getArea() 함수의 구현부
  
`return 0.5 * horizontal * vertical;`
- 삼각형의 면적을 반환

`int main()`
- main 함수 시작

`Triangle triangle;`
- Triangle의 클래스의 객체 triangle을 생성

`triangle.horizontal = 3;`
- triangle의 멤버변수 horizontal에 3을 저장

`triangle.vertical = 2;`
- triangle의 멤버변수 vertical에 2를 저장

`double area = triangle.getArea();`
- 실수형 변수 area를 선언하고, getArea() 함수를 호출하여 반환값을 저장

`cout << "삼각형의 면적 : " << area << endl;`
- 삼각형의 면적 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1479" height="190" alt="image" src="https://github.com/user-attachments/assets/af1ae570-529e-474f-a306-0a9025c2bcee" />
