`- #include<iostream>`

- `cin`, `cout`, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`- #include<string>`

- `string` 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일

`- using namespace std;`

- `using` 지시어를 사용하여 `std` 네임스페이스에 선언된 이름들을 사용할 때 `std::`를 생략한다.

`- class Circle { ... };`

- 원의 반지름을 관리하고 연산하는 `Circle` 클래스 정의.

`- Circle(int radius) { this->radius = radius; }`

- 생성자를 통해 매개변수로 받은 값을 멤버 변수 `radius`에 저장.

`- Circle& plus(int n) { ... }`

- 반지름을 `n`만큼 증가시키고 자기 자신을 참조로 반환.

`- radius += n;`

- 멤버 변수 `radius`에 `n`을 더함.

`- return -this;`

- 현재 객체 자신의 참조를 반환.

`- Circle& minus(int n) { ... }`

- 반지름을 `n`만큼 감소시키고 자기 자신을 참조로 반환.

`- radius -= n;`

- 멤버 변수 `radius`에서 `n`을 뺌.

`- int getRadius() { return radius; }`

- 현재 반지름 값을 반환.

`- int main() {`

- `main` 함수 시작.

`- Circle a(5);`

- 반지름이 5인 `Circle` 객체 `a` 생성.

`- a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);`

- 참조 반환을 이용해 연쇄적으로 함수를 호출하여 반지름 값을 수정.

`- cout << "객체 a의 반지름은" << a.getRadius();`

-  `a`의 반지름 값을 출력.

`- return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

## 실행결과
<img width="1103" height="107" alt="image" src="https://github.com/user-attachments/assets/de19d713-e423-4ae6-8c14-fb1aa2f22896" />
