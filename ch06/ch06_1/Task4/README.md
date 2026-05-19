
`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Point3D { ... };`

- 3차원 공간의 좌표를 관리하고 출력하는 `Point3D` 클래스 선언.

`int x, y, z;`

- x, y, z 좌표 값을 저장할 변수 선언.

`Point3D(){ x = 0; y = 0; z = 0; }`

- 매개변수가 없을 때 x, y, z 좌표를 모두 0으로 초기화하는 생성자.

`Point3D(int x, int y, int z) { this->x = x; this->y = y; this->z = z; }`

- x, y, z 좌표 값을 모두 입력받아 초기화하는 생성자.

`Point3D(int x) { this->x = x; y = 0; z = 0; }`

- x 좌표만 입력받고 y, z 좌표는 0으로 초기화하는 생성자.

`Point3D(int x, int y) { this->x = x; this->y = y; z = 0; }`

- x, y 좌표를 입력받고 z 좌표는 0으로 초기화하는 생성자.

`void show() { cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl; }`

- 3차원 점의 좌표 값을 화면에 출력하는 함수.

`int main()`

- `main` 함수 시작.

`Point3D p0;`

- 매개변수 없는 생성자를 호출하여 `p0` 객체 생성.

`p0.show();`

- `p0` 객체의 좌표 값 출력.

`Point3D p1(1);`

- `p1`의 생성자를 호출하고 10을 인자로 넘긴다.

`p1.show();`

- `p1` 객체의 좌표 값 출력.

`Point3D p2(1, 2);`

- `p2`의 생성자를 호출하고 1과 2를 인자로 넘긴다.

`p2.show();`

- `p2` 객체의 좌표 값 출력.

`Point3D p3(1, 2, 3);`

- `p3`의 생성자를 호출하고 1, 2, 3을 인자로 넘긴다.

`p3.show();`

- `p3` 객체의 좌표 값 출력.

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.


## 실습과제
![Uploading image.png…]()
