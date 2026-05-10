# 실습과제 3
`#include<iostream>`

- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`void swap(int& a, int & b);`

- 두 개의 정수형 참조 변수를 매개변수로 받아 값을 교환하는 함수 선언

`int main(void)`

- main 함수 시작

`int x, y;`

- 정수 값을 저장할 변수 x와 y 선언

`cout << "정수 x를 입력 하시오 : ";`

- 안내 메시지 출력

`cin >> x;`

- 사용자로부터 정수를 입력받아 x에 저장한다.

`cout << "정수 y를 입력 하시오 : ";`

- 안내 메시지 출력

`cin >> y;`

- 사용자로부터 정수를 입력받아 y에 저장한다.

`cout << "swap 함수 호출 전 x = " << x << ", y = " << y << endl;`

- 함수 호출 전의 x와 y 값을 출력하여 확인한다.

`swap(x, y);`

- x와 y 변수를 인자로 전달하여 swap 함수를 호출한다. 이때 a는 x의 공간을, b는 y의 공간을 공유한다.

`cout << "swap 함수 호출 후 x = " << x << ", y = " << y << endl;`

- 함수 호출을 통해 원본 값이 서로 교환된 x와 y의 값을 출력한다.

`return 0;`

- 0을 반환하고 main 함수를 종료한다.

`void swap(int& a, int& b)`

- swap 함수 구현부, 참조 매개변수 a와 b는 각각 전달받은 인자의 메모리 공간을 직접 참조한다.

`int tmp = a;`

- a의 값을 tmp에 저장한다.

`a = b;`

- b의 값을 a에 저장한다.

`b = tmp;`

- tmp의 값을 b에 저장한다.


## 실행결과
<img width="976" height="151" alt="image" src="https://github.com/user-attachments/assets/9eeeaf36-bb91-4fbb-b558-df1d2cfb4b4a" />
