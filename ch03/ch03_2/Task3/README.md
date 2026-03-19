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
- 기본 생성자 Sphere() 선언

`Sphere(int a);`


`double getVolume();`


`Sphere::Sphere() : Sphere(1)`


`Sphere::Sphere(int a) : radius(a)`


`double Sphere::getVolume() `


`return (4.0 / 3.0) * 3.14 * (radius * radius * radius);`


`int main() `


`Sphere sph1;`


`cout << "구의 부피는" << sph1.getVolume() << endl;`


`Sphere sph2(3);`


`cout << "구의 부피는" << sph2.getVolume() << endl;`


`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1484" height="250" alt="image" src="https://github.com/user-attachments/assets/46c6d9dc-22c3-4eca-a30a-7db9733aa719" />

