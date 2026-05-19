`#include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`class Point3D { ... };`

- 3차원 공간의 좌표를 관리하고 출력하는 `Point3D` 클래스 선언.

`int x, y, z;`

- x, y, z 좌표 값을 저장할 변수 선언.

`Point3D(int x = 0, int y = 0, int z = 0) { this->x = x; this->y = y; this->z = z; }`

- 디폴트 매개변수를 사용하여 인자가 없을 때는 0으로, 인자가 있을 때는 해당 값으로 초기화하는 생성자.

`void show() { cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl; }`

- 3차원 점의 좌표 값을 화면에 출력하는 함수.

`int main()`

- `main` 함수 시작.

`Point3D p0;`

- 매개변수 없는 생성자를 호출하여 `p0` 객체 생성.

`p0.show();`

- `p0` 객체의 좌표 값 출력.

`Point3D p1(1);`

- `p1`의 생성자를 호출하고 1을 인자로 넘긴다.

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


## 실행결과
<img width="1108" height="228" alt="image" src="https://github.com/user-attachments/assets/2a463d51-5387-463d-8578-a55cc33d0823" />
