## 실습과제 

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Sphere`
- Sphere 클래스 선언

`int radius;`
- 정수형 변수 radius 선언

`public:`
- 접근지정자를 public 으로 설정

`Sphere();`
- 기본 생성자 선언

`Sphere(int r);`
- 구의 반지름을 매개변수로 받는 생성자 선언

`~Sphere();`
- 소멸자 선언

`double getVolume();`
- 구의 부피를 구하는 getVolume() 함수 선언

`Sphere::Sphere() : Sphere(1)`
- 타겟 생성자 Sphere(int r)를 호출하고 1을 매개변수로 넘긴다.

`Sphere::Sphere(int r) : radius(r)`
-  멤버 초기화 리스트를 이용해 radius를 r의 값으로 초기화한다.

`cout << "반지름이 " << radius << " 인 구 생성" << endl;`
- 생성자를 호출했음을 출력한다.

`Sphere::~Sphere()`
- ~Sphere() 소멸자 구현부

`cout << "반지름이 " << radius << " 인 구 소멸" << endl;`
- 소멸자를 호출했음을 출력한다.

`Sphere sph1(10);`
- Sphere 클래스의 전역 객체 sph1을 생성하고 10을 매개변수로 하여 radius를 초기화한다.

`Sphere sph2(20);`
- Sphere 클래스의 전역 객체 sph2을 생성하고 20을 매개변수로 하여 radius를 초기화한다.

`double Sphere::getVolume()`
- getVolume() 함수 구현부

`return (4 / 3) * 3.14 * (radius * radius * radius);`
- 구의 부피를 구하여 반환한다.

`int main()`
- main() 함수 시작

`cout << "구의 부피는" << sph1.getVolume() << endl;`
- sph1 객체의 부피를 출력한다.

`cout << "구의 부피는" << sph2.getVolume() << endl;`
- sph2 객체의 부피를 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.

## 실행결과
<img width="1454" height="325" alt="image" src="https://github.com/user-attachments/assets/2dc768b8-cec1-4991-ab3f-70e08aba289d" />
