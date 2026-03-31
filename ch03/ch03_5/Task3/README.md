# 2번 문제

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class Coffee`
- Coffee 클래스 선

`private:`
- 접근지정자를 private로 설정

`int coffee, sugar, milk, water;`
- 정수형 변수 coffee, sugar, milk, water 선언

`public:`
- 접근지정자를 public으로 설정

`void show();`
- 

`Coffee():Coffee(10,0,0,0) {}`


`Coffee(int c, int s, int m, int w) {`


`coffee = c; sugar = s; milk = m; water = w;`


`}`


`~Coffee() {}`


`inline void Coffee::show() {`


`cout << "coffee";`


`for (int i = 0; i < coffee; i++) cout << "*";`


`cout << endl;`


`cout << "sugar" ;`


`for (int i = 0; i < sugar; i++) cout << "*";`


`cout << endl;`


`cout << "milk";`


`for (int i = 0; i < milk; i++) cout << "*";`


`cout << endl;`


`cout << "water";`


`for (int i = 0; i < water; i++) cout << "*";`


`cout << endl;`


`}`


`int main()`


`Coffee espresso;`


`Coffee americano(5, 0, 0, 10);`


`Coffee cappucchino(5, 1, 5, 2);`


`Coffee mySweet(3, 7, 5, 5);`


`espresso.show();`


`cout << endl;`


`mySweet.show();`


`return 0;`


## 2번문제 실행결과
<img width="1478" height="372" alt="image" src="https://github.com/user-attachments/assets/ed08dc07-0da8-47a3-943b-eb0cc4832f83" />
<br><br><br>

## 5번문제 실행결과
<img width="1475" height="241" alt="image" src="https://github.com/user-attachments/assets/474f03f9-b22e-4f64-ae08-31ad925cbb25" />
<br><br><br>

## 7번문제 실행결과
<img width="1475" height="233" alt="image" src="https://github.com/user-attachments/assets/74e7b530-7c3a-422a-8d67-9198ea8c74cc" />
