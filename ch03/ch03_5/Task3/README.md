# 2번 문제

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 선언

`private:`
- 접근지정자를 private로 설정


`int coffee, sugar, milk, water;`
- 정수형 변수 coffee, sugar, milk, water 선언

`public:`
- 접근지정자를 public으로 설정

`Coffee():Coffee(10,0,0,0) {}`
- 타겟 생성자 Coffee(int c, int s, int m, int w) 를 호출하고 10, 0, 0, 0 을 매개변수로 넘기는 기본 생성자.

`Coffee(int c, int s, int m, int w):coffee(c),sugar(s),milk(m),water(w) {}`
- 멤버 초기화 리스트를 이용해 coffee, sugar, milk, water 변수에 각각 c, s, m, w의 값을 집어넣는 생성자

`~Coffee() {}`
- 소멸자를 선언한다.

`void show();`
- 커피의 종류별 coffee, sugar, milk, water 의 값을 나타내는 함수

```
inline void Coffee::show() {
	cout << "coffee";
	for (int i = 0; i < coffee; i++) { cout << "*"; }
	cout << endl;
	
	cout << "sugar" ;
	for (int i = 0; i < sugar; i++) { cout << "*"; }
	cout << endl;

	cout << "milk";
	for (int i = 0; i < milk; i++) { cout << "*"; }
	cout << endl;

	cout << "water";
	for (int i = 0; i < water; i++) { cout << "*"; }
	cout << endl;
}
```
- `show()` 함수 구현부,
- `cout` 을 이용해 먼저 재료의 이름을 출력한다
- `for` 을 이용해 재료에 저장되어 있는 수 만큼의 `*` 을 출력한다.

`int main()`
- `main()` 함수 시작

`Coffee espresso;`
- Coffee 클래스의 espresso 객체 생성하고 기본 생성자를 호출한다

`Coffee americano(5, 0, 0, 10);`
- Coffee 클래스의 americano 객체를 생성하고 5, 0, 0, 10 을 매개변수로 전달한다.

`Coffee cappucchino(5, 1, 5, 2);`
- Coffee 클래스의 cappucchino 객체를 생성하고 5, 1, 5, 2 를 매개변수로 전달한다.

`Coffee mySweet(3, 7, 5, 5);`
- Coffee 클래스의 mySweet 객체를 생성하고 3, 7, 5, 5 를 매개변수로 전달한다.

`espresso.show();`
- `espresso` 객체의 `show()` 함수 호출

`cout << endl;`
- 줄바꿈 출력

`mySweet.show();`
- `mySweet` 함수의 `show()` 함수 호출

`return 0;`
- 0을 반환하고 `main()` 함수 종료
- 
## 2번문제 실행결과
<img width="1478" height="372" alt="image" src="https://github.com/user-attachments/assets/ed08dc07-0da8-47a3-943b-eb0cc4832f83" />
<br><br><br>

## 5번 문제

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Triangle `
- Triangle 클래스 선언

`private:`
- 접근지정자를 private로 설정


`int coffee;`
- 정수형 변수 coffee 선언

`int water;`
- 정수형 변수 water 선언

`int sugar;`
- 정수형 변수 sugar 선언

`public:`
- 접근지정자를 public 으로 설정

`CoffeeMachine():CoffeeMachine(5, 10, 6){}`
- 타겟 생성자 CoffeeMachine(int c, int w, int s) 를 호출하고 5, 10, 6 을 매개변수로 넘긴다

`CoffeeMachine(int c, int w, int s):coffee(c),water(w),sugar(s){}`
- 맴버 초기화 리스트를 이용해 c, w, s 를 각각 coffee, water, sugar 의 값에 넣는다.

`~CoffeeMachine() {}`
- 소멸자를 생성한다

`void drinkEspresso() { coffee -= 1; water -= 1; }`
- `drinkEspresso` 함수를 선언하고 coffee, water 에 원래 값에서 1을 뺀 값을 저장한다.
- 인
`void drinkAmericano() { coffee -= 1; water -= 2; }`


`void drinkSugarCoffee() { coffee -= 1; water -= 2; sugar -= 1; }`


`void full() { coffee = water = sugar = 10; }`


`void show() { cout << "[머신 상태] 커피:" << coffee << "	물:" << water << "	설탕:" << sugar << endl; }`


`int main()`


`CoffeeMachine java(5, 10, 6);`


`java.drinkEspresso();`


`java.show();`


`java.drinkAmericano();`


`java.show();`


`java.drinkSugarCoffee();`


`java.show();`


`java.full();`


`java.show();`


`return 0;`



## 5번문제 실행결과
<img width="1475" height="241" alt="image" src="https://github.com/user-attachments/assets/474f03f9-b22e-4f64-ae08-31ad925cbb25" />
<br><br><br>

## 7번 문제

`#include <iostream>`


`using namespace std;`


`class Storage`


`private:`


`int num;`


`double avg;`


`double temperature[10];`


`public:`


`Storage():num(0), avg(0), temperature{ 0 } {};`


`~Storage() {}`


`void dump();`


`double getAvg();`


`void put(double tmp);`


```cpp
void Storage::dump() {
	for (int i = 0; i < num; i++) {
		cout << temperature[i] << " ";
	}
}
```


```cpp
double Storage::getAvg() {
	for (int i = 0; i < num; i++) {
		avg += temperature[i];
	}
	return avg / double(num);
}
```


```cpp
void Storage::put(double tmp) {
	if (num < 10) {
		temperature[num] = tmp;
		num++;
	}
}
```


`int main()`


`Storage a;`


`a.put(36.7);`


`a.put(36.9);`


`a.put(36.4);`


`a.dump();`


`cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;`


`return 0;`


## 7번문제 실행결과
<img width="1475" height="233" alt="image" src="https://github.com/user-attachments/assets/74e7b530-7c3a-422a-8d67-9198ea8c74cc" />
