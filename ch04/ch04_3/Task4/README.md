
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
- 접근지정자를 public 으로 설정

`Triangle():Triangle(1,1)`
- 타겟 생성자 Triangle(int w, int h) 를 호출하고 1, 1 을 매개변수로 넘기는 위임 생성자.

`Triangle(int w, int h);`
- int w, int h를 매개 변수로 받는 생성자 선언

`~Triangle() { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl; }`
-삼각형 객체의 소멸을 출력하는 소멸자 선언

`double getArea();`
- 실수형 리턴타입을 갖는 getArea() 함수 선언

`Triangle::Triangle(int w, int h)`
- Triangle(int w, int h) 생성자 구현부

`width = w; height = h; `
- width 와 height에 각각 w, h를 저장한다

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;`
- 삼각형 생성을 알리는 출력문

```
inline double Triangle::getArea() {
	return width * height / 2.0;
}
```
- 삼각형의 면적을 구하여 반환하는 getArea() 함수 구현부


`int main()`
- main() 함수 시작

`Triangle* triArr = new Triangle[3]{ Triangle(1,1), Triangle(2,2), Triangle(4,4) };`
- new 연산자를 사용하여 Triangle 객체 3개를 저장할 수 있는 배열을 힙 영역에 동적 할당하고 값을 {{1,1},{2,2}{4,4}} 로 초기화한다.

```
if (!triArr) {
	cout << "메모리를 할당할 수 없습니다.";
	return -1;
}
```
- 메모리를 할당할 수 없다면 오류를 출력하고 -1을 반환한다.

```
for (int i = 0; i < 3; i++) {
	cout << "삼각형" << i + 1 << " 의 면적은 " << (triArr + i)->getArea() << endl;
}
```
- 포인터 연산을 이용하여 각 triArr 객체에 접근하여 getArea() 함수를 호출하고 계산된 면적을 출력한다. 

`delete[] triArr;`
- delete[]를 이용해 할당받은 메모리를 반환한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.


## 실행결과
<img width="1478" height="345" alt="image" src="https://github.com/user-attachments/assets/0a2d1ae7-9b97-44e1-b828-b05cc56878a7" />
