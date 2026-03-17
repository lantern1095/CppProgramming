# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`class Sphere`
- Sphere 클래스 선언

`public:`
- 접근지정자를 public으로 설정
	
`int radius;`
- 정수형 멤버변수 radius 선언

`double getVolume();`
- 부피를 구하기 위한 멤버함수 getVolume() 선언

`double getSurfaceArea();`
- 표면적을 구하기 위한 멤버함수 getSurfaceArea() 선언

`double Sphere::getVolume()`
- getVolume() 함수 구현부

`return (4.0 / 3.0) * 3.14 * (radius * radius * radius);`
- 구의 부피를 꼐산하여 반환

`double Sphere::getSurfaceArea()`
- getSurfaceArea() 함수 구현부

`return 4 * 3.14 * (radius * radius);`
- 구의 표면적을 계산하여 반환

`int main()`
- main 함수 시작

`Sphere sphere;`
- Sphere 클래스의 객체 sphere 생성

`sphere.radius = 5;`
- 멤버변수 radius에 5를 저장

`double Volume = sphere.getVolume();`
- 실수형 변수 Volume을 선언하고, getVolume() 함수를 호출하여 반환값을 저장

`double SurfaceArea = sphere.getSurfaceArea();`
- 실수형 변수 SurfaceAre를 선언라고, getSurfaceArea() 함수를 호출하여 반환값을 저장

`cout << "구의 부피는 : " << Volume << endl;`
- 구의 부피 출력

`cout << "구의 표면적은 : " << SurfaceArea << endl;`
- 구의 표면적 출력

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1477" height="262" alt="image" src="https://github.com/user-attachments/assets/bc06a31b-50d4-4aeb-bd4b-e6273cf8f54c" />
