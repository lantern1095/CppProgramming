# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작

`double num = 0;`
- 실수형 변수 num을 선언하고 0으로 초기화

`double sum = 0;`
- 실수형 변수 sum을 선언하고 0으로 초기화

`cout << "실수 5개를 입력하세요 : ";`
- cout 객체를 사용하여 실수 입력을 알리는 문장을 화면에 출력한다.

`for (int i = 0; i < 5; i++)`
- 정수형 변수 i를 선언함과 동시에 0으로 초기화하고, 5보다 작을 때까지 (4가 될 때까지) i를 1씩 증가시킨다.

`cin >> num;`
- cin 객체를 사용해 키보드에서 값을 입력받아 num에 저장한다.

`if (num > 0)`
- num이 0보다 클 경우에 대한 if문

`sum += num;`
- sum의 값에 num의 값을 더하여 저장한다.

`cout << "양수 합은 " << sum << "입니다.";`
- cout 객체를 사용하여 sum의 결과를 출력한다.

## 실행 결과
<img width="1481" height="225" alt="image" src="https://github.com/user-attachments/assets/d7fa902a-e6e3-4fca-b780-64c22f5eaa64" />
