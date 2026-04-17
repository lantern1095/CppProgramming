## 2번

`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class ObjectPrice`
- ObjectPrice 클래스 선언

`private:`
- 접근지정자를 private으로 설정

`int arrSize;`
- 정수형 변수 arrSize 선언

`int* price;`
- 정수형 포인터 price 선언

`public:`
- 접근지정자를 public 으로 설정

`ObjectPrice() :ObjectPrice(3)`
- ObjectPrice 클래스의 기본 생성자, 생성자 ObjectPrice(int num)를 호출하고 3을 매개 변수로 넘긴다

`ObjectPrice(int num);`
- 타겟 생성자 ObjectPrice(int num) 선언

`~ObjectPrice() { delete[] price; }`
- 소멸자, price 동적으로 할당받은 메모리를 해제한다.

`void setPrice();`
- setPrice 함수 선언

`int mostExpensive();`
- mostExpensive 함수 선언

`int mostCheap();`
- mostCheap 함수 선언

`ObjectPrice::ObjectPrice(int num)`
- 타겟 생성자 ObjectPrice(int num) 구현부

`arrSize = num;`
- arrsize를 num으로 초기화

`price = new int[arrSize];`
- price 변수에 arrSize의 크기만큼 정수형 배열을 동적으로 할당받는다.

```
if (!price) {
	cout << "메모리를 할당할 수 없습니다.";
}
```
- 오류 처리문

`void ObjectPrice::setPrice()`
- setPrice 함수 구현부

```
cout << "물품 " << arrSize << " 개의 가격 입력 >> ";
for (int i = 0; i < arrSize; i++) {
	cin >> price[i];
}
```
- arrSize의 값만큼 반복시키며 가격을 입력받아 price의 i번째 요소를 채워넣는다.

`int ObjectPrice::mostExpensive()`
- mostExpensive 함수 구현부

`int ind = 0;`
- 정수형 변수 ind 선언 후 0으로 초기화

```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] < price[i]) {
		ind = i;
	}
}
```
- arrSize의 값만큼 반복하며 price 배열의 ind 번째 요소가 i 번째 요소보다 작은지 확인하고, 작다면 ind에 i의 값을 저장한다.

`return price[ind];`
- price 배열의 ind 번째 요소를 반환한다.

`int ObjectPrice::mostCheap()`
- mostCheap 함수 구현부

`int ind = 0;`
- 정수형 변수 ind 선언 후 0으로 초기화

```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] > price[i]) {
		ind = i;
	}
}
```
- arrSize의 값만큼 반복하며 price 배열의 ind 번째 요소가 i 번째 요소보다 큰지 확인하고, 작다면 ind에 i의 값을 저장한다.

`return price[ind];`
- price 배열의 ind 번째 요소를 반환한다.

`int main()`
- main 함수 시작

`int count = 0;`
- 정수형 변수 count 선언 후 0으로 초기화
  
```
cout << "구입할 물품의 개수>> ";
cin >> count;
```
- count 변수에 값을 입력받는다.

`ObjectPrice obj(count);`
- ObjectPrice 클래스의 obj객체를 생성하고, count를 생성자의 인자로 전달한다.

`obj.setPrice();`
- obj객체의 setPrice 함수 호출

`cout << "가장 싼 가격은 " << obj.mostCheap() << endl;`
- obj 객체의 mostCheap 함수 호출 후 반환값을 이용해 가장 싼 가격 출력

`cout << "가장 비싼 가격은" << obj.mostExpensive() << endl;`
- obj 객체의 mostExpensive 함수 호출 후 반환값을 이용해 가장 비싼 가격 출력

`return 0;`
- 0을 반환하고 main 함수를 종료한다.

## 실행결과
<img width="860" height="150" alt="image" src="https://github.com/user-attachments/assets/9b709c28-017e-4641-88a2-c87fa4d3a583" />



## 문제 5
