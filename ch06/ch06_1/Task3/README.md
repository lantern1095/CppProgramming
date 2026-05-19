`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Rectangle { ... };`

- 사각형의 폭과 높이를 관리하고 출력하는 `Rectangle` 클래스 선언.

`int width, height;`

- 사각형의 폭과 높이를 저장할 변수 선언.

`Rectangle() { width = 1; height = 1; }`

- 매개변수가 없을 때 폭과 높이를 1로 초기화하는 생성자.

`Rectangle(int w) { width = w; height = 1; }`

- 폭을 입력받고 높이는 1로 초기화하는 생성자.

`Rectangle(int w, int h) { width = w; height = h; }`

- 폭과 높이를 모두 입력받아 초기화하는 생성자.

`void show() { cout << "사각형의 폭은 " << width << ", 높이는 " << height << endl; }`

- 사각형의 폭과 높이를 화면에 출력하는 함수.

`int main()`

- `main` 함수 시작.

`Rectangle rect0;`

- 매개변수 없는 생성자를 호출하여 `rect0` 객체 생성.

`rect0.show();`

- `rect0` 객체의 폭과 높이 출력.

`Rectangle rect1(10);`

- `rect1`의 생성자를 호출하고 10을 인자로 넘긴다.

`rect1.show();`

- `rect1` 객체의 폭과 높이 출력.

`Rectangle rect2(10, 20);`

- `rect2`의 생성자를 호출하고 10과 20을 인자로 넘긴다.

`rect2.show();`

- `rect2` 객체의 폭과 높이 출력.

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실행결과
<img width="1112" height="161" alt="image" src="https://github.com/user-attachments/assets/6a504a7d-f514-4634-82c7-573742da524d" />
