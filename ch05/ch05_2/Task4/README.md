# 실습과제 4

`#include<iostream>`

- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`

- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`void get_parts(double num, int& integer, double& fact);`

- 실수를 입력받아 정수부와 소수부를 참조 매개변수를 통해 분리하는 함수 선언

`int main(void)`

- main 함수 시작

`int i = 0;`

- 정수부를 저장할 변수 i를 선언하고 0으로 초기화한다.

`double f = 0.0;`

- 소수부를 저장할 변수 f를 선언하고 0.0으로 초기화한다.

`double num;`

- 사용자로부터 입력받을 실수를 저장할 변수 num 선언

`cout << "실수를 입력하시오 : ";`

- 안내 메시지 출력

`cin >> num;`

- 사용자로부터 실수를 입력받아 num에 저장한다.

`get_parts(num, i, f);`

- num은 값으로, i와 f는 참조로 전달하여 함수를 호출한다. 이때 integer는 i의 공간을, fact는 f의 공간을 공유한다.

`cout << "정수부 : " << i << endl;`

- i를 출력한다.

`cout << "소수부 : " << f << endl;`

- f를 출력한다.

`return 0;`

- 0을 반환하고 main 함수를 종료한다.

`void get_parts(double num, int& integer, double& fact)`

- get_parts 함수 구현부, 참조 매개변수 integer와 fact는 각각 i와 f의 메모리 주소를 직접 가리킨다.

`integer = (int)num;`

- 실수 num을 int형으로 강제 형변환하여 소수점을 버리고 정수 부분만 integer에 저장한다.

`fact = num - integer;`

- 전체 실수값에서 정수부를 빼서 남은 소수 부분을 fact에 저장한다.



## 실행결과
<img width="977" height="132" alt="image" src="https://github.com/user-attachments/assets/e05e28b9-2be9-4102-a3f1-dd47aa10ab64" />
