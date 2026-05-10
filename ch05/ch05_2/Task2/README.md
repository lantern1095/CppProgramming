## 2만큼 증가하지 않는 이유
- add2의 매개변수는 값에 의한 호출 방식을 사용하고 있고, add2 함수는 반환값을 가지지 않기에, add2 함수가 종료된 후 같이 소멸된다. 때문에 main() 함수 내부의 number 변수의 값도 그대로인 것이다.

## 수정한 코드

`#include<iostream>`

- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`void add2(int &value);`

- 정수형 참조 변수를 매개변수로 받아 값을 2 증가시키는 함수 선언

`int main(void)`

- main 함수 시작

`int number;`

- 정수 값을 저장할 변수 number 선언

`cout << "정수를 입력하세요 : ";`

- 안내 메시지 출력

`cin >> number;`

- 사용자로부터 정수를 입력받아 number에 저장한다.

`add2(number);`

- number 변수를 인자로 전달하여 add2 함수를 호출한다.

`cout << "2만큼 증가한 값 : " << number << endl;`

- number의 값을 출력한다.

`return 0;`

- 0을 반환하고 main 함수를 종료한다.

`void add2(int &value)`

- add2 함수 구현부, 참조 매개 변수 value는 number의 공간을 공유한다.

`value += 2;`

- value의 값에 2를 더한다.
