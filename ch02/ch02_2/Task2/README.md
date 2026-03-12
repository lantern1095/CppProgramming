# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작

`int x = 0;`
- 정수형 변수 x를 선언하고 0으로 초기화

`int y = 0;`
- 정수형 변수 y를 선언하고 0으로 초기화

`cout << "정수 x를 입력 하시오 : ";`
- cout 객체를 사용해 정수 x를 출력받기 위한 문장을 화면에 출력한다.

`cin >> x;`
- cin 객체를 이용하여 키보드에서 값을 입력받아 x에 저장한다.

`y = (x * x) + 2 * x - 5;`
- 방정식을 계산하여 y에 저장한다.

`cout << "x = " << x << "일때 y의 값은 " << y << "입니다.";`
- cout 객체를 사용해 계산 결과를 화면에 출력한다.

`return 0;`
- 0을 반환하고 메인 함수를 종료한다.



## 실행 결과
<img width="1474" height="177" alt="image" src="https://github.com/user-attachments/assets/9751b918-c9c0-4d7b-ab92-ffa0d23d7b2c" />
