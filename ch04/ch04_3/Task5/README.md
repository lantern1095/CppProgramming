
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

`Sphere(int num) { radius = num; }`


`~Sphere()`


`void setRadius(int num);`


`double getVolume();`


`double Sphere::getVolume()`


`double r = radius;`


`double res = 0.0;`


`res = (4.0 / 3.0) * 3.14 * (r * r * r);`


`return res;`


`void Sphere::setRadius(int num)`


`cout << "구" << num + 1 << " 의 반지름 : ";`


`cin >> radius;`


`int main()`


`int n;`


`cout << "생성하고자 하는 구의 개수 : ";`


`cin >> n;`


`Sphere* ptr = new Sphere[n];`


```
for (int i = 0; i < n; i++) {
	(ptr + i)->setRadius(i);
}
```


```
for (int i = 0; i < n; i++) {
	cout << "구" << i + 1 << " 의 부피 : " << (ptr + i)->getVolume() << endl;
}
```


`delete[] ptr;`


`return 0;`


* 원본 줄 수: 28줄 (단독 중괄호 줄 제외)
* 변환 후 줄 수: 28줄
* 동일 여부: 확인 완료

## 실행결과
<img width="800" height="200" alt="image" src="https://github.com/user-attachments/assets/5eab4d1e-a2d1-4722-893c-d583d2109a6d" />

