
`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Sphere`
- Sphere 클래스 선언

`private:`
- 접근지정자를 private로 설정

`int radius;`
- 정수형 변수 radius 선언

`public:`
- 접근지정자를 public 으로 선언

`Sphere():Sphere(1)`
- 타겟 생성자 Sphere(int num) 을 호출하고 1을 매개 변수로 넘기는 위임 생성자.

`Sphere(int num) : radius(num) {}`
- 정수형 매개변수 num을 받아 멤버 초기화 리스트를 이용하여 radius의 값을 num으로 변경하는 생성자

`~Sphere(){}`
- 기본 소멸자 선언

`void setRadius(int num);`
- 매개변수 num을 받아 radius의 값을 변경하는 setRadius 함수

`double getVolume();`
- 구의 부피를 구하여 반환하는 getVolume() 함수 선언

`double Sphere::getVolume()`
- getVolume() 함수 구현부

`double r = radius;`
- radius의 값을 담는 실수형 변수 r 선언과 초기화

`double res = 0.0;`
실수형 변수 res 선언 후 0.0 으로 초기화

`res = (4.0 / 3.0) * 3.14 * (r * r * r);`
- 구의 부피를 구한 값을 res에 저장

`return res;`
- res(구의 부피) 반환

`void Sphere::setRadius(int num)`
- setRadius() 함수 구현부

```
cout << "구" << num + 1 << " 의 반지름 : ";
cin >> radius;
```
- radius를 입력받아 구 객체의 반지름을 초기화한다.

`int main()`
- main() 함수 시작

`int n;`
- 정수형 변수 n 선언

```
cout << "생성하고자 하는 구의 개수 : ";
cin >> n;
```
- 구 객체를 동적으로 생성하기 위해 갯수를 입력받는다.

`Sphere* ptr = new Sphere[n];`
- new 연산자를 사용하여 Sphere 객체 3개를 저장할 수 있는 배열을 힙 영역에 동적 할당한다.

```
if (!ptr) {
	cout << "메모리를 할당할 수 없습니다.";
	return -1;
}
```
- 메모리를 할당할 수 없다면 오류를 출력하고 -1을 반환한다.

```
for (int i = 0; i < n; i++) {
	(ptr + i)->setRadius(i);
}
```
- 포인터 연산을 이용하여 각 ptr 객체에 접근하고 setRadius() 함수를 호출하여 반지름을 설정한다.

```
for (int i = 0; i < n; i++) {
	cout << "구" << i + 1 << " 의 부피 : " << (ptr + i)->getVolume() << endl;
}
```
- 포인터 연산을 이용하여 각 ptr 객체에 접근하고 getVolume() 함수를 호출하여 구의 부피를 반환해 출력한다.

`delete[] ptr;`
- delete[] ptr을 이용해 할당받은 메모리를 반환한다.

`return 0;`
- 0을 반환하고 main()함수를 종료한다.

## 실행결과
<img width="800" height="200" alt="image" src="https://github.com/user-attachments/assets/5eab4d1e-a2d1-4722-893c-d583d2109a6d" />

