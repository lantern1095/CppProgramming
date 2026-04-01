`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 선언

`private:`
- 접근지정자를 private로 설정

`int width;`
- 정수형 변수 width 선언

`int height;`
- 정수형 변수 height 선언

`public:`
- 접근지정자를 public으로 설정

`Triangle():Triangle(1,1) {}`
- 타겟 생성자 triangle(int w, int h)를 호출하고 1, 1을 매개변수로 넘긴다.

`Triangle(int w, int h) :width(w), height(h) { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl; }`
- 멤버 초기화 리스트를 이용해 width와 height를 각각 w, h의 값으로 초기화하는 생성자를 선언하고 생성자가 호출되었음을 출력한다.

`~Triangle() { cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl; }`
- 소멸자를 선언하고 소멸자가 호출되었음을 출력한다.

`double getArea() { return (width * height) / 2.0; }`
- 삼각형의 면적을 계산하여 실수형으로 반환하는 getArea() 함수.

`int main()`
- main() 함수 시작

`Triangle triArr[3] = { {2,2},{4,4},{6,6} };`
- Triangle 클래스의 3개의 객체를 요소로 가지는 triArr 배열을 선언하고 각각 2, 4, 6으로 초기화한다.

`Triangle* ptri = triArr;`
- 객체의 주소를 저장하는 포인터형 변수 ptri를 선언하고 triArr의 첫 번째 요소 주소를 저장

```
cout << "=========================================================================" << endl;
for (int i = 0; i < 3; i++) {
    cout << "삼각형 " << i << " 의 면적은 " << triArr[i].getArea() << endl;
}
```
- 반복문을 통해 인덱스를 증가시키며 각 triArr[i] 객체 배열에 접근하고, getArea() 함수를 호출하여 출력한다.

```
cout << "=========================================================================" << endl;
for (int i = 0; i < 3; i++) {
    cout << "삼각형 " << i << " 의 면적은 " << (triArr+i)->getArea() << endl;
}
```
- 반복문을 통해 배열 이름(첫 번째 요소의 주소값) 에 i를 더해가며 요소에 접근해 getArea() 함수를 호출하고 출력한다.
- 포인터 형태이므로 접근시 화살표(->)를 사용한다.

```
cout << "=========================================================================" << endl;
for (int i = 0; i < 3; i++) {
    cout << "삼각형 " << i << " 의 면적은 " << (ptri + i)->getArea() << endl;
}
```
- 반복문을 통해 배열 이름(첫 번째 요소의 주소값) 에 i를 더해가며 요소에 접근해 getArea() 함수를 호출하고 출력한다.
- 포인터 형태이므로 산술 연산이 가능하며 접근시 화살표(->)를 사용한다.

```
cout << "=========================================================================" << endl;
for (int i = 0; i < 3; i++) {
    cout << "삼각형 " << i << " 의 면적은 " << ptri[i].getArea() << endl; 
}
```
- 반복문을 통해 i를 증가시켜 포인터 변수 ptri에 저장된 주소가 가리키는 각 객체에 접근하고, getArea() 함수를 호출하고 출력한다.


```
cout << "=========================================================================" << endl;
for (int i = 0; i < 3; i++) {
    cout << "삼각형 " << i << " 의 면적은 " << ptri->getArea() << endl;
    ptri++;
}
`cout << "=========================================================================" << endl;`
```
- 객체 배열의 첫 번째 요소의 주소를 저장한 ptri가 가리키는 객체의 getArea() 함수를 호출 및 출력하고, ptri를 1씩 증가시켜 다음 주소로 이동한다.
- 포인터 형태이므로 산술 연산이 가능하며 접근시 화살표(->)를 사용한다.


`return 0;`
- 0을 반환하고 main() 함수 종료


## 실행결과
<img width="1455" height="757" alt="image" src="https://github.com/user-attachments/assets/9b89a19d-89cb-433d-9255-1c349ce3d52b" />
