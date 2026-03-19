`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Sphere `
- Sphere 클래스 선언

`int radius;`
- 정수형 변수 radius 선언

`public:`
- 접근지정자를 public으로 선언

`Sphere();`
- 기본 생성자 선언

`Sphere(int a);`
- 매개변수를 하나 받는 생성자 선언

`double getVolume();`
- 구의 부피를 반환하는 함수 getVolume() 선언

`Sphere::Sphere() : Sphere(1)`
- 위임 생성자를 이용해 Sphere(int a) 생성자에 위임한다.

`Sphere::Sphere(int a) : radius(a)`
- 멤버 초기화 리스트를 이용해 매개변수 a로 radius를 초기화한다.

`double Sphere::getVolume() `
- getVolume() 함수 구현부

`return (4.0 / 3.0) * 3.14 * (radius * radius * radius);`
- 구의 부피를 계산하여 반환한다.

`int main() `
- 메인 함수 시작

`Sphere sph1;`
- Sphere클래스의 객체 sph1 생성, 매개변수가 없으므로 기본 생성자를 호출한다.

`cout << "구의 부피는" << sph1.getVolume() << endl;`
- 구의 부피 출력

`Sphere sph2(3);`
- Sphere클래스의 객체 sph2를 생성하고, 매개변수 3을 이용해 radius를 초기화한다.

`cout << "구의 부피는" << sph2.getVolume() << endl;`
- 구의 부피 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1484" height="250" alt="image" src="https://github.com/user-attachments/assets/46c6d9dc-22c3-4eca-a30a-7db9733aa719" />

