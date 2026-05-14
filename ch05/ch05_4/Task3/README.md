

`#include <iostream>`

- `cin`, `cout` 등 입출력을 위한 헤더파일 포함.

`using namespace std;`

- `std` 네임스페이스의 이름을 생략하고 사용하도록 설정.

`class MyStack { ... };`

- 정수형 데이터를 저장하는 스택 클래스 선언.

`int* p;`

- 데이터를 저장할 동적 배열 포인터 변수.

`int size = 0;`

- 스택의 전체 크기를 저장하는 변수.

`int tos = 0;`

- 스택의 현재 위치를 가리키는 변수.

`MyStack() :MyStack(10){}`

- 기본 크기를 10으로 정함.

`MyStack(int size);`

- 사이즈 정해서 스택 만드는 생성자 선언.

`MyStack(const MyStack& src);`

- 메모리 새로 파서 복사하는 깊은 복사 생성자 선언.

`~MyStack() { delete[] p; }`

- 동적 할당한 메모리 해제함.

`bool push(int n);`

- 스택에 값을 넣는 함수 선언.

`bool pop(int& n);`

- 값을 꺼내서 참조 매개변수 `n`에 저장하는 함수 선언.

`MyStack::MyStack(int size){ ... }`

- 입력받은 크기만큼 배열을 동적 할당한다.

`MyStack::MyStack(const MyStack& src){ ... }`

- 복사 생성자 구현부, 별도 메모리 확보해서 내용 옮겨 닮음.

`for (int i = 0; i < this->size; i++) { this->p[i] = src.p[i]; }`

- 반복문 돌리면서 원본 값을들을 하나씩 복사한다.

`bool MyStack::push(int n){ ... }`

- 꽉 찼으면 `false` 반환하고 아니면 값을 넣는다.

`bool MyStack::pop(int& n){ ... }`

- 비었으면 `false` 반환하고 아니면 `n`에 값을 넘겨준다.

`int main() {`

- `main` 함수 시작.

`MyStack a(10);`

- 크기 10짜리 스택 객체 `a` 생성.

`MyStack b = a;`

- `a` 복사해서 `b` 만듦. 이때 `src`는 `a`의 별명이 된다.

`b.push(30);`

- `b`에만 30 추가한다.

`a.pop(n);`

- `a`에서 값을 꺼내서 `n`에 저장한다.

`return 0;`

- 0을 반환하고 `main` 함수를 종료한다.

## 실행결과
<img width="978" height="135" alt="image" src="https://github.com/user-attachments/assets/ea3babea-88c9-476f-b5c9-2dc0c8265f73" />
